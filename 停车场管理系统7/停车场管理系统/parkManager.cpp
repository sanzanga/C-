#include "parkManager.h"

parkManager::parkManager()
{
	ifstream ifs;
	ifs.open(FILENAME1, ios::in);//�Զ��ļ��ķ�ʽ��
	if (!ifs.is_open())//�ļ���ʧ��
	{
		//cout << "�ļ�������" << endl;
		//��ʼ������������
		this->m_CarNum = 0;
		//��ʼ��ͣ��������
		this->carInfoArray = NULL;
		//�ļ�Ϊ��
		this->fileIsEmpty = true;
		//�ر��ļ�
		ifs.close();
	}

	//�ļ����ڣ�����û������
	char c;
	ifs >> c;
	if (ifs.is_open() && ifs.eof())//������ַ����ļ���ĩβ��Ҳ����û�����ݣ�
	{
		//cout << "�ļ����ڣ������ݲ�����" << endl;
		//��ʼ������������
		this->m_CarNum = 0;
		//��ʼ��ͣ��������
		this->carInfoArray = NULL;
		//�ļ�Ϊ��
		this->fileIsEmpty = true;
		//�ر��ļ�
		ifs.close();
	}

	if (ifs.is_open() && !ifs.eof())
	{
		//�ļ����ڣ�����Ҳ����Ӧ����
		//���õ�ͣ�������ж�������
		this->m_CarNum = this->getCarInfoNum();
		//cout << this->m_CarNum << endl;
		this->carInfoArray = new Car * [this->m_CarNum];
		//Ȼ��ÿ��������Ϣ���浽���鵱��
		this->init_Car();
		this->fileIsEmpty = false;
	}

	ifs.open(FILENAME2, ios::in);
	if (!ifs.is_open())
	{
		this->carNumInAccess = 0;
		ifs.close();
		return;
	}
	ifs >> c;
	if (ifs.eof())
	{
		this->carNumInAccess = 0;
		ifs.close();
		return;
	}

	//�õ�ͨ���ϵĳ�������
	this->carNumInAccess += this->getCarInAccessNum();
	//cout << this->carNumInAccess << endl;
	this->carInAccessInfo = new Access * [this->carNumInAccess];
	//��ʼ��ͨ������
	this->initAccess();

	//���Դ���
	/*for (int i = 0; i < this->m_CarNum; i++)
	{
		cout << "���ƺţ�" << this->carInfoArray[i]->carNum
			<< "\t��ɫ��" << this->carInfoArray[i]->carColor
			<< "\t���ͣ�" << this->carInfoArray[i]->getCarShape()
			<< "\t����ʱ�䣺" << this->carInfoArray[i]->getTime.year << "."
			<< this->carInfoArray[i]->getTime.month << "." << this->carInfoArray[i]->getTime.day
			<< "." << this->carInfoArray[i]->getTime.hour << "." << this->carInfoArray[i]->getTime.minute
			<< endl;
	}*/

	/*cout << "���ƺ�" << "\t��ɫ" << "\t����" << endl;
	for (int i = 0; i < this->carNumInAccess; i++)
	{
		cout << this->carInAccessInfo[i]->carNum
			<< "\t" << this->carInAccessInfo[i]->carColor
			<< "\t" << this->carInAccessInfo[i]->carShapeNum << endl;
	}*/
}

//չʾ�˵�
void parkManager::shouMenu()
{
	cout << "************************************" << endl;
	cout << "****** ��ӭʹ��ͣ��������ϵͳ��*****" << endl;
	cout << "********* 0.�˳�������� ***********" << endl;
	cout << "********* 1.���ӳ�����Ϣ ***********" << endl;
	cout << "********* 2.��ʾ������Ϣ ***********" << endl;
	cout << "********* 3.�����뿪ͣ���� *********" << endl;
	cout << "********* 4.ɾ��������¼ ***********" << endl;
	cout << "********* 5.�޸ĳ�����Ϣ ***********" << endl;
	cout << "********* 6.��ѯ������Ϣ ***********" << endl;
	cout << "********* 7.ͳ�Ƴ�����Ϣ ***********" << endl;
	cout << "*********   8.�շѱ�׼   ***********" << endl;
	cout << "************************************" << endl;
}

//�˳�ϵͳ
void parkManager::ExistSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

//չʾ�շѱ�׼
void parkManager::showRates()
{
	cout << "ͣ�����շѱ�׼���£�" << endl;
	cout << "1���κγ���һ��Сʱ�ڲ��շѡ�" << endl;
	cout << "2������һ��Сʱ��С����һСʱ1Ԫ��С��һСʱ1Ԫ���п�һСʱ1.5Ԫ����һСʱ2Ԫ��" << endl;
	cout << "3������һСʱ��һСʱ�շѡ�" << endl;
	system("pause");
	system("cls");
}

//���ӳ�����Ϣ
void parkManager::addCarInfo()
{
	if (m_CarNum + 1 <= MAX)//��ͣ��������������С��ͣ���������������ó�����ͣ��ͣ����
	{
		int newSize = m_CarNum + 1;//�µĿռ��С=ԭ��������+1
		//�����µĴ��泵��Ϣ�Ŀռ�
		//���ټ�¼�����ָ��
		Car** newSpace = new Car * [newSize];
		//��ԭ���ĳ�����Ϣ�������¿��ٵ���������
		if (this->carInfoArray != NULL)
		{
			for (int i = 0; i < this->m_CarNum; i++)
			{
				newSpace[i] = this->carInfoArray[i];
			}
		}

		//�������
		string carNum;//���ƺ�
		string carColor;//������ɫ
		int carShapeNum;//���ͺŵ����
		int year, month, day, hour, minute;//����������ꡢ�¡��ա�Сʱ������

		cout << "�����복�ƺţ�";
		cin >> carNum;

		//�жϳ��ƺ��Ƿ����
		bool b = true;
		while (b)
		{
			b = false;
			if (this->fileIsEmpty)
			{
				b = false;
			}
			for (int i = 0; i < this->m_CarNum; i++)
			{
				if (carNum == carInfoArray[i]->carNum)
				{
					b = true;
					break;
				}
			}
			if (b)
			{
				cout << "���ƺ������������������룡" << endl;
				cin >> carNum;
			}
		}

		cout << "�����복����ɫ��";
		cin >> carColor;

		cout << "�����복������ͣ������ʱ��";
		cout << "(2020 2 2 10 10----����2020��2��2��10��10�ֽ���ͣ����)" << endl;
		cin >> year >> month >> day >> hour >> minute;
		Time getTime(year, month, day, hour, minute);

		cout << "�����복���ͺű�ţ�" << endl;
		cout << "1��С����" << endl;
		cout << "2��С�Ϳ���" << endl;
		cout << "3�����Ϳ���" << endl;
		cout << "4�����Ϳ���" << endl;
		cin >> carShapeNum;
		while (true)
		{
			if (carShapeNum == 1 || carShapeNum == 2 || carShapeNum == 3 || carShapeNum == 4)
			{
				break;
			}
			else
			{
				cout << "�����������������룺";
				cin >> carShapeNum;
			}
		}

		Car* car = NULL;
		switch (carShapeNum)
		{
		case 1:
			car = new SmallCar(carNum, carColor, carShapeNum, getTime);
			break;
		case 2:
			car = new SmallTruck(carNum, carColor, carShapeNum, getTime);
			break;
		case 3:
			car = new MediumTruck(carNum, carColor, carShapeNum, getTime);
			break;
		case 4:
			car = new BigTruck(carNum, carColor, carShapeNum, getTime);
			break;
		default:
			break;
		}
		//����ӵĳ�����Ϣ���浽���鵱��
		//ע�⣺newSize��¼�����ܵĳ�������������������������±꣬��Ҫ������м�һ�Ĳ���
		newSpace[newSize - 1] = car;

		//�ͷ�ԭ�������Ϣ������
		delete[] this->carInfoArray;

		//��ԭ��������ָ���µ�����
		this->carInfoArray = newSpace;

		//����ͣ��������ĳ�������
		this->m_CarNum++;

		cout << "��ӳɹ���" << endl;

		//����ӳɹ��س�����Ϣ���浽���ص���
		this->save();
	}
	else//��ͨ���ϵȴ�
	{
		cout << "ͣ���������������복�ƺš���ɫ�ͳ�����ͨ���ϵȺ�" << endl;
		string carNum;//���ƺ�
		string carColor;//������ɫ
		int carShapeNum;

		cout << "�����복�ƺţ�";
		cin >> carNum;

		//�жϳ��ƺ��Ƿ����
		bool b = true;
		while (b)
		{
			b = false;
			if (this->fileIsEmpty)
			{
				b = false;
			}
			for (int i = 0; i < this->m_CarNum; i++)
			{
				if (carNum == this->carInfoArray[i]->carNum)
				{
					b = true;
					break;
				}
			}
			for (int i = 0; i < this->carNumInAccess; i++)
			{
				if (carNum == this->carInAccessInfo[i]->carNum)
				{
					b = true;
					break;
				}
			}
			if (b)
			{
				cout << "���ƺ������������������룡" << endl;
				cin >> carNum;
			}
		}

		cout << "�����복����ɫ��";
		cin >> carColor;

		cout << "�����복���ͺţ�" << endl;
		cout << "1��С����" << endl;
		cout << "2��С�Ϳ���" << endl;
		cout << "3�����Ϳ���" << endl;
		cout << "4�����Ϳ���" << endl;
		cin >> carShapeNum;
		while (true)
		{
			if (carShapeNum == 1 || carShapeNum == 2 || carShapeNum == 3 || carShapeNum == 4)
			{
				break;
			}
			else
			{
				cout << "�����������������룺";
				cin >> carShapeNum;
			}
		}

		Access* access = new Access(carNum, carColor, carShapeNum);
		this->carInAccessInfo[this->carNumInAccess] = access;

		//ͨ��������1
		this->carNumInAccess++;
		//�������ݵ���Ӧ�ļ�
		this->save1();
	}

	system("pause");
	system("cls");
}

//���泵����Ϣ
void parkManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME1, ios::out);//������ķ�ʽ���ļ�---д�ļ�

	//�������ÿ����Ϣ���浽�ļ�����
	//ofs << "���ƺ�\t" << "��ɫ\t" << "����\t" << "����ʱ��\t" << endl;
	for (int i = 0; i < this->m_CarNum; i++)
	{
		ofs << this->carInfoArray[i]->carNum << " \t"
			<< this->carInfoArray[i]->carColor << " \t"
			<< this->carInfoArray[i]->getCarShape() << " \t"
			<< this->carInfoArray[i]->getTime.year << " " << this->carInfoArray[i]->getTime.month << " "
			<< this->carInfoArray[i]->getTime.day << " " << this->carInfoArray[i]->getTime.hour << " "
			<< this->carInfoArray[i]->getTime.minute << endl;
	}

	//�ر��ļ�
	ofs.close();
}

//��ȡ�ļ��е���������
int parkManager::getCarInfoNum()
{
	int num = 0;

	//���ļ�
	ifstream ifs;
	ifs.open(FILENAME1, ios::in);

	string carNum;//���ƺ�
	string carColor;//������ɫ
	string carShape;//����
	int year, month, day, hour, minute;//�����ʱ��

	while (ifs >> carNum && ifs >> carColor && ifs >> carShape &&
		ifs >> year && ifs >> month && ifs >> day && ifs >> hour && ifs >> minute)
	{
		num++;
	}
	return num;
}

//��ʼ��ָ������
void parkManager::init_Car()
{
	ifstream ifs;//���ļ�
	ifs.open(FILENAME1, ios::in);//ios::inΪ���ļ����ļ�

	string carNum;//���ƺ�
	string carColor;//������ɫ
	string carShape;//����
	int carShapeNum;//���͵ı��
	int year, month, day, hour, minute;//�����ʱ��

	int a = 0;//��¼������±�

	while (ifs >> carNum && ifs >> carColor && ifs >> carShape &&
		ifs >> year && ifs >> month && ifs >> day && ifs >> hour && ifs >> minute)
	{
		Car* car = NULL;
		if (carShape == "С����")
		{
			carShapeNum = 1;
		}
		else if (carShape == "С��")
		{
			carShapeNum = 2;
		}
		else if (carShape == "�п�")
		{
			carShapeNum = 3;
		}
		else
		{
			carShapeNum = 4;
		}

		Time getTime(year, month, day, hour, minute);
		switch (carShapeNum)//������������������ö��
		{
		case 1:
			car = new SmallCar(carNum, carColor, carShapeNum, getTime);
			break;
		case 2:
			car = new SmallTruck(carNum, carColor, carShapeNum, getTime);
			break;
		case 3:
			car = new MediumTruck(carNum, carColor, carShapeNum, getTime);
			break;
		case 4:
			car = new BigTruck(carNum, carColor, carShapeNum, getTime);
			break;
		default:
			break;
		}
		//���������ݷ������鵱��ȥ
		this->carInfoArray[a] = car;
		a++;
	}
	this->fileIsEmpty = false;
	//�ر��ļ�
	ifs.close();
}

//��ʾ������Ϣ
void parkManager::showCarInfo()
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ������ڻ���Ϊ�գ�" << endl;
	}
	else
	{
		cout << "���ƺ�\t\t��ɫ\t����\t����ʱ��\t" << endl;
		for (int i = 0; i < this->m_CarNum; i++)
		{
			this->carInfoArray[i]->showParkInfo();
		}
	}

	//�����������
	system("pause");
	system("cls");
}

//���ͨ���ϳ�������
int parkManager::getCarInAccessNum()
{
	int num = 0;
	ifstream ifs;
	ifs.open(FILENAME2, ios::in);

	string carNum;//���ƺ�
	string carColor;//������ɫ
	string carShape;//����

	while (ifs >> carNum && ifs >> carColor && ifs >> carShape)
	{
		num++;
	}
	return num;
}

//����ͨ���ϵĳ�����Ϣ
void parkManager::save1()
{
	ofstream ofs;
	ofs.open(FILENAME2, ios::out);//д�ļ�

	for (int i = 0; i < this->carNumInAccess; i++)
	{
		ofs << this->carInAccessInfo[i]->carNum << "\t"
			<< this->carInAccessInfo[i]->carColor << "\t"
			<< this->carInAccessInfo[i]->carShapeNum << "\t" << endl;
	}
	//�ر��ļ�
	ofs.close();
}

//��ʼ��ͨ������
void parkManager::initAccess()
{
	int num = 0;
	int a = 0;//��¼������±�

	//���ļ�
	ifstream ifs;
	ifs.open(FILENAME2, ios::in);

	string carNum;//���ƺ�
	string carColor;//������ɫ
	int carShapeNum;//����

	while (ifs >> carNum && ifs >> carColor && ifs >> carShapeNum)
	{
		Access* access = new Access(carNum, carColor, carShapeNum);
		this->carInAccessInfo[a] = access;
		a++;
	}

	ifs.close();
}

//�����뿪ͣ����
void parkManager::carLeave()
{

	if (!this->fileIsEmpty)
	{
		cout << "�������뿪�����ĳ��ƺţ�";
		string carNum;//���ƺ�
		cin >> carNum;
		int index = this->carNumIsExist(carNum);
		if (index == -1)
		{
			cout << "���복��������δ�ҵ��ó���" << endl;
		}
		else
		{
			cout << carNum << "��Ϣ���£�" << endl;
			this->carInfoArray[index]->showParkInfo();
			cout << "�����복���뿪ʱ�䣺" << endl;
			cout << "(2020 2 2 10 10----����2020��2��2��10��10���뿪ͣ����)" << endl;
			int year, month, day, hour, minute;
			cin >> year >> month >> day >> hour >> minute;
			Time leaveTime(year, month, day, hour, minute);
			if (this->carInfoArray[index]->carShape == 1)
			{
				this->carInfoArray[index] = new SmallCar(this->carInfoArray[index]->carNum,
					this->carInfoArray[index]->carColor, this->carInfoArray[index]->carShape,
					this->carInfoArray[index]->getTime, leaveTime);
			}
			else if (this->carInfoArray[index]->carShape == 2)
			{
				this->carInfoArray[index] = new SmallTruck(this->carInfoArray[index]->carNum,
					this->carInfoArray[index]->carColor, this->carInfoArray[index]->carShape,
					this->carInfoArray[index]->getTime, leaveTime);
			}
			else if (this->carInfoArray[index]->carShape == 3)
			{
				this->carInfoArray[index] = new MediumTruck(this->carInfoArray[index]->carNum,
					this->carInfoArray[index]->carColor, this->carInfoArray[index]->carShape,
					this->carInfoArray[index]->getTime, leaveTime);
			}
			else
			{
				this->carInfoArray[index] = new BigTruck(this->carInfoArray[index]->carNum,
					this->carInfoArray[index]->carColor, this->carInfoArray[index]->carShape,
					this->carInfoArray[index]->getTime, leaveTime);
			}
			//չʾ�ó�������Ϣ����������
			cout << carNum << "������Ϣ���£�" << endl;
			this->carInfoArray[index]->showInfo();
			//ɾ��ͣ�����ڵ���Ϣ�����Ҿ��������Ϣǰ��һλ
			this->DelCar(carNum);
			//��ͨ�����г�������ͣ����
			this->accessToPark();
		}
	}
	else
	{
		cout << "�ļ�Ϊ�ջ������ݲ����ڣ�" << endl;
	}

	system("pause");
	system("cls");
}

//�жϲ��ҵĳ��ƺ��Ƿ����
int parkManager::carNumIsExist(string carNum)
{
	int index = -1;

	for (int i = 0; i < this->m_CarNum; i++)
	{
		if (this->carInfoArray[i]->carNum == carNum)
		{
			//�ҵ��±�
			index = i;
			break;
		}
	}
	//��index��-1��û���ҵ�
	return index;
}

//�ú��������������뿪��ʱ��ɾ����Ϣ
void parkManager::DelCar(string carNum)
{
	int index = this->carNumIsExist(carNum);
	//����������ǰ��
	//�����ڳ����뿪ͣ�����Ѿ��жϹ���������
	for (int i = index; i < this->m_CarNum - 1; i++)
	{
		this->carInfoArray[i] = this->carInfoArray[i + 1];
	}
	//���³�������
	this->m_CarNum--;
	//���ҽ�ɾ�����ñ��浽�ļ�����
	this->save();
	cout << "�뿪�ɹ���" << endl;
}

//ͨ���ϵĳ�������ͣ����
void parkManager::accessToPark()
{
	//ͨ�������г����Ϳ��Խ���ͣ����
	if (this->carNumInAccess > 0)
	{
		cout << "ͨ���ϵ�һ��������ͣ����" << endl;
		cout << "�����복������ͣ������ʱ��";
		cout << "(2020 2 2 10 10----����2020��2��2��10��10�ֽ���ͣ����)" << endl;
		int year, month, day, hour, minute;//����ʱ��
		cin >> year >> month >> day >> hour >> minute;
		Time getTime(year, month, day, hour, minute);
		string carNum = this->carInAccessInfo[0]->carNum;
		string carColor = this->carInAccessInfo[0]->carColor;
		int carShapeNum = this->carInAccessInfo[0]->carShapeNum;
		switch (carShapeNum)//������������������ö��
		{
		case 1:
			this->carInfoArray[this->m_CarNum] = new SmallCar(carNum, carColor, carShapeNum, getTime);
			break;
		case 2:
			this->carInfoArray[this->m_CarNum] = new SmallTruck(carNum, carColor, carShapeNum, getTime);
			break;
		case 3:
			this->carInfoArray[this->m_CarNum] = new MediumTruck(carNum, carColor, carShapeNum, getTime);
			break;
		case 4:
			this->carInfoArray[this->m_CarNum] = new BigTruck(carNum, carColor, carShapeNum, getTime);
			break;
		default:
			break;
		}
		//���³�������
		this->m_CarNum++;
		//��ͨ���ϵĳ�����ǰ��һλ
		for (int i = 0; i < this->carNumInAccess - 1; i++)
		{
			this->carInAccessInfo[i] = this->carInAccessInfo[i + 1];
		}
		//����ͨ���ϳ�������
		this->carNumInAccess--;
		//����ͨ���Ϻ�ͣ�����ڵ���Ϣ
		this->save();
		this->save1();
	}
}

//ɾ��������Ϣ
void parkManager::DelCar()
{
	if (!this->fileIsEmpty)
	{
		cout << "������Ҫɾ�������ĳ��ƺţ�";
		string carNum;
		cin >> carNum;
		int index = this->carNumIsExist(carNum);
		if (index == -1)
		{
			cout << "������Ϣ�����ڣ�" << endl;
		}
		else
		{
			//����������ǰ��
			//�����ڳ����뿪ͣ�����Ѿ��жϹ���������
			for (int i = index; i < this->m_CarNum - 1; i++)
			{
				this->carInfoArray[i] = this->carInfoArray[i + 1];
			}
			//���³�������
			this->m_CarNum--;
			//���ҽ�ɾ�����ñ��浽�ļ�����
			this->save();
			cout << "ɾ���ɹ���" << endl;
			//���ͨ�����г���������Խ���ͣ����
			this->accessToPark();
		}
	}
	else
	{
		cout << "�ļ������ڻ���Ϊ�գ�" << endl;
	}

	system("pause");
	system("cls");
}

//�޸ĳ�����Ϣ
void parkManager::ModCarInfo()
{
	if (!this->fileIsEmpty)
	{
		cout << "������Ҫ���ҵó������ƺţ�";
		string carNum1;
		cin >> carNum1;
		int index = this->carNumIsExist(carNum1);
		if (index == -1)
		{
			cout << "����ʧ�ܣ����ҳ��������ڣ�" << endl;
		}
		else
		{
			//���ҵ���Ӧ������Ϣ
			string carNum;
			string carColor;//������ɫ
			int carShapeNum;//���ͺŵ����
			int year, month, day, hour, minute;//����������ꡢ�¡��ա�Сʱ������

			cout << "���������복�ƺţ�";
			cin >> carNum;

			//�жϳ��ƺ��Ƿ����
			bool b = true;
			while (b)
			{
				b = false;
				if (this->fileIsEmpty)
				{
					b = false;
				}
				for (int i = 0; i < this->m_CarNum; i++)
				{
					if (carNum == carInfoArray[i]->carNum)
					{
						if (carNum == carNum1)
							b = false;
						else
						{
							b = true;
							break;
						}
					}
				}
				if (b)
				{
					cout << "���ƺ������������������룡" << endl;
					cin >> carNum;
				}
			}

			cout << "���������복����ɫ��";
			cin >> carColor;

			cout << "���������복������ͣ������ʱ��";
			cout << "(2020 2 2 10 10----����2020��2��2��10��10�ֽ���ͣ����)" << endl;
			cin >> year >> month >> day >> hour >> minute;
			Time getTime(year, month, day, hour, minute);

			cout << "���������복���ͺű�ţ�" << endl;
			cout << "1��С����" << endl;
			cout << "2��С�Ϳ���" << endl;
			cout << "3�����Ϳ���" << endl;
			cout << "4�����Ϳ���" << endl;
			cin >> carShapeNum;
			while (true)
			{
				if (carShapeNum == 1 || carShapeNum == 2 || carShapeNum == 3 || carShapeNum == 4)
				{
					break;
				}
				else
				{
					cout << "�����������������룺";
					cin >> carShapeNum;
				}
			}

			Car* car = NULL;
			switch (carShapeNum)
			{
			case 1:
				car = new SmallCar(carNum, carColor, carShapeNum, getTime);
				break;
			case 2:
				car = new SmallTruck(carNum, carColor, carShapeNum, getTime);
				break;
			case 3:
				car = new MediumTruck(carNum, carColor, carShapeNum, getTime);
				break;
			case 4:
				car = new BigTruck(carNum, carColor, carShapeNum, getTime);
				break;
			default:
				break;
			}
			//���޸Ĺ�����Ϣ���´�������鵱��
			this->carInfoArray[index] = car;
			cout << "�޸ĳɹ���" << endl;
			//���浽�ļ�����
			this->save();
		}
	}
	else
	{
		cout << "�ļ������ڻ���Ϊ�գ�" << endl;
	}

	system("pause");
	system("cls");
}

//��ѯ����
void parkManager::searchInfo()
{
	if (!this->fileIsEmpty)
	{
		cout << "��ѯ��ʽ��" << endl;
		cout << "1�����ݳ��ƺŽ��в���" << endl;
		cout << "2��������ɫ���в���" << endl;
		cout << "3�����ݳ��ͽ��в���" << endl;
		cout << "4�����ݽ���ʱ�����в���" << endl;
		cout << "5�����ݽ���ʱ��ν��в���" << endl;
		cout << "��������ҵķ�ʽ";
		int chioce = 0;
		cin >> chioce;
		while (true)
		{
			if (chioce == 1)
			{
				cout << "������Ҫ���ҵĳ��ƺţ�";
				string carNum;
				cin >> carNum;
				int index = this->carNumIsExist(carNum);
				if (index != -1)
				{
					cout << "���ҳɹ�����Ӧ��Ϣ���£�" << endl;
					cout << "���ƺ�\t\t��ɫ\t����\t����ʱ��\t" << endl;
					this->carInfoArray[index]->showParkInfo();
				}
				else
				{
					cout << "����ʧ�ܣ�����ؼ�¼" << endl;
				}
				break;
			}
			else if (chioce == 2)
			{
				cout << "������Ҫ���ҳ�������ɫ��";
				string carColor;
				cin >> carColor;

				bool flag = true;//����¼�Ƿ��ҵ�
				for (int i = 0; i < this->m_CarNum; i++)
				{
					if (this->carInfoArray[i]->carColor == carColor)
					{
						if (flag)
						{
							cout << "���ҳɹ�����Ӧ��Ϣ���£�" << endl;
							cout << "���ƺ�\t\t��ɫ\t����\t����ʱ��\t" << endl;
						}
						flag = false;
						this->carInfoArray[i]->showParkInfo();
					}
				}
				if (flag)
				{
					cout << "����ʧ�ܣ�����ؼ�¼" << endl;
				}
				break;
			}
			else if (chioce == 3)
			{
				cout << "������Ҫ���ҵĳ��ͣ�" << endl;
				cout << "1��С����" << endl;
				cout << "2��С�Ϳ���" << endl;
				cout << "3�����Ϳ���" << endl;
				cout << "4�����Ϳ���" << endl;
				int carShapeNum;
				cin >> carShapeNum;

				bool flag = true;//����¼�Ƿ��ҵ�
				for (int i = 0; i < this->m_CarNum; i++)
				{
					if (this->carInfoArray[i]->carShape == carShapeNum)
					{
						if (flag)
						{
							cout << "���ҳɹ�����Ӧ��Ϣ���£�" << endl;
							cout << "���ƺ�\t\t��ɫ\t����\t����ʱ��\t" << endl;
						}
						flag = false;
						this->carInfoArray[i]->showParkInfo();
					}
				}
				if (flag)
				{
					cout << "����ʧ�ܣ�����ؼ�¼" << endl;
				}
				break;
			}
			else if (chioce == 4)
			{
				int year, month, day, hour, minute;
				cout << "��������Ҫ���ҵĽ���ͣ������ʱ��㣺" << endl;
				cout << "(2020 2 2 10 10----����2020��2��2��10��10��)" << endl;
				cin >> year >> month >> day >> hour >> minute;

				bool flag = true;//��¼�Ƿ��ҵ���Ӧ����
				for (int i = 0; i < this->m_CarNum; i++)
				{
					if (this->carInfoArray[i]->getTime.year == year &&
						this->carInfoArray[i]->getTime.month == month &&
						this->carInfoArray[i]->getTime.day == day &&
						this->carInfoArray[i]->getTime.hour == hour &&
						this->carInfoArray[i]->getTime.minute == minute)
					{
						if (flag)
						{
							cout << "���ҳɹ�����Ӧ��Ϣ���£�" << endl;
							cout << "���ƺ�\t\t��ɫ\t����\t����ʱ��\t" << endl;
						}
						flag = false;
						this->carInfoArray[i]->showParkInfo();
					}
				}
				if (flag)
				{
					cout << "����ʧ�ܣ�����ؼ�¼" << endl;
				}
				break;
			}
			else if (chioce == 5)
			{
				int year1, month1, day1, hour1, minute1;
				int year2, month2, day2, hour2, minute2;
				cout << "������Ҫ���ҵ�ʱ��Σ�" << endl;
				cout << "(2020 2 2 10 10----����2020��2��2��10��10��)" << endl;
				cout << "��ʼʱ�䣺";
				cin >> year1 >> month1 >> day1 >> hour1 >> minute1;
				cout << "��ֹʱ�䣺";
				cin >> year2 >> month2 >> day2 >> hour2 >> minute2;

				bool flag = true;
				for (int i = 0; i < this->m_CarNum; i++)
				{
					if ((this->carInfoArray[i]->getTime.year >= year1 && this->carInfoArray[i]->getTime.year <= year2 && year1 != year2)
						|| (year1 == year2 && this->carInfoArray[i]->getTime.year == year1
							&& this->carInfoArray[i]->getTime.month >= month1
							&& this->carInfoArray[i]->getTime.month <= month2
							&& month1 != month2)
						|| (year1 == year2 && this->carInfoArray[i]->getTime.year == year1
							&& month2 == month1 && this->carInfoArray[i]->getTime.month == month1
							&& this->carInfoArray[i]->getTime.day >= day1
							&& this->carInfoArray[i]->getTime.day <= day2
							&& month1 != month2)
						|| (year1 == year2 && this->carInfoArray[i]->getTime.year == year1
							&& month2 == month1 && this->carInfoArray[i]->getTime.month == month1
							&& day1 == day2 && this->carInfoArray[i]->getTime.day == day1
							&& this->carInfoArray[i]->getTime.hour >= hour1
							&& this->carInfoArray[i]->getTime.hour <= hour2 && hour1 != hour2)
						|| (year1 == year2 && this->carInfoArray[i]->getTime.year == year1
							&& month2 == month1 && this->carInfoArray[i]->getTime.month == month1
							&& day1 == day2 && this->carInfoArray[i]->getTime.day == day1
							&& hour1 == hour2 && this->carInfoArray[i]->getTime.hour == hour1
							&& this->carInfoArray[i]->getTime.minute >= minute1
							&& this->carInfoArray[i]->getTime.minute <= minute2 && minute1 != minute2)
						|| (year1 == year2 && this->carInfoArray[i]->getTime.year == year1
							&& month2 == month1 && this->carInfoArray[i]->getTime.month == month1
							&& day1 == day2 && this->carInfoArray[i]->getTime.day == day1
							&& hour1 == hour2 && this->carInfoArray[i]->getTime.hour == hour1
							&& minute1 == minute2 && this->carInfoArray[i]->getTime.minute == minute1))
					{
						if (flag)
						{
							cout << "���ҳɹ�����Ӧ��Ϣ���£�" << endl;
							cout << "���ƺ�\t\t��ɫ\t����\t����ʱ��\t" << endl;
						}
						flag = false;
						this->carInfoArray[i]->showParkInfo();
					}
				}
				if (flag)
				{
					cout << "����ʧ�ܣ�����ؼ�¼" << endl;
				}
				break;
			}
			else
			{
				cout << "ѡ������������ѡ��";
				cin >> chioce;
			}
		}
	}
	else
	{
		cout << "�ļ�Ϊ�ջ��߲����ڣ�" << endl;
	}

	system("pause");
	system("cls");
}

//ͳ�Ƴ�����Ϣ
void parkManager::sumCarInfo()
{
	if (!this->fileIsEmpty)
	{
		cout << "��ͳ�Ƶ���Ϣ���£�" << endl;
		cout << "1��ͣ�����г�������" << endl;
		cout << "2��ͣ�����г�����ɫ" << endl;
		cout << "3��ͣ�����еĳ���" << endl;
		cout << "4�����������ʱ��" << endl;
		cout << "������Ҫͳ�Ƶ���Ϣ��";
		int chioce;
		cin >> chioce;
		while (true)
		{
			if (chioce == 1)
			{
				cout << "ͣ�����г�������Ϊ��" << this->m_CarNum << "��" << endl;
				break;
			}
			else if (chioce == 2)
			{
				string carColors[MAX];//������ʲô��ɫ������
				int carColorNum[MAX] = { 0 };//ÿ����ɫ������
				int j = 1;//��¼�ܹ��ж�������ɫ

				carColors[0] = this->carInfoArray[0]->carColor;
				carColorNum[0]++;

				for (int i = 1; i < this->m_CarNum; i++)
				{
					//int num1 = j - 1;//��ɫ��Ӧ���±�
					//int num2=j;//��¼ѭ���Ĵ�������ɫ�������鶼Ҫ��һ��
					int num = j;
					bool flag = true;
					while (num)
					{
						if (this->carInfoArray[i]->carColor == carColors[num-1])
						{
							flag = false;
							carColorNum[num-1]++;
							break;
						}
						num--;
					}
					if (flag)
					{
						carColors[j] = this->carInfoArray[i]->carColor;
						carColorNum[j]++;
						j++;
					}
				}
				//��ӡ��Ϣ
				cout << "ͣ�����ڹ���" << j << "����ɫ�ĳ���������ϢΪ��" << endl;
				cout << "��ɫ\t" << "����������" << endl;
				for (int i = 0; i < j; i++)
				{
					cout<< carColors[i] << "\t" << carColorNum[i] << endl;
				}
				break;
			}
			else if (chioce == 3)
			{
				string carShapes[4];//����
				int carShapesNum[4] = { 0 };//��Ӧ���͵�����
				int j = 1;//��������

				carShapes[0] = this->carInfoArray[0]->getCarShape();
				carShapesNum[0]++;

				for (int i = 1; i < this->m_CarNum; i++)
				{
					//int num1 = j - 1;//��ɫ��Ӧ���±�
					//int num2=j;//��¼ѭ���Ĵ�������ɫ�������鶼Ҫ��һ��
					int num = j;
					bool flag = true;
					while (num)
					{
						if (this->carInfoArray[i]->getCarShape() == carShapes[num - 1])
						{
							flag = false;
							carShapesNum[num - 1]++;
							break;
						}
						num--;
					}
					if (flag)
					{
						carShapes[j] = this->carInfoArray[i]->getCarShape();
						carShapesNum[j]++;
						j++;
					}
				}
				//��ӡ��Ϣ
				cout << "ͣ�����ڹ���" << j << "�ֳ��ͣ�������ϢΪ��" << endl;
				cout << "����\t" << "����������" << endl;
				for (int i = 0; i < j; i++)
				{
					cout << carShapes[i] << "\t" << carShapesNum[i] << endl;
				}
				break;
			}
			else if (chioce == 4)
			{
				Time times[MAX];//��Ÿ���ʱ�������
				int timeNum[MAX] = { 0 };//��¼����ʱ�����������
				int j = 1;//��¼���ж�����ʱ��

				times[0].year = this->carInfoArray[0]->getTime.year;
				times[0].month = this->carInfoArray[0]->getTime.month;
				times[0].day = this->carInfoArray[0]->getTime.day;
				times[0].hour = this->carInfoArray[0]->getTime.hour;
				times[0].minute = this->carInfoArray[0]->getTime.minute;
				timeNum[0]++;

				for (int i = 1; i < this->m_CarNum; i++)
				{
					int num = j;
					bool flag = true;
					while (num)
					{
						if (this->carInfoArray[i]->getTime.year == times[num - 1].year
							&& this->carInfoArray[i]->getTime.month == times[num - 1].month
							&& this->carInfoArray[i]->getTime.day == times[num - 1].day
							&& this->carInfoArray[i]->getTime.hour == times[num - 1].hour
							&& this->carInfoArray[i]->getTime.minute == times[num - 1].minute)
						{
							flag = false;
							timeNum[num - 1]++;
							break;
						}
						num--;
					}
					if (flag)
					{
						times[j].year = this->carInfoArray[i]->getTime.year;
						times[j].month = this->carInfoArray[i]->getTime.month;
						times[j].day = this->carInfoArray[i]->getTime.day;
						times[j].hour = this->carInfoArray[i]->getTime.hour;
						times[j].minute = this->carInfoArray[i]->getTime.minute;
						timeNum[j]++;
						j++;
					}
				}
				//��ӡ��Ϣ
				cout << "ͣ�����ڹ���" << j << "�ֵ���ʱ�䣬������ϢΪ��" << endl;
				cout << "ʱ��\t\t" << "����������" << endl;
				for (int i = 0; i < j; i++)
				{
					cout << times[i].year << "." << times[i].month << "."
						<< times[i].day << "." << times[i].hour << "." 
						<< times[i].minute << "\t" << timeNum[i] << endl;
				}
				break;
			}
			else
			{
				cout << "ѡ������������ѡ��";
				cin >> chioce;
			}
		}
	}
	else
	{
		cout << "�ļ�Ϊ�ջ��߲����ڣ�" << endl;
	}

	system("pause");
	system("cls");
}

//��������
parkManager::~parkManager()
{
	if (this->carInfoArray != NULL)
	{
		for (int i = 0; i < this->m_CarNum; i++)
		{
			if (this->carInfoArray[i] != NULL)
			{
				delete[]this->carInfoArray[i];
			}
		}
		delete[] this->carInfoArray;
	}

	if (this->carInAccessInfo != NULL)
	{
		for (int i = 0; i < this->carNumInAccess; i++)
		{
			if (this->carInAccessInfo[i] != NULL)
			{
				delete this->carInAccessInfo[i];
			}
		}
		delete[] this->carInAccessInfo;
	}
}