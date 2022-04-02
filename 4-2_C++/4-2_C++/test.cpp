#include <iostream>
using namespace std;
#include <string>



//读入一系列整数，统计出正整数个数和负整数个数，读入0结束
//int main() {
//
//	int i = 0, j = 0, n;
//	cout << "Enter some integers please (enter 0 to quit):" << endl;
//	cin >> n;
//
//	while (n != 0) {
//		if (n > 0)
//			i += 1;
//		else
//			j += 1;
//		cin >> n;
//	}
//
//	cout << "Count of postive integers:" << i << endl;
//	cout << "Count of negative integers:" << j << endl;
//
//	system("pause");
//	return 0;
//}

////求100~200不能被3整除的数
//int main() {
//
//	for (int i = 100; i <= 200; i++) {
//		if (i % 3 != 0)
//			cout << i << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	const int N = 4;
//	//输出前4行图案
//	for (int i = 1; i <= N; i++) {
//		for(int j=1;j<=30;j++)
//			cout << ' ';//在图案左侧空30列
//		for (int j = 1; j <= 8 - 2 * i; j++)
//			cout << ' ';
//		for (int j = 1; j <= 2 * i - 1; j++)
//			cout << '*';
//		cout << endl;
//	}
//	
//	//输出后3行图案
//	for (int i = 1; i <= N - 1; i++) {
//		for (int j = 1; j <= 30; j++)
//			cout << ' ';
//		for (int j = 1; j <= 7 - 2 * i; j++)
//			cout << '*';
//		cout << endl;
//	}
//
//	////上四行
//	//for (int i = 0; i < 4; i++) {
//	//	for (int j = 0; j < 7; j++) {
//	//		if (j < 7 - (2 * i + 1))
//	//			cout << " ";
//	//		else
//	//			cout << "*";
//	//	}
//	//	cout << endl;
//	//}
//	////下四行
//	//for (int i = 0; i < 3; i++) {
//	//	for (int j = 0; j < 7; j++) {
//	//		if (j < 7 - (i + 1) * 2)
//	//			cout << "*";
//	//		else
//	//			cout << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	string s = "abcde";
//	/*for (auto& r : s)
//		r += 1;*/
//
//	for (auto beg = s.begin(), end = s.end(); beg != end; ++beg)
//	{
//		auto& r = *beg;
//		r += 1;
//	}
//
//	cout << s << endl;
//
//	system("pause");
//	return 0;
//}


////输入一个整数，求出它的所有因子
//int main() {
//
//	int n;
//
//	cout << "Enter a positive integer:";
//	cin >> n;
//	cout << "Number " << n << " Factors ";
//
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0)
//			cout << i << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int i, sum = 0;
//	cin >> i;
//	/*while (i <= 10) {
//		sum += i;
//		i++;
//	}*/
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= 10);
//	cout << "sum=" << sum << endl;
//
//	system("pause");
//	return 0;
//}

////用do...while虚化，求自然数1~100的自然数
//int main() {
//
//	int i = 1, sum = 0;
//
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= 10);
//
//	cout << "sum=" << sum << endl;
//
//	system("pause");
//	return 0;
//}

////输入一个整数，将各位数字反转后输出
//int main() {
//
//	int n, right_digit = 0;
//	cout << "Enter the number:";
//	cin >> n;
//
//	cout << "The number in reverse order is ";
//
//	do
//	{
//		right_digit = n % 10;
//		cout << right_digit;
//		n /= 10;
//	} while (n);
//
//	cout << endl;
//
//	/*do
//	{
//		right_digit *= 10;
//		right_digit += n % 10;
//		n /= 10;
//	} while (n);
//
//	cout << right_digit << endl;*/
//
//	system("pause");
//	return 0;
//}

////求自然数1~10的数
//int main() {
//
//	int i = 1;
//	int sum = 0;
//
//	while (i <= 10) {
//		sum += i;
//		i++;
//	}
//
//	cout << "sum=" << sum << endl;
//
//	system("pause");
//	return 0;
//}

////输入0到6的数，转换成星期输出
//int main() {
//
//	int day;
//	cin >> day;
//
//	switch (day)
//	{
//	case 0:
//		cout << "Monday" << endl;
//		break;
//	case 1:
//		cout << "Monday" << endl;
//		break;
//	case 2:
//		cout << "Tuesday" << endl;
//		break;
//	case 3:
//		cout << "Wednesday" << endl;
//		break;
//	case 4:
//		cout << "Thursday" << endl;
//		break;
//	case 5:
//		cout << "Friday" << endl;
//		break;
//	case 6:
//		cout << "Saturday" << endl;
//		break;
//	default :
//		cout << "Day out of range Sunday ... Saturday" << endl;
//		break;
//	}
//
//	//day %= 7;
//
//	//if (day == 0)
//	//	cout << "Sunday" << endl;
//	//else if (day == 1)
//	//	cout << "Monday" << endl;
//	//else if (day == 2)
//	//	cout << "Tuesday" << endl;
//	//else if (day == 3)
//	//	cout << "Wednesday" << endl;
//	//else if (day == 4)
//	//	cout << "Thursday" << endl;
//	//else if (day == 5)
//	//	cout << "Friday" << endl;
//	//else
//	//	cout << "Saturday" << endl;
//
//	system("pause");
//	return 0;
//}

////比较两个数的大小
//int main() {
//
//	int x, y;
//	cout << "Enter x and y:";
//	cin >> x >> y;
//
//	if (x != y)
//		if (x > y)
//			cout << "x>y" << endl;
//		else
//			cout << "x<y" << endl;
//	else
//		cout << "x=y" << endl;
//
//	system("pause");
//	return 0;
//}

////输入一个年份判断是否为闰年
//int main() {
//
//	int year;
//	bool isLeapYear;
//
//	cout << "Enter the year:";
//	cin >> year;
//	isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
//
//	if (isLeapYear)
//		cout << year << " is a leap year" << endl;
//	else
//		cout << year << " not is a leap year" << endl;
//
//	system("pause");
//	return 0;
//}