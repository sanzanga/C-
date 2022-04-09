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
	if (ifs.is_open()&&ifs.eof())//������ַ����ļ���ĩβ��Ҳ����û�����ݣ�
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

	//�ļ����ڣ�����Ҳ����Ӧ����
	//���õ�ͣ�������ж�������
	this->m_CarNum = this->getCarInfoNum();
	//cout << this->m_CarNum << endl;
	this->carInfoArray = new Car * [this->m_CarNum];
	//Ȼ��ÿ��������Ϣ���浽���鵱��
	this->init_Car();

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
		Car** newSpace = new Car*[newSize];
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

		cout << "�����복���ͺţ�" << endl;
		cout << "1��С����" << endl;
		cout << "2��С�Ϳ���" << endl;
		cout << "3�����Ϳ���" << endl;
		cout << "4�����Ϳ���" << endl;
		cin >> carShapeNum;

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
		default :
			break;
		}
		//����ӵĳ�����Ϣ���浽���鵱��
		//ע�⣺newSize��¼�����ܵĳ�������������������������±꣬��Ҫ������м�һ�Ĳ���
		newSpace[newSize-1] = car;

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
		ofs << this->carInfoArray[i]->carNum<<" \t"
			<< this->carInfoArray[i]->carColor<<" \t"
			<< this->carInfoArray[i]->getCarShape()<<" \t"
			<< this->carInfoArray[i]->getTime.year <<" " << this->carInfoArray[i]->getTime.month<<" "
			<< this->carInfoArray[i]->getTime.day <<" "<< this->carInfoArray[i]->getTime.hour<<" "
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
			carShapeNum = 3;
		}

		Time getTime(year, month, day, hour, minute);
		switch(carShapeNum)//������������������ö��
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