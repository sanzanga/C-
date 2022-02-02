#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace  std;
#include <iomanip>
#include <string>
#include <cmath>

int yue(int a, int b) {
	int r = 0;
	int max = a > b ? a : b;
	int min = a < b ? a : b;
	while (max % min)
	{
		r = max % min;
		max = min;
		min = r;
	}
	return min;
}

int bei(int a, int b, int min) {
	if (a < 0 || b < 0)
		return -(a * b / min);
	else
		return a * b / min;
}

int main() {

	int a, b;
	int arr1[10000] = { 0 };
	int arr2[10000] = { 0 };
	int i = 0;
	while (scanf("%d%d", &arr1[i], &arr2[i])) {
		if (arr2[i] == -1)
			break;
		else {
			a = arr1[i];
			b = arr2[i];
			//最大公约数
			int ret1 = yue(a, b);
			int ret2 = bei(a, b, ret1);
			if (ret1 < 0)
				cout << -ret1 << " " << ret2 << endl;
			else {
				cout << ret1 << " " << ret2 << endl;
			}
		}
		i++;
	}

	system("pause");
	return 0;
}

//int main() {
//
//	int a, b;
//	cin >> a, b;
//	//最大公约数
//	int ret1 = yue(a, b);
//	int ret2 = bei(a, b, ret1);
//	if (ret1 < 0)
//		cout << -ret1 << " " << ret2 << endl;
//	else {
//		cout << ret1 << " " << ret2 << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
	//int a, b;
	//while (scanf("%d%d", &a, &b) != '\r\n') {
	//	//最大公约数
	//	int ret1 = yue(a, b);
	//	int ret2 = bei(a, b, ret1);
	//	if (ret1 < 0)
	//		cout << -ret1 << " " << ret2 << endl;
	//	else {
	//		cout << ret1 << " " << ret2 << endl;
	//	}
//	}
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
	//while (max % min)
	//{
	//	r = max % min;
	//	max = min;
	//	min = r;
	//}
//	int a = num1 * num2 / min;
//	cout << min << " " << a << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int n;
//	cin >> n;
//	int arr[1000] = { 0 };//放数字的数组
//	int num[1000] = { 0 };//放次数的数组
//	int count = 0;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	for (int i = 0; i < n; i++) {
//		count = 0;
//		for (int j = 0; j < n; j++) {
//			if (arr[i] == arr[j])
//				count++;
//		}
//		num[i] = count;
//	}
//	int max = 0;
//	int flag = 0;
//	for (int i = 0; i < n; i++) {
//		if (num[i] > max) {
//			max = num[i];
//			flag = i;
//		}
//	}
//	cout << arr[flag] << " " << num[flag] << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	char ch[7][7];
//	for (int i = 0; i < 7; i++) {
//		for (int j = 0; j < 7; j++) {
//			if (i == 0 || (i == 1 && (j == 1 || j == 2 || j == 3 || j == 4 || j == 5)) || (i == 2 && (j == 2 || j == 3 || j == 4)) || (i == 3 && j == 3))
//				ch[i][j] = '#';
//			else if (i == 6 || (i == 5 && (j == 1 || j == 2 || j == 3 || j == 4 || j == 5)) || (i == 4 && (j == 2 || j == 3 || j == 4)))
//				ch[i][j] = '#';
//			else
//				ch[i][j] = ' ';
//		}
//	}
//	for (int i = 0; i < 7; i++) {
//		for (int j = 0; j < 7; j++) {
//			cout << ch[i][j];
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	string str;
//	int arr[20];//放字符串的长度
//	string s[20];//放字符串
//	int count1 = 0;
//	while (cin>>str) {
//		if (str == "#")
//			break;
//		s[count1] = str;
//		count1++;
//	}
//	for (int i = 0; i < count1 - 1; i++) {
//		for(int j = 0; j < count1 - 1 - i; j++) {
//			if (s[j].length() > s[j + 1].length()) {
//				string temp = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < count1; i++)
//		cout << s[i] << " ";
//	system("pause");
//	return 0;
//}

//int prime(int x) {
//	for (int i = 2; i <= sqrt(x); i++) {
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main() {
//
//	int a;
//	int count = 0;
//	while (scanf("%d", &a)) {
//		if (a == 0)
//			break;
//		count = 0;
//		for (int i = 2; i <= a / 2; i++) {
//			if (prime(i) && prime(a - i)) {
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int n, k;
//	cin >> n >> k;
//	int arr[10000] = { 0 };
//	int count = 0;
//	arr[count] = 2;
//	count++;
//	bool b = true;
//	int sum = 0;
//	for (int i = 3; i <= n; i++) {
//		b = true;
//		for (int j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				b = false;
//				break;
//			}
//		}
//		if (b) {
//			arr[count] = i;
//			count++;
//		}
//	}
//	count--;
//	int min = count < k ? count : k;
//	if (count < k) {
//		for (int i = min; i >= 0; i--) {
//			sum += arr[count];
//			if (i == 0)
//				cout << arr[count] << "=";
//			else
//				cout << arr[count] << "+";
//			count--;
//		}
//	}
//	else {
//		for (int i = min; i > 0; i--) {
//			sum += arr[count];
//			if (i == 1)
//				cout << arr[count] << "=";
//			else
//				cout << arr[count] << "+";
//			count--;
//		}
//	}
//	cout << sum << endl;
//
//	system("pause");
//}

//int main() {
//
//	char c;
//	int a;
//	cin >> a;
//	scanf("%c", &c);
//	while (scanf("%c", &c) != '\n') {
//		if (c < 65 || c>122 || (c > 90 && c < 97))
//			cout << c;
//		else if (c > 64 && c < 91) {
//			if (a >= 0) {
//				c = c - a;
//				if (c < 64)
//					c += 26;
//			}
//			else {
//				c = c - a;
//				if (c > 90)
//					c -= 26;
//			}
//			cout << c;
//		}
//		else {
//			if (a >= 0) {
//				c = c - a;
//				if (c < 97)
//					c += 26;
//			}
//			else {
//				c = c - a;
//				if (c > 122)
//					c -= 26;
//			}
//			cout << c;
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a;
//	cin >> a;
//  a%=26;
//	cin.get();
//	string str;
//	getline(cin, str);
//	int i = 0;
//	unsigned char s[1000] = { 0 };
//	while (str[i] != '\0') {
//		if (str[i] < 65 || str[i]>122 || (str[i] > 90 && str[i] < 97))
//			s[i] = str[i];
//		else if (str[i] > 64 && str[i] < 91) {
//			if (a >= 0) {
//				s[i] = str[i] - a;
//				if (s[i] < 64)
//					s[i] += 26;
//			}
//			else {
//				s[i] = str[i] - a;
//				if (s[i] > 90)
//					s[i] -= 26;
//			}
//		}
//		else {
//			if (a >= 0) {
//				s[i] = str[i] - a;
//				if (s[i] < 97)
//					s[i] += 26;
//			}
//			else {
//				s[i] = str[i] - a;
//				if (s[i] > 122)
//					s[i] -= 26;
//			}
//		}
//		i++;
//	}
//	s[i] = '\0';
//	cout << s << endl;
//	return 0;
//
//}

//double fact(int m, int n)
//{
//	int count = 0;
//	int count1 = m;
//	int ret1 = 1;
//	int ret2 = 1;
//	while (count < count1) {
//		ret1 *= n;
//		ret2 *= m;
//		n--;
//		m--;
//		count++;
//	}
//	double ret = ret1 / ret2;
//	return ret;
//}
//
//int main() {
//
//	int m, n;
//	cin >> m >> n;
//	double ret = fact(m, n);
//	cout << "result = " << ret << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b;
//	cin >> a >> b;
//	int arr[12];
//	bool flag = true;
//	for (int i = 0; i < a; i++)
//		cin >> arr[i];
//	for (int i = 0; i < a; i++) {
//		if (arr[i] == b) {
//			flag = false;
//			cout << i << endl;
//		}
//	}
//	if (flag)
//		cout << "Not Found" << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	long int a, b;
//	cin >> a >> b;
//	long int arr[22];
//	long int count = 0;
//	bool c = true;
//	for (long int i = 0; i < a; i++)
//		cin >> arr[i];
//	for (long int i = 0; i < a; i++) {
//		if (arr[i] == b) {
//			count = i;
//			c = false;
//		}
//	}
//	if (c)
//		cout << "Not Found" << endl;
//	else
//		cout << count << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	char a;
//	cin >> a;
//	string str;
//	cin.get();
//	getline(cin, str);
//	int i = 0;
//	int count = 0;
//	bool b = true;
//	while (str[i] != '\0') {
//		if (str[i] == a) {
//			b = false;
//			count = i;
//		}
//		i++;
//	}
//	if (b)
//		cout << "Not Found" << endl;
//	else
//		cout << "index = " << count << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b;
//	cin >> a >> b;
//	int arr[10];
//	for (int i = 0; i < a; i++)
//		cin >> arr[i];
//	bool c = true;
//	for (int i = 0; i < a-1; i++) {
//		int num = arr[i];
//		for (int j = i + 1; j < a; j++) {
//			if (num == arr[j]) {
//				c = false;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < a - 1; i++) {
//		for (int j = 0; j < a - 1 - i; j++){
//			if (arr[j] > arr[j + 1]) {
//				c = false;
//				break;
//			}
//		}
//	}
//	if (c == false)
//		cout << "Invalid Value" << endl;
//	else
//	{
//		int left = 0;
//		int right = a - 1;
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			cout << "[" << left << "," << right << "]" << "[" << mid << "]" << endl;
//			if (arr[mid] > b) {
//				right = mid - 1;
//			}
//			else if (arr[mid] < b) {
//				left = mid + 1;
//			}
//			else {
//				cout << mid << endl;
//				break;
//			}
//		}
//		if (left > right)
//			cout << "Not Found" << endl;
//	}
//
//	system("pause");
//	return 0;
//}