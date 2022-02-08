#include <iostream>
using namespace std;

#include <string>

#define MAX 1000


//菜单界面
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通信录 *****" << endl;
	cout << "************************" << endl;
}

//设计联系人的结构体
struct Person
{
	//姓名
	string m_Name;
	//性别 1 男  2 女
	int m_Sex;
	//年龄
	int age;
	//电话
	string m_Phone;
	//地址
	string m_Addr;
};

//设计通讯录的结构体
struct Addressbooks
{
	//通信录中保存的联系人数组
	struct Person personArray[MAX];

	//通讯录当前记录联系人个数
	int m_Size;
};

void addPerson(struct Addressbooks* abs)
{
	//判断通讯录是否已经满了，如果满了就不再添加了
	if (abs->m_Size == MAX)
	{
		cout << "通信录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体联系人
		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		cout << "请输入性别： " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].age = age;
		//电话
		cout << "请输入练习电话： " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		cout << "请输入家庭地址： " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;

		system("pause");//请按任意键继续
		system("cls");//清屏操作
		showMenu();

	}
}

//显示所有联系人
void showPerson(struct Addressbooks* abs)
{
	//判断通讯录人数是否为0
	if (abs->m_Size == 0)
	{
		cout << "当前通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名： " << abs->personArray[i].m_Name << "\t";
			cout << "性别： " << (abs->personArray[i].m_Sex == 1 ? "男":"女") << "\t";
			cout << "年龄： " << abs->personArray[i].age << "\t";
			cout << "电话" << abs->personArray[i].m_Phone << "\t";
			cout << "住址： " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
	showMenu();
}

//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
int isExist(struct Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//找到了用户输入的姓名了
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	//如果遍历结束没有找到返回-1
	return -1;
}

//删除指定的联系人
void deletePerson(Addressbooks* abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	//ret == -1 未查到
	//ret != -1 查到了
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");

	showMenu();
}

//查找指定的联系人信息
void findPerson(struct Addressbooks* abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	//判断指定的联系人是否存在通信录中
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		cout << "姓名： " << abs->personArray[ret].m_Name << '\t';
		cout << "性别： " << abs->personArray[ret].m_Sex << '\t';
		cout << "年龄： " << abs->personArray[ret].age << '\t';
		cout << "电话： " << abs->personArray[ret].m_Phone << '\t';
		cout << "住址： " << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");

	showMenu();

}

//修改联系人信息
void modifyPerson(struct Addressbooks* abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别
		cout << "请输入性别： " << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].age = age;
		//电话
		cout << "请输入练习电话： " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//住址
		cout << "请输入家庭地址： " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "修改成功" << endl;

	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");

	showMenu();

}

//清空所有联系人
void cleanPerson(struct Addressbooks* abs)
{
	abs->m_Size = 0;//将当期记录联系人人数重置为0 做逻辑清空操作
	cout << "通讯录已清空" << endl;

	system("pause");
	system("cls");

	showMenu();

}

int main()
{
	//创建通信录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	//创建一个用户选择的变量
	int select = 0;

	//菜单的调用
	showMenu();

	while (true)
	{
		cin >> select;

		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);//利用地址传递可以修饰实参
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
		/*{
			cout << "请输入删除联系人姓名： " << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == 1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
			    cout << "删除成功" << endl;
			}
		}*/
			deletePerson(&abs);
			break;
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
			cleanPerson(&abs);
			break;
		case 0://退出通信录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "选择有误，请重新选择！" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}