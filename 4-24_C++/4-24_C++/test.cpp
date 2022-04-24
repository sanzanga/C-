#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	int a;
	cin >> a;
	int num = a;
	num %= 5;
	if (num == 1 || num == 2 || num == 3)
	{
		cout << "Fishing in day " << a << endl;
	}
	else
	{
		cout << "Drying in day " << a << endl;
	}

	system("pause");
	return 0;
}

//int main() {
//
//	double a, b, c;
//	cin >> a >> b >> c;
//	if (a + b <= c || a + c <= b || c + b <= a)
//	{
//		cout << "These sides do not correspond to a valid triangle" << endl;
//	}
//	else
//	{
//		double p = (a + b + c) / 2.0;
//		double s = sqrt(p * (p - a) * (p - b) * (p - c));
//		double c = a + b + c;
//		cout << "area = " << setprecision(2) << std::fixed << "; perimeter = " << c << endl;
//		//		cout << setprecision(2) << std::fixed << s << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	double a, b, c;
//	cin >> a >> b >> c;
//	if (a + b <= c || a + c <= b || c + b <= a)
//	{
//		cout << "These sides do not correspond to a valid triangle" << endl;
//	}
//	else
//	{
//		double p = (a + b + c) / 2.0;
//		double s = sqrt(p * (p - a) * (p - b) * (p - c));
//		double c = a + b + c;
//		cout << "area = " << setprecision(2) << std::fixed << "; perimeter = " << c << endl;
//		//		cout << setprecision(2) << std::fixed << s << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a >= b && a >= c)
//	{
//		cout << a << endl;
//	}
//	else if (b >= a && b >= c)
//	{
//		cout << b << endl;
//	}
//	else
//	{
//		cout << c << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int num1, num2, num3;
//	cin >> num1 >> num2 >> num3;
//	if (num1 > num2 && num1 > num3)
//		cout << num1 << endl;
//	else if (num2 > num1 && num2 > num3)
//		cout << num2 << endl;
//	else
//		cout << num3 << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	double a, b, c;
//	cin >> a >> b >> c;
//	if (a + b > c || a + c > b || b + c > a)
//	{
//		cout << "Error" << endl;
//	}
//	else
//	{
//		//cout << "Error" << endl;
//		double p = (a + b + c) / 2.0;
//		double s = sqrt(p * (p - a) * (p - b) * (p - c));
//		cout << setprecision(2) << std::fixed << s << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	double nums[3];
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> nums[i];
//	}
//	double p = (nums[0] + nums[1] + nums[2]) / 2;
//	if (nums[0] + nums[1] <= nums[2] || nums[0] + nums[2] <= nums[1] || nums[1] + nums[2] <= nums[0])
//		cout << "Error" << endl;
//	else
//		cout << setprecision(2) << std::fixed << sqrt(p * (p - nums[0]) * (p - nums[1]) * (p - nums[2]));
//
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b;
//	char c;
//	cin >> a >> c >> b;
//
//	if (c == '+')
//	{
//		cout << a + b << endl;
//	}
//	else if (c == '-')
//	{
//		cout << a - b << endl;
//	}
//	else if (c == '*')
//	{
//		cout << a * b << endl;
//	}
//	else if (c == '/')
//	{
//		cout << a / b << endl;
//	}
//	else if (c == '%')
//	{
//		cout << a % b << endl;
//	}
//	else
//	{
//		cout << "ERROR" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int num1 = 0;
//	int num2 = 0;
//	char ch = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		if (i == 0)
//			cin >> num1;
//		else if (i == 1)
//			cin >> ch;
//		else
//			cin >> num2;
//	}
//	if (ch == '+')
//		cout << num1 + num2 << endl;
//	else if (ch == '-')
//		cout << num1 - num2 << endl;
//	else if (ch == '*')
//		cout << num1 * num2 << endl;
//	else if (ch == '/')
//		cout << num1 / num2 << endl;
//	else if (ch == '%')
//		cout << num1 % num2 << endl;
//	else
//		cout << "ERROR" << endl;
//
//	system("pause");
//	return 0;
//}

///*
//* 某公司员工的工资计算方法如下：一周内工作时间不超过40小时，按正常工作时间计酬；
//超出40小时的工作时间部分，按正常工作时间报酬的1.5倍计酬。
//员工按进公司时间分为新职工和老职工，进公司不少于5年的员工为老职工，5年以下的为新职工。
//新职工的正常工资为30元/小时，老职工的正常工资为50元/小时。请按该计酬方式计算员工的工资。
//
//输入在一行中给出2个正整数，分别为某员工入职年数和周工作时间，其间以空格分隔。
//*/
//
//int main() {
//
//	int a, b;
//	cin >> a >> b;
//	double money = 0;
//	if (b <= 40)
//	{
//		if (a >= 5)
//		{
//			money = 50.0 * b;
//		}
//		else
//		{
//			money = 30.0 * b;
//		}
//	}
//	else
//	{
//		if (a >= 5)
//		{
//			money = 50 * 40 + (b - 40) * 50 * 1.5;
//		}
//		else
//		{
//			money = 30 * 40 + (b - 40) * 30 * 1.5;
//		}
//	}
//
//	cout << setprecision(2) << std::fixed << money << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int input[2];
//	for (int i = 0; i < 2; i++)
//	{
//		cin >> input[i];
//	}
//	int year = input[0];
//	int hour = input[1];
//	if (year >= 5)
//	{
//		if (hour <= 40)
//			cout << setprecision(2) << std::fixed << 50.0 * hour << endl;
//		else
//			cout << setprecision(2) << std::fixed << 50.0 * 40 + (hour - 40) * 50 * 1.5 << endl;
//	}
//	else
//	{
//		if (hour <= 40)
//			cout << setprecision(2) << std::fixed << 30.0 * hour << endl;
//		else
//			cout << setprecision(2) << std::fixed << 30.0 * 40 + (hour - 40) * 30 * 1.5 << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b;
//	cin >> a >> b;
//	int hour = a / 100;
//	int minute = a % 100;
//	int addHour = 0;
//	int addMinute = 0;
//	if (b > 0)
//	{
//		addHour = b / 60;
//		addMinute = b - addHour * 60;
//		hour += addHour;
//		minute += addMinute;
//		if (minute >= 60)
//		{
//			int flag = minute / 60;
//			hour += flag;
//			minute %= 60;
//		}
//		if (minute == 0)
//		{
//			cout << hour << "00" << endl;
//		}
//		else
//		{
//			cout << hour << minute << endl;
//		}
//	}
//	else if (b == 0)
//	{
//		cout << a << endl;
//	}
//	else
//	{
//		b = -b;
//		addHour = b / 60;
//		addMinute = b % 60;
//		hour -= addHour;
//		minute -= addMinute;
//		if (minute < 0)
//		{
//			minute += 60;
//			hour--;
//		}
//		if (minute == 0)
//		{
//			cout << hour << "00" << endl;
//		}
//		else
//		{
//			cout << hour << minute << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int input[2];
//	for (int i = 0; i < 2; i++)
//	{
//		cin >> input[i];
//	}
//	int hour = input[0] / 100;
//	int min = input[0] % 100;
//	int add = input[1];//增加的时间
//	int addHour = 0;
//	int addMin = 0;
//	if (add > 0)
//	{
//		addHour = add / 60;
//		addMin = add - (addHour * 60);
//		hour += addHour;
//		min += addMin;
//		if (min >= 60)
//		{
//			int flag = min / 60;
//			hour += flag;
//			min %= 60;
//		}
//		if (min == 0)
//		{
//			cout << hour << "00" << endl;
//		}
//		else
//		{
//			cout << hour << min << endl;
//		}
//	}
//	else if (add == 0)
//	{
//		cout << hour << min << endl;
//	}
//	else
//	{
//		add = -add;
//		addHour = add / 60;
//		addMin = add - (addHour * 60);
//		hour -= addHour;
//		min -= addMin;
//		if (min < 0)
//		{
//			min += 60;
//			hour--;
//		}
//		if (min == 0)
//		{
//			cout << hour << "00" << endl;
//		}
//		else
//		{
//			cout << hour << min << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	if (a == b && a != c)
//	{
//		cout << c << endl;
//	}
//	else if (a == c && a != b)
//	{
//		cout << b << endl;
//	}
//	else
//	{
//		cout << a << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int t[3];
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> t[i];
//	}
//	int A = t[0];
//	int B = t[1];
//	int C = t[2];
//	if (A == B && A != C)
//		cout << "C" << endl;
//	else if (A == C && A != B)
//		cout << "B" << endl;
//	else
//		cout << "A" << endl;
//
//	system("pause");
//	return 0;
//}

////模拟交通警察的雷达测速仪。输入汽车速度，如果速度超出60 mph，则显示“Speeding”，否则显示“OK”
////在一行中输出测速仪显示结果，格式为：Speed: V - S，其中V是车速，S或者是Speeding、或者是OK。
//
//int main() {
//
//	int a;
//	cin >> a;
//	if (a >= 60)
//	{
//		cout << "Speed: " << a << " - Speeding" << endl;
//	}
//	else
//	{
//		cout << "Speed: " << a << " - OK" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	double input = 0;
//	cin >> input;
//	input /= 100;
//	int foot = input / 0.3048 * 144 / 145;
//	int inch = (input / 0.3048 - foot) * 12;
//	cout << foot << " " << inch << endl;
//
//	system("pause");
//	return 0;
//}

///*
//* 为鼓励居民节约用水，自来水公司采取按用水量阶梯式计价的办法，
//居民应交水费y（元）与月用水量x（吨）相关：当x不超过15吨时，y=4x/3；
//超过后，y=2.5x−17.5。请编写程序实现水费的计算。
//
//在一行输出应交的水费，精确到小数点后2位。
//*/
//
//int main() {
//
//	int a;
//	cin >> a;
//	if (a <= 15)
//	{
//		cout << setprecision(2) << std::fixed << (4 * a / 3.0) << endl;
//	}
//	else
//	{
//		cout << setprecision(2) << std::fixed << (2.5 * a - 17.5) << endl;
//	}
//
//	system("pause");
//	return 0;
//}

///*
//* 为了提倡居民节约用电，某省电力公司执行“阶梯电价”，安装一户一表的居民用户电价分为两个“阶梯”：
//月用电量50千瓦时（含50千瓦时）以内的，电价为0.53元/千瓦时；超过50千瓦时的，超出部分的用电量，
//电价上调0.05元/千瓦时。请编写程序计算电费。
//在一行中输出该用户应支付的电费（元），结果保留两位小数，格式如：“cost = 应付电费值”；若用电量小于0，则输出"Invalid Value!"。
//*/
//
//int main() {
//
//	int a;
//	cin >> a;
//
//	if (a < 0)
//	{
//		cout << "Invalid Value!" << endl;
//	}
//	else if (a <= 50)
//	{
//		cout << setprecision(2) << std::fixed << "cost = " << a * 0.53 << endl;
//	}
//	else
//	{
//		cout << setprecision(2) << std::fixed << "cost = " << 50 * 0.53 + (a - 50) * 0.58 << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//////假设个人所得税为：税率×(工资−1600)。请编写程序计算应缴的所得税，其中税率定义为：
////
////当工资不超过1600时，税率为0；
////当工资在区间(1600, 2500]时，税率为5% ；
////当工资在区间(2500, 3500]时，税率为10% ；
////当工资在区间(3500, 4500]时，税率为15% ；
////当工资超过4500时，税率为20% 。
//
////输入在一行中给出非负工资。
////在一行输出个人所得税，精确到小数点后2位。
//
//int main() {
//
//	double b = 0;
//	cin >> b;
//
//	if (b <= 1600 || b == 0)
//	{
//		//cout << setprecision(2) << std::fixed << 0 << endl;
//		cout << "0.00" << endl;
//	}
//	else if (b <= 2500)
//	{
//		cout << setprecision(2) << std::fixed << (b - 1600) * 0.05 << endl;
//	}
//	else if (b <= 3500)
//	{
//		cout << setprecision(2) << std::fixed << (b - 1600) * 0.10 << endl;
//	}
//	else if (b <= 4500)
//	{
//		cout << setprecision(2) << std::fixed << (b - 1600) * 0.15 << endl;
//	}
//	else
//	{
//		cout << setprecision(2) << std::fixed << (b - 1600) * 0.20 << endl;
//	}
//
//	system("pause");
//	return 0;
//}

////C=5×(F−32)/9
////输入在一行中给出一个华氏温度
////在一行中按照格式“Celsius = C”输出对应的摄氏温度C的整数值。
//int main() {
//
//	double C, F;
//	cin >> F;
//	C = 5 * (F - 32) / 9;
//
//	cout << "Celsius = " << (int)C << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//    int a;
//    cin >> a;
//    int b, c, d;
//    b = a % 10;
//    a /= 10;
//    c = a % 10;
//    d = a/10;
//    if (b == 0 && c == 0)
//        cout << d << endl;
//    else if (b == 0)
//        cout << c << d << endl;
//    else
//        cout << b << c << d << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//
//	long long a = 628125705;
//	while (++a)
//	{
//		bool b = true;
//		for (long long i = 2; i <= sqrt(a); i++)
//		{
//			if (a % i == 0)
//			{
//				b = false;
//				break;
//			}
//		}
//		if (b)
//		{
//			cout << a << endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}