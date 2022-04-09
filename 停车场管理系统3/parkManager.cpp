#include "parkManager.h"

parkManager::parkManager()
{
	ifstream ifs;
	ifs.open(FILENAME1, ios::in);//以读文件的方式打开
	if (!ifs.is_open())//文件打开失败
	{
		//cout << "文件不存在" << endl;
		//初始化汽车的数量
		this->m_CarNum = 0;
		//初始化停车场数组
		this->carInfoArray = NULL;
		//文件为空
		this->fileIsEmpty = true;
		//关闭文件
		ifs.close();
	}

	//文件存在，但是没有数据
	char c;
	ifs >> c;
	if (ifs.is_open()&&ifs.eof())//即这个字符是文件的末尾（也就是没有数据）
	{
		//cout << "文件存在，但数据不存在" << endl;
		//初始化汽车的数量
		this->m_CarNum = 0;
		//初始化停车场数组
		this->carInfoArray = NULL;
		//文件为空
		this->fileIsEmpty = true;
		//关闭文件
		ifs.close();
	}

	//文件存在，并且也有相应数据
	//先拿到停车场中有多少辆车
	this->m_CarNum = this->getCarInfoNum();
	//cout << this->m_CarNum << endl;
	this->carInfoArray = new Car * [this->m_CarNum];
	//然后将每辆车的信息保存到数组当中
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

	//拿到通道上的车辆数量
	this->carNumInAccess += this->getCarInAccessNum();
	//cout << this->carNumInAccess << endl;
	this->carInAccessInfo = new Access * [this->carNumInAccess];
	//初始化通道数组
	this->initAccess();

	//测试代码
	/*for (int i = 0; i < this->m_CarNum; i++)
	{
		cout << "车牌号：" << this->carInfoArray[i]->carNum
			<< "\t颜色：" << this->carInfoArray[i]->carColor
			<< "\t车型：" << this->carInfoArray[i]->getCarShape()
			<< "\t进入时间：" << this->carInfoArray[i]->getTime.year << "."
			<< this->carInfoArray[i]->getTime.month << "." << this->carInfoArray[i]->getTime.day
			<< "." << this->carInfoArray[i]->getTime.hour << "." << this->carInfoArray[i]->getTime.minute
			<< endl;
	}*/

	/*cout << "车牌号" << "\t颜色" << "\t车型" << endl;
	for (int i = 0; i < this->carNumInAccess; i++)
	{
		cout << this->carInAccessInfo[i]->carNum
			<< "\t" << this->carInAccessInfo[i]->carColor
			<< "\t" << this->carInAccessInfo[i]->carShapeNum << endl;
	}*/
}

//展示菜单
void parkManager::shouMenu()
{
	cout << "************************************" << endl;
	cout << "****** 欢迎使用停车场管理系统！*****" << endl;
	cout << "********* 0.退出管理程序 ***********" << endl;
	cout << "********* 1.增加车辆信息 ***********" << endl;
	cout << "********* 2.显示车辆信息 ***********" << endl;
	cout << "********* 3.车辆离开停车场 *********" << endl;
	cout << "********* 4.删除车辆记录 ***********" << endl;
	cout << "********* 5.修改车辆信息 ***********" << endl;
	cout << "********* 6.查询车辆信息 ***********" << endl;
	cout << "********* 7.统计车辆信息 ***********" << endl;
	cout << "*********   8.收费标准   ***********" << endl;
	cout << "************************************" << endl;
}

//退出系统
void parkManager::ExistSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

//展示收费标准
void parkManager::showRates()
{
	cout << "停车场收费标准如下：" << endl;
	cout << "1、任何车辆一个小时内不收费。" << endl;
	cout << "2、超过一个小时后，小汽车一小时1元，小卡一小时1元，中卡一小时1.5元，大卡一小时2元。" << endl;
	cout << "3、不足一小时按一小时收费。" << endl;
	system("pause");
	system("cls");
}

//增加车辆信息
void parkManager::addCarInfo()
{
	if (m_CarNum + 1 <= MAX)//当停车场的真是数量小于停车场最大承载量，该车才能停入停车场
	{
		int newSize = m_CarNum + 1;//新的空间大小=原来的数量+1
		//开辟新的储存车信息的空间
		//开辟记录数组的指针
		Car** newSpace = new Car*[newSize];
		//将原来的车辆信息拷贝到新开辟的数组里面
		if (this->carInfoArray != NULL)
		{
			for (int i = 0; i < this->m_CarNum; i++)
			{
				newSpace[i] = this->carInfoArray[i];
			}
		}

		//添加数据
		string carNum;//车牌号
		string carColor;//车的颜色
		int carShapeNum;//车型号的序号
		int year, month, day, hour, minute;//车辆到达的年、月、日、小时、分钟

		cout << "请输入车牌号：";
		cin >> carNum;

		//判断车牌号是否存在
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
				cout << "车牌号输入有误，请重新输入！" << endl;
				cin >> carNum;
			}
		}

		cout << "请输入车的颜色：";
		cin >> carColor;

		cout << "请输入车辆进入停车场的时间";
		cout << "(2020 2 2 10 10----代表2020年2月2日10点10分进入停车场)" << endl;
		cin >> year >> month >> day >> hour >> minute;
		Time getTime(year, month, day, hour, minute);

		cout << "请输入车的型号：" << endl;
		cout << "1、小汽车" << endl;
		cout << "2、小型卡车" << endl;
		cout << "3、中型卡车" << endl;
		cout << "4、大型卡车" << endl;
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
		//将添加的车辆信息保存到数组当中
		//注意：newSize记录的是总的车辆数量，但是这里是数组的下标，需要给其进行减一的操作
		newSpace[newSize-1] = car;

		//释放原来存放信息的数组
		delete[] this->carInfoArray;

		//将原来的数组指向新的数组
		this->carInfoArray = newSpace;

		//更新停车场里面的车辆数量
		this->m_CarNum++;

		cout << "添加成功！" << endl;

		//将添加成功地车辆信息保存到本地当中
		this->save();
	}
	else//在通道上等待
	{
		cout << "停车场已满，请输入车牌号、颜色和车型在通道上等候。" << endl;
		string carNum;//车牌号
		string carColor;//车的颜色
		int carShapeNum;

		cout << "请输入车牌号：";
		cin >> carNum;

		//判断车牌号是否存在
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
				cout << "车牌号输入有误，请重新输入！" << endl;
				cin >> carNum;
			}
		}

		cout << "请输入车的颜色：";
		cin >> carColor;

		cout << "请输入车的型号：" << endl;
		cout << "1、小汽车" << endl;
		cout << "2、小型卡车" << endl;
		cout << "3、中型卡车" << endl;
		cout << "4、大型卡车" << endl;
		cin >> carShapeNum;

		Access* access = new Access(carNum, carColor, carShapeNum);
		this->carInAccessInfo[this->carNumInAccess] = access;

		//通道数量加1
		this->carNumInAccess++;
		//保存数据到相应文件
		this->save1();
	}

	system("pause");
	system("cls");
}

//保存车辆信息
void parkManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME1, ios::out);//已输出的方式打开文件---写文件

	//将保存的每个信息保存到文件当中
	//ofs << "车牌号\t" << "颜色\t" << "车型\t" << "进入时间\t" << endl;
	for (int i = 0; i < this->m_CarNum; i++)
	{
		ofs << this->carInfoArray[i]->carNum<<" \t"
			<< this->carInfoArray[i]->carColor<<" \t"
			<< this->carInfoArray[i]->getCarShape()<<" \t"
			<< this->carInfoArray[i]->getTime.year <<" " << this->carInfoArray[i]->getTime.month<<" "
			<< this->carInfoArray[i]->getTime.day <<" "<< this->carInfoArray[i]->getTime.hour<<" "
			<< this->carInfoArray[i]->getTime.minute << endl;
	}

	//关闭文件
	ofs.close();
}

//获取文件中的数据条数
int parkManager::getCarInfoNum()
{
	int num = 0;

	//打开文件
	ifstream ifs;
	ifs.open(FILENAME1, ios::in);

	string carNum;//车牌号
	string carColor;//车的颜色
	string carShape;//车型
	int year, month, day, hour, minute;//到达的时间

	while (ifs >> carNum && ifs >> carColor && ifs >> carShape &&
		ifs >> year && ifs >> month && ifs >> day && ifs >> hour && ifs >> minute)
	{
		num++;
	}
	return num;
}

//初始化指针数组
void parkManager::init_Car()
{
	ifstream ifs;//读文件
	ifs.open(FILENAME1, ios::in);//ios::in为读文件打开文件

	string carNum;//车牌号
	string carColor;//车的颜色
	string carShape;//车型
	int carShapeNum;//车型的编号
	int year, month, day, hour, minute;//到达的时间

	int a = 0;//记录数组的下标

	while (ifs >> carNum && ifs >> carColor && ifs >> carShape &&
		ifs >> year && ifs >> month && ifs >> day && ifs >> hour && ifs >> minute)
	{
		Car* car = NULL;
		if (carShape == "小汽车")
		{
			carShapeNum = 1;
		}
		else if (carShape == "小卡")
		{
			carShapeNum = 2;
		}
		else if (carShape == "中卡")
		{
			carShapeNum = 3;
		}
		else
		{
			carShapeNum = 3;
		}

		Time getTime(year, month, day, hour, minute);
		switch(carShapeNum)//括号里面必须放整数或枚举
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
		//将这条数据放在数组当中去
		this->carInfoArray[a] = car;
		a++;
	}
	this->fileIsEmpty = false;
	//关闭文件
	ifs.close();
}

//显示车辆信息
void parkManager::showCarInfo()
{
	if (this->fileIsEmpty)
	{
		cout << "文件不存在或者为空！" << endl;
	}
	else
	{
		cout << "车牌号\t\t颜色\t车型\t进入时间\t" << endl;
		for (int i = 0; i < this->m_CarNum; i++)
		{
			this->carInfoArray[i]->showParkInfo();
		}
	}

	//按任意键清屏
	system("pause");
	system("cls");
}

//获得通道上车的数量
int parkManager::getCarInAccessNum()
{
	int num = 0;
	ifstream ifs;
	ifs.open(FILENAME2, ios::in);

	string carNum;//车牌号
	string carColor;//车的颜色
	string carShape;//车型

	while (ifs >> carNum && ifs >> carColor && ifs >> carShape)
	{
		num++;
	}
	return num;
}

//保存通道上的车辆信息
void parkManager::save1()
{
	ofstream ofs;
	ofs.open(FILENAME2, ios::out);//写文件

	for (int i = 0; i < this->carNumInAccess; i++)
	{
		ofs << this->carInAccessInfo[i]->carNum << "\t"
			<< this->carInAccessInfo[i]->carColor << "\t"
			<< this->carInAccessInfo[i]->carShapeNum << "\t" << endl;
	}
	//关闭文件
	ofs.close();
}

//初始化通道数组
void parkManager::initAccess()
{
	int num = 0;
	int a = 0;//记录数组的下标

	//打开文件
	ifstream ifs;
	ifs.open(FILENAME2, ios::in);

	string carNum;//车牌号
	string carColor;//车的颜色
	int carShapeNum;//车型

	while (ifs >> carNum && ifs >> carColor && ifs >> carShapeNum)
	{
		Access* access = new Access(carNum, carColor, carShapeNum);
		this->carInAccessInfo[a] = access;
		a++;
	}

	ifs.close();
}

//析构函数
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