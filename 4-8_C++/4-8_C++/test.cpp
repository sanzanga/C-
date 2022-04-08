#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;
	cout << "player rolled " << die1 << "+" << die2 << "=" << sum << endl;
	return sum;
}

enum GameStatus
{
	WIN,
	LOSE,
	PLAYING
};

int main() {

	int sum, myPoint;
	GameStatus stastus;

	unsigned seed;
	cout << "Please enter an unsigned integer: ";
	cin >> seed;//输入随机数种子
	srand(seed);//将种子传递给rand()

	sum = rollDice();//第一轮扔
	switch (sum)
	{
	case 7:
	case 11:
		stastus = WIN;
		break;
	case 2:
	case 3:
	case 12:
		stastus = LOSE;
		break;
	default:
		stastus = PLAYING;
		myPoint = sum;
		cout << "point is " << myPoint << endl;
		break;
	}

	while (stastus == PLAYING)
	{
		sum = rollDice();
		if (sum == myPoint)
		{
			stastus = WIN;
		}
		else if (sum == 7)
		{
			stastus = LOSE;
		}
	}

	if (stastus == WIN)
	{
		cout << "player wins" << endl;
	}
	else
	{
		cout << "player lose" << endl;
	}

	system("pause");
	return 0;
}

//int rollDice()
//{
//	int a = 1 + rand() % 6;
//	int b = 1 + rand() % 6;
//	int sum = a + b;
//	cout << "玩家扔出来的两点是：" << a << "+" << b << "=" << sum << endl;
//	return sum;
//}
//
//int main() {
//
//	int a, b, sum;
//	int flag = 0;
//
//	unsigned seed;
//	cout << "请输入一个无符号的整数：";
//	cin >> seed;
//	srand(seed);
//
//	//产生两个随机数的和
//	sum = rollDice();
//
//	switch (sum)
//	{
//	case 7:
//	case 11:
//		flag = 0;//获胜
//		break;
//	case 2:
//	case 3:
//	case 12:
//		flag = 1;//失败
//	default:
//		flag = 2;//需要进行下一句
//		a = sum;
//		cout << "这局点数和为：" << a << endl;
//		break;
//	}
//
//	while (flag == 2)
//	{
//		sum = rollDice();
//		if (sum == a)
//		{
//			flag = 0;
//		}
//		else if (sum == 7)
//		{
//			flag = 1;
//		}
//	}
//
//	if (flag == 0)
//	{
//		cout << "获胜" << endl;
//	}
//	else if (flag == 1)
//	{
//		cout << "失败" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

////实现正弦函数
//double tsin(double x)
//{
//	double g = 0;
//	double t = x;
//	int n = 1;
//	do
//	{
//		g += t;
//		n++;
//		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
//	} while (fabs(t) >= 1e-10);
//	return g;
//}
//
//int main() {
//
//	double k, r, s;
//	cout << "r=";
//	cin >> r;
//	cout << "s=";
//	cin >> s;
//	if (r * r <= s * s)
//	{
//		k = sqrt(tsin(r) * tsin(r) + tsin(s) * tsin(s));
//	}
//	else
//	{
//		k = tsin(r * s) / 2;
//	}
//	cout << k << endl;
//
//	system("pause");
//	return 0;
//}
 
//double tsin(double x)
//{
//	int a = 1;
//	double b = x;
//	double i = 1;
//	double c = 1;
//	double ret = 0;
//	while (b/c>1e-10)
//	{
//		if (a % 2 == 0)
//		{
//			ret += b / c;
//		}
//		else
//		{
//			ret -= b / c;
//		}
//		b = b * x * x;
//		i += 2;
//		a++;
//		c = 1;
//		for (int j = i; j >= 1; j--)
//		{
//			c *= j;
//		}
//	}
//	return ret;
//}
//
//int main() {
//
//	double k;
//	double r;
//	double s;
//	cout << "r=";
//	cin >> r;
//	cout << "s=";
//	cin >> s;
//	if (r * r <= s * s)
//	{
//		k = sqrt(tsin(r) * tsin(r) + tsin(s) * tsin(s));
//	}
//	else
//	{
//		k = 1 / 2.0 * tsin(r * s);
//	}
//
//	cout << k << endl;
//
//	system("pause");
//	return 0;
//}

//寻找出11~999的数m，它满足m*m,m*m*,m,均为回文数
//bool symm(unsigned n)
//{
//	unsigned i = n;
//	unsigned m = 0;
//	while (i > 0)
//	{
//		m = m * 10 + i % 10;
//		i /= 10;
//	}
//	return m == n;
//}
//
//int main() {
//
//	for (unsigned m = 11; m < 1000; m++)
//	{
//		if (symm(m) && symm(m * m) && symm(m * m * m))
//		{
//			cout << "m=" << m << endl;
//			cout << "m*m=" << m * m << endl;
//			cout << "m*m*m=" << m * m * m << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
 
//bool huiWen(long long a)//123
//{
//	long long b = 0;
//	long long num = a;
//	b = a % 10;//3
//	a /= 10;//12
//	while (a)
//	{
//		b *= 10;//30 320
//		b += a % 10;// 32 321
//		a /= 10;//1
//	}
//	if (b == num)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main() {
//
//	for (long long i = 11; i <= 999; i++)
//	{
//		if (huiWen(i) && huiWen(i * i) && huiWen(i * i * i))
//		{
//			cout << i << " ";
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//编写程序求pi的值
//double arctan(double x)
//{
//	double sqr = x * x;
//	double e = x;
//	double r = 0;
//	int i = 1;
//	while (e / i > 1e-15)
//	{
//		double f = e / i;
//		r = (i % 4 == 0) ? r + f : r - f;
//		e *= sqr;
//		i += 2;
//	}
//	return r;
//}
//
//int main() {
//
//	double a = 16 * arctan(1 / 5.0);
//	double b = 4.0 * arctan(1 / 239.0);
//	cout << "PI=" << a - b << endl;
//
//	system("pause");
//	return 0;
//}

////输入一个8位二进制数，将其转换成十进制数输出
//double power(double x, int n)
//{
//	double val = 1.0;
//	while (n--)
//	{
//		val *= x;
//	}
//	return val;
//}
//
//int main() {
//
//	int value = 0;
//
//	cout << "Enter an 8 bit binary number:";
//	for (int i = 7; i >= 0; i--)
//	{
//		char ch;
//		cin >> ch;
//		if (ch == '1')
//		{
//			value += static_cast<int>(power(2, i));//本来返回值是double的值转换成int类型
//			//static_cast<>是一种类型转换操作符
//		}
//	}
//
//	cout << "Decimal value is " << value << endl;
//
//	system("pause");
//	return 0;
//}

//int power(int a, int b)
//{
//	int ret = 1;
//	while (b)
//	{
//		ret *= 2;
//		b--;
//	}
//	return ret;
//}
//
//int decimal(char* arr)
//{
//	int ret = 0;
//	int j = 0;
//	for (int i = 7; i >= 0; i--)
//	{
//		ret += power(2, j) * ((int)arr[i] - 48);
//		j++;
//	}
//	return ret;
//}
//
//int main() {
//
//	char arr[8] = { 0 };
//	cout << "请输入8位二进制数字：";
//	for (int i = 0; i < 8; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int ret = decimal(arr);
//
//	cout << ret << endl;
//
//	system("pause");
//	return 0;
//}

////求x的n次方的函数
//double power(int x, int n)
//{
//	double val = 1.0;
//	while (n--)
//	{
//		val *= x;
//	}
//	return val;
//}
//
//int main() {
//
//	cout << "5 to the power 2 is "<< pow(5, 2) << endl;
//
//	system("pause");
//	return 0;
//}

//double pow(int a, int b)
//{
//	double ret = 1;
//	for (int i = 0; i < b; i++)
//	{
//		ret *= a;
//	}
//	return ret;
//}
//
//int main() {
//
//	int n, x;
//	cout << "请输入底数：";
//	cin >> x;
//	cout << "请输入指数：";
//	cin >> n;
//
//	double ret = pow(x, n);
//
//	cout << x << "的" << n << "次方等于" << ret << endl;
//
//	system("pause");
//	return 0;
//}