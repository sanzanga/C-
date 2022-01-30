#include <iostream>
using namespace  std;
#include <iomanip>
#include <string>
#include <cmath>

int main() {

	int n;
	cin >> n;
	int arr[6][6];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	int x, y  = 0;
	int k = 0;
	int max = 0;
	int min = 0;
	int flag = 1;
	int flag1 = 1;
	y = 0;
	while (k < n)
	{
		x = k;
		max = arr[k][0];
		for (int i = 0; i < n; i++)
		{
			if (arr[k][i] > max)
			{
				max = arr[k][i];
				y = i;
			}
		}
		min = arr[x][y];
		for (int j = 0; j < n; j++)
		{
			if (arr[j][y] < min)
			{
				flag1 = 0;
				break;
			}
		}
		if (flag1)
		{
			cout << x << " " << y << endl;
			flag = 0;
			break;
		}
		flag1 = 1;
		k++; 
	}
	if (flag)
		cout << "NONE" << endl;

	system("pause");
	return 0;
}

//int main() {
//
//	int m, n;
//	cin >> m >> n;
//	int arr[6][6];
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			sum += arr[i][j];
//		}
//		cout << sum << endl;
//		sum = 0;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int n, m;
//	int count1 = 0;
//	int count2 = 0;
//	cin >> n;
//	int arr1[20];
//	int arr2[20];
//	int arr3[20];
//	int arr4[20];
//	bool b = true;
//	bool b1 = true;
//	for (int i = 0; i < n; i++)
//		cin >> arr1[i];
//	cin >> m;
//	for (int i = 0; i < m; i++)
//		cin >> arr2[i];
//	for (int i = 0; i < n; i++)
//	{
//		b = true;
//		for (int j = 0; j < m; j++)
//		{
//			if (arr1[i] == arr2[j])
//				b = false;
//		}
//		if (b)
//		{
//			b1 = true;
//			for (int k = 0; k < count1; k++)
//			{
//				if (arr1[i] == arr3[k])
//				{
//					b1 = false;
//					break;
//				}
//			}
//			if (b1)
//			{
//				arr3[count1] = arr1[i];
//				count1++;
//			}
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		b = true;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr2[i] == arr1[j])
//				b = false;
//		}
//		if (b)
//		{
//			b1 = true;
//			for (int k = 0; k < count2; k++)
//			{
//				if (arr2[i] == arr4[k])
//				{
//					b1 = false;
//					break;
//				}
//			}
//			if (b1)
//			{
//				arr4[count2] = arr2[i];
//				count2++;
//			}
//		}
//	}
//
//	if (count2 == 0)
//	{
//		for (int i = 0; i < count1; i++)
//		{
//			if (i == count1 - 1)
//				cout << arr3[i] << endl;
//			else
//				cout << arr3[i] << " ";
//		}
//	}
//	else
//	{
//		for (int i = 0; i < count1; i++)
//		{
//			cout << arr3[i] << " ";
//		}
//		for (int i = 0; i < count2; i++)
//		{
//			if (i == count2 - 1)
//				cout << arr4[i] << endl;
//			else
//				cout << arr4[i] << " ";
//		}
//	}
//
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int N, n, max, max1;
//	int arr[10];
//	int arr1[10];
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//		arr1[i] = arr[i];
//	}
//	max = arr[0];
//	max1 = arr1[0];
//	for (int i = 0; i < N; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		if (max==arr1[i])
//		{
//			n = i;
//			break;
//		}
//	}
//	cout << max << " " << n << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	double H, M;
//	cin >> H;
//	M = (H - 100) * 0.9 * 2;
//	cout << setprecision(1) << std::fixed << M << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int N, n;
//	cin >> N;
//	bool b = true;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> n;
//		if (n==1)
//		{
//			cout << "No" << endl;
//			continue;
//		}
//		for (int j = 2; j <= sqrt(n) ; j++)
//		{
//			if (n % j == 0)
//			{
//				cout << "No" << endl;
//				b = false;
//				break;
//			}
//		}
//		if (b)
//			cout << "Yes" << endl;
//	}
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int x;
//	cin >> x;
//	if (x != 10)
//		cout << setprecision(1) << std::fixed << "f(" << (double)x << ") = " << (double)x << endl;
//	else
//		cout << setprecision(1) << std::fixed << "f(" << (double)x << ") = " << setprecision(1) << std::fixed <<1.0 / (double)x << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	string arr;
//	getline(cin, arr);
//	int i = 0;
//	int sz = 0;
//	while (arr[i] != '\0')
//	{
//		sz++;
//		i++;
//	}
//	for (int i = 0; i < sz / 2; i++)
//	{
//		char temp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = temp;
//	}
//	cout << arr << endl;
//
//	system("pause");
//	return 0;
//}

//void reverse(string &str)
//{
//	int sz = str.length();
//	for (int i = 0; i < sz / 2; i++)
//	{
//		char temp = str[i];
//		str[i] = str[sz - 1 - i];
//		str[sz - 1 - i] = temp;
//	}
//}
//
//int main() {
//
//	string arr;
//	getline(cin, arr);
//	reverse(arr);
//	cout << arr << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int N, mouth, sum;
//	cin >> N;
//	int mouth1 = 1;
//	int mouth2 = 1;
//	if (N == 1)
//		cout << "1" << endl;
//	else
//	{
//		sum = 0;
//		mouth = 2;
//		while (sum < N)
//		{
//			sum = mouth1 + mouth2;
//			mouth1 = mouth2;
//			mouth2 = sum;
//			mouth++;
//		}
//		cout << mouth << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int N;
//	cin >> N;
//	int sum = 1;
//	for (int i = 0; i < N-1; i++)
//	{
//		sum = (sum + 1) * 2;
//	}
//	cout << sum << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int num1, num2;
//	cin >> num1 >> num2;
//	int r = 0;
//	//最大公约数 辗转相除法
//	int max = num1 > num2 ? num1 : num2;
//	int min = num1 < num2 ? num1 : num2;//dedao
//	while (max % min)
//	{
//		r = max % min;
//		max = min;
//		min = r;
//	}
//	int a = num1 * num2 / min;
//	cout << min << " " << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int sum, a;
//	while (1)
//	{
//		cin >> a;
//		if (a <= 0)
//			break;
//		if (a % 2 != 0)
//			sum += a;
//	}
//	cout << sum << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	double far;
//	int min;
//	double money;
//	cin >> far >> min;
//	if (far <= 3)
//		money = 10;
//	else if (far <= 10)
//		money = 10 + (far - 3) * 2;
//	else
//		money = 10 + 7 * 2.0 + (far - 10) * 3.0;
//	if (min < 5)
//		cout << (int)(money * 10 + 5) / 10 << endl;
//	else if (far == 3 && min == 5)
//		cout << "12" << endl;
//	else
//	{
//		min /= 5;
//		money += min * 2.0;
//		cout << (int)(money * 10 + 5) / 10 << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int input;
//	cin >> input;
//	double sum = 0;
//	for (int i = 1; i <= input; i++)
//	{
//		sum = sum + (1.0 / (double)(i * 2.0 - 1));
//	}
//	cout << setprecision(6) << std::fixed << "sum = " << sum << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int input;
//	cin >> input;
//	int flag = input;
//	input = input % 5 ;
//	if (input == 1 || input == 2 || input == 3)
//		cout << "Fishing in day " << flag << endl;
//	else
//		cout << "Drying in day " << flag << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b, c;
//	cin >> a >> b >> c;
//	double p = (a + b + c) / 2.0;
//	if (a + b <= c || a + c <= b || b + c <= a)
//		cout << "These sides do not correspond to a valid triangle" << endl;
//	else
//	{
//		cout << setprecision(2) << std::fixed << "area = " << sqrt(p * (p - a) * (p - b) * (p - c)) << "; ";
//		cout << setprecision(2) << std::fixed << "perimeter = " << (double)(a + b + c) << endl;
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
//	else if(add==0)
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

//int main() {
//
//	int input = 0;
//	cin >> input;
//	if (input > 60)
//		cout << "Speed: " << input << " - " << "Speeding";
//	else
//		cout << "Speed: " << input << " - " << "OK";
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

//int main() {
//
//	double input = 0;
//	cin >> input;
//	if (input <= 15)
//	{
//		cout << setprecision(2) << std::fixed << 4 * input / 3 << endl;
//	}
//	else
//		cout << setprecision(2) << std::fixed << 2.5 * input - 17.5 << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int input = 0;
//	cin >> input;
//	if (input < 0)
//		cout << "Invalid Value!" << endl;
//	else if (input <= 50)
//		cout << setprecision(2) << std::fixed << "cost = " << input * 0.53 << endl;
//	else
//		cout << setprecision(2) << std::fixed << "cost = " << 50 * 0.53 + (input - 50) * 0.58 << endl;
//
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	double money = 0;
//	cin >> money;
//	if (money <= 1600)
//		cout << "0.00" << endl;
//	else if (money <= 2500)
//		cout << setprecision(2) << std::fixed << 0.05 * (money - 1600) << endl;
//	else if (money <= 3500)
//		cout << setprecision(2) << std::fixed << 0.10 * (money - 1600) << endl;
//	else if (money <= 4500)
//		cout << setprecision(2) << std::fixed << 0.15 * (money - 1600) << endl;
//	else
//		cout << setprecision(2) << std::fixed << 0.20 * (money - 1600) << endl;
//
//	system("pause");
//}

//int main() {
//
//	int F = 0;
//	cin >> F;
//	int flag = 5 * (F - 32);
//	int C = flag / 9;
//	cout << "Celsius = " << C << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int input = 0;//123
//	int gewei = 0;
//	int shiwei = 0;
//	int baiwei = 0;
//	cin >> input;
//	gewei = input % 10;//3
//	input /= 10;//12
//	shiwei = input % 10;//2
//	baiwei = input / 10;//1
//	if (gewei == 0)
//	{
//		if (shiwei == 0)
//			cout << baiwei << endl;
//		else
//		{
//			cout << shiwei;
//			cout << baiwei << endl;
//		}
//	}
//	else
//	{
//		cout << gewei;
//		cout << shiwei;
//		cout << baiwei << endl;
//	}
//
//	system("pause");
//	return 0;
//}