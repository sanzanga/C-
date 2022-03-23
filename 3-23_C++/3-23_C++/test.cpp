#include <iostream>
#include <ctime>
using namespace std;

int count(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        bool b = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                b = false;
                break;
            }
        }
        if (b)
        {
            count += i;
        }
    }
    return count;
}

int main() {

    int a, b;
    cin >> a >> b;
    int ret = count(a, b);

    cout << ret << endl;

    system("pause");
    return 0;
}

//double howPay(int arr[], int a)
//{
//    double money;
//    for (int i = 0; i < a; i++)
//    {
//        if (arr[i] <= 60)
//        {
//            money += 0.1;
//        }
//        else
//        {
//            money += 0.2;
//        }
//    }
//    return money;
//}
//
//int main() {
//
//    int a;
//    int arr[100] = { 0 };
//    double money = 0;
//    cin >> a;
//    for (int i = 0; i < a; i++)
//    {
//        cin >> arr[i];
//    }
//    money = howPay(arr, a);
//
//    cout << money << endl;
//
//    system("pause");
//    return 0;
//}

//class rectangle
//{
//private:
//	int length, width;
//
//public:
//	rectangle(int x, int y)
//	{
//		length = x;
//		width = y;
//	}
//	void set(int x, int y)
//	{
//		length = x;
//		width = y;
//	}
//	int getlength() 
//	{
//		return length;
//	}
//	int getwidth()
//	{
//		return width;
//	}
//
//	// write your code here...
//	virtual int getval()
//	{
//		return width * length;
//	}
//};
//class cuboid :public rectangle
//{
//private:
//	int height;
//
//public:
//	cuboid(int x, int y, int z) :rectangle(x, y)
//	{
//		height = z;
//	}
//
//	// write your code here...
//	int getval()
//	{
//		return getwidth() * getlength() * height;
//	}
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	rectangle b(x, y);
//
//	rectangle* p = &b;
//	cout << p->getval() << '\n';
//
//	p = &a;
//	cout << p->getval();
//	return 0;
//}

//class BaseCalculator 
//{
//public:
//    int m_A;
//    int m_B;
//
//    // write your code here......
//    virtual int getResult() = 0;
//};
//
//// 加法计算器类
//class AddCalculator : public BaseCalculator 
//{
//    // write your code here......
//    int getResult()
//    {
//        return m_A + m_B;
//    }
//};
//
//// 减法计算器类
//class SubCalculator : public BaseCalculator
//{
//    // write your code here......
//    int getResult()
//    {
//        return m_A - m_B;
//    }
//};
//
//
//int main() {
//
//    BaseCalculator* cal = new AddCalculator;
//    cal->m_A = 10;
//    cal->m_B = 20;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    cal = new SubCalculator;
//    cal->m_A = 20;
//    cal->m_B = 10;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    return 0;
//}

//int main() {
//
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	cout << num << endl;
//	int val = 0;
//	while (num != val)
//	{
//		cin >> val;
//		if (val > num) {
//			cout << "猜测过大" << endl;
//		}
//		else if (val < num) {
//			cout << "猜测过小" << endl;
//		}
//		else {
//			cout << "恭喜您猜对了" << endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}