#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

class Shape
{
public:
	virtual double GetArea() = 0;
	virtual double GetPerim() = 0;
};

class Rectangle:public Shape
{
public:
	Rectangle(double length, double width)
	{
		this->length = length;
		this->width = width;
	}

	virtual double GetArea();
	virtual double GetPerim();
private:
	double length;
	double width;
};

class Circle :public Shape
{
public:
	Circle(double r)
	{
		this->r = r;
	}

	virtual double GetArea();
	virtual double GetPerim();
private:
	double r;
};

double Rectangle::GetArea()
{
	return this->width * this->length;
}

double Rectangle::GetPerim()
{
	return 2 * (this->width + this->length);
}

double Circle::GetArea()
{
	return 3.14 * this->r * this->r;
}

double Circle::GetPerim()
{
	return 3.14 * 2 * this->r;
}

int main() {

	double length, width;
	cout << "请输入矩形的长和宽：";
	cin >> length >> width;
	Rectangle rec(length, width);

	double r;
	cout << "请输入圆的半径：";
	cin >> r;
	Circle c(r);

	double a1, a2, p1, p2;
	a1 = rec.GetArea();
	p1 = rec.GetPerim();
	a2 = c.GetArea();
	p2 = c.GetPerim();

	cout << "矩形的面积为：" << setprecision(2) << std::fixed << a1 << endl;
	cout << "矩形的周长为：" << setprecision(2) << std::fixed << p1 << endl;
	cout << "圆的面积为：" << setprecision(2) << std::fixed << a2 << endl;
	cout << "圆的面积为：" << setprecision(2) << std::fixed << p2 << endl;

	if (a1 > a2)
	{
		cout << "矩形的面积大于圆的面积" << endl;
	}
	else if (a2 == a1)
	{
		cout << "矩形的面积和圆的面积相同" << endl;
	}
	else
	{
		cout << "矩形的面积小于圆的面积" << endl;
	}

	if (p1 > p2)
	{
		cout << "矩形的周长大于圆的周长" << endl;
	}
	else if (p1 == p2)
	{
		cout << "矩形的周长等于圆的周长" << endl;
	}
	else
	{
		cout << "矩形的周长小于圆的周长" << endl;
	}

	system("pause");
	return 0;
}

//int main() {
//
//	int a;
//	int arr[10][10];
//	int sum = 0;
//
//	cin >> a;
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < a; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < a; j++)
//		{
//			if (i == a-1 || j == a - 1 || (i + j) == a - 1)
//				continue;
//			else
//				sum += arr[i][j];
//		}
//	}
//
//	cout << sum << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int n;
//	cin >> n;
//	int sum = 0;
//	int flag = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		flag = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			flag *= j;
//		}
//		sum += flag;
//	}
//
//	cout << sum << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b;
//	cin >> a >> b;
//
//	for (int i = 0; i < a + b; i++)
//	{
//		cout << "Wang!";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//    int a, num;
//    int count = 0;
//    int flag = 0;
//    cin >> a;
//    int arr[1000] = { -1 };
//    for (int i = 0; i < a; i++)
//    {
//        arr[i] = i + 1;
//    }
//
//    num = a;
//
//    if (a == 1)
//    {
//        cout << "1" << endl;
//    }
//    else
//    {
//        while (num != 1)
//        {
//            for (int i = flag; i < a; i++)
//            {
//                if (arr[i] == -1)
//                {
//                    continue;
//                }
//                else
//                {
//                    count++;
//                    if (count % 3 == 0)
//                    {
//                        arr[i] = -1;
//                        flag = i;
//                        num--;
//                        count = 0;
//                    }
//                }
//                if (num == 1)
//                    break;
//            }
//            for (int i = 0; i < a; i++)
//            {
//                if (arr[i] != -1)
//                {
//                    flag = i;
//                    break;
//                }
//            }
//        }
//
//        for (int i = 0; i < a; i++)
//        {
//            if (arr[i] != -1)
//                cout << i + 1 << endl;
//        }
//    }
//
//    system("pause");
//    return 0;
//}

//3
//Programming in C
//21.5
//Programming in VB
//18.5
//Programming in Delphi
//25.0

//int main() {
//
//	int a;
//	cin >> a;
//	getchar();
//	string book[10];
//	double price[10] = { 0 };
//
//	for (int i = 0; i < a; i++)
//	{
//		getline(cin, book[i]);
//		cin >> price[i];
//		if (i != a - 1)
//		{
//			getchar();
//		}
//	}
//
//	int max = 0;
//	int min = 0;
//	for (int i = 0; i < a; i++)
//	{
//		if (price[max] < price[i])
//		{
//			max = i;
//		}
//		if (price[min] > price[i])
//		{
//			min = i;
//		}
//	}
//
//	cout << setprecision(2) << std::fixed<<price[max] << " " << book[max] << endl;
//	cout << setprecision(2) << std::fixed<<price[min] << " " << book[min] << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int n;
//	cin >> n;
//	int score[1000];
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> score[i];
//		if (score[i] >= 90)
//			a++;
//		else if (score[i] >= 80)
//			b++;
//		else if (score[i] >= 70)
//			c++;
//		else if (score[i] >= 60)
//			d++;
//		else
//			e++;
//	}
//
//	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	double a;
//	cin >> a;
//	double duty;
//
//	if (a <= 1600)
//	{
//		duty = 0;
//	}
//	else if (a <= 2500)
//	{
//		duty = (a - 1600) * 0.05;
//	}
//	else if (a <= 3500)
//	{
//		duty = (a - 1600) * 0.1;
//	}
//	else if (a <= 4500)
//	{
//		duty = (a - 1600) * 0.15;
//	}
//	else
//	{
//		duty = (a - 1600) * 0.12;
//	}
//
//	cout << setprecision(2) << std::fixed << duty << endl;
//
//	system("pause");
//	return 0;
//}