#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace  std;
#include <iomanip>
#include <string>
#include <cmath>

int main() {

	int n, m;
	cin >> n;
	int count = 0;
	int a[10] = { 0 };
	int a1[10] = { 0 };
	bool b = true;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 0; i < n; i++) {
		if (a[i] >= m) {
			a1[i] = m;
			count = i;
			b = false;
			break;
		}
		else
			a1[i] = a[i];
	}
	if (b == false) {
		for (int i = count; i < n; i++) {
			a1[i + 1] = a[i];
		}
		for (int i = 0; i <= n; i++) {
			cout << a1[i] << " ";
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << m << " ";
	}

	system("pause");
	return 0;
}

//int main() {
//
//	int n;
//	cin >> n;
//	int a[10];
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - 1 - i; j++) {
//			if (a[j] < a[j + 1]) {
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (i == n - 1)
//			cout << a[i] << endl;
//		else
//			cout << a[i] << " ";
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int n;
//	cin >> n;
//	if (n == 1) {
//		int num;
//		cin >> num;
//		cout << num << endl;
//	}
//	else {
//		int a[1000];
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		for (int i = 0; i < n - 1; i++) {
//			for (int j = 0; j < n - 1 - i; j++) {
//				if (a[j] > a[j + 1]) {
//					int temp = a[j];
//					a[j] = a[j + 1];
//					a[j + 1] = temp;
//				}
//			}
//			for (int k = 0; k < n; k++) {
//				if (k == n - 1)
//					cout << a[k] << endl;
//				else
//					cout << a[k] << " ";
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//
// int main() {
//
//	int x = 0, y;
//	int a[1000];
//	while (scanf("%d", &y) != -1)
//	{
//		a[x] = y;
//		x++;
//	}
//	for (int i = 0; i < x - 1; i++){
//		for (int j = 0; j < x - 1 - i; j++){
//			if (a[j] > a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//
//		}
//	}
//	for (int i = 0; i < x; i++)
//	{
//		if (i == x - 1)
//			cout << a[i] << endl;
//		else
//			cout << a[i] << " ";
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int input, k;
//	cin >> input >> k;
//	int arr[12] = { 0 };
//	for (int i = 0; i < input; i++)
//		cin >> arr[i];
//	int count = 0;
//	int count2 = 0;
//	int count1 = -1;
//	int min = arr[0];
//	for (int i = 0; i <= k; i++){
//		for (int j = count2; j < input; j++){
//			if (min >= arr[j]) {
//				count = j;
//				min = arr[j];
//			}
//		}
//		int temp = arr[count2];
//		arr[count2] = arr[count];
//		arr[count] = temp;
//		count1++;
//		count2++;
//		if (k == count1)
//			break;
//		min = arr[count2];
//	}
//	for (int i = 0; i < input; i++)
//	{
//		if (i == input - 1)
//			cout << arr[i] << endl;
//		else
//			cout << arr[i] << " ";
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int input;
//	cin >> input;
//	cin.get();
//	string str;
//	getline(cin, str);
//	int sz = str.length();
//	int i = 0;
//	int col = sz / input;
//	if (sz % input != 0) col++;
//	char arr[1005][1005];
//	int count = 0;
//	for (int i = col-1; i >=0; i--){
//		for (int j = 0; j <input ; j++){
//			if (count < sz)
//			{
//				arr[j][i] = str[count++];
//			}
//			else
//				arr[j][i] = ' ';
//		}
//	}
//	for (int i = 0; i < input; i++){
//		string str1;
//		for (int j = 0; j <= col-1; j++)
//			str1 += arr[i][j];
//		cout << str1 << endl;
//	}
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//using namespace std;
//int main()
//{
//	int n, m;
//	char s[1005];
//	char arr[1005][1005];
//	cin >> n;
//	getchar();
//	cin.getline(s, 1005);
//	int len = strlen(s);
//	m = len / n;
//	if (len % n != 0)
//		m++;
//	int i = 0;
//	for (int k = m - 1; k >= 0; k--)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i < len)
//				arr[j][k] = s[i++];
//			else
//				arr[j][k] = ' ';
//		}
//	}
//	for (int j = 0; j < n; j++)
//	{
//		for (int k = 0; k < m; k++)
//			cout << arr[j][k];
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//
//	int arr[9];
//	int nums[3][3] = { 0 };
//	int count = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			nums[j][i] = arr[count];
//			count++;
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << setw(4) << nums[i][j];
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int nums[5][5];
//	int sum = 0;
//	int mul = 1;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> nums[i][j];
//		}
//	}
//	sum = nums[0][0] + nums[1][1] + nums[2][2] + nums[3][3] + nums[4][4];
//	mul = nums[0][4] * nums[1][3] * nums[2][2] * nums[3][1] * nums[4][0];
//	cout << "s=" << sum << ",t=" << mul << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	cout << "在这里在这里给出一组输入。例如：" << endl;
//	string arr = { 0 };
//	cin >> arr;
//	int i = 0;
//	while (arr[i++] != '\0')
//	{ }
//	i--;
//	int count = i;
//	for (int j = 0; j < count - 1; j++)
//	{
//		for (int k = 0; k < count - 1 - j; k++)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				char ch = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = ch;
//			}
//		}
//	}
//	cout << "在这里给出相应的输出。例如：" << endl;
//	cout << arr << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	char arr[32] = { 0 };
//	int nums[4] = { 0 };
//	int k = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 31; i >= 0; i--)
//	{
//		if (k == 8)
//			k = 0;
//		if (i >= 24)
//		{
//			nums[3] += ((int)arr[i] - (int)48) * (int)pow(2, k);
//			k++;
//		}
//		else if (i >= 16)
//		{
//			nums[2] += ((int)arr[i] - (int)48) * (int)pow(2, k);
//			k++;
//		}
//		else if (i >= 8)
//		{
//			nums[1] += ((int)arr[i] - (int)48) * (int)pow(2, k);
//			k++;
//		}
//		else
//		{
//			nums[0] += ((int)arr[i] - (int)48) * (int)pow(2, k);
//			k++;
//		}
//	}
//	cout << nums[0] << "." << nums[1] << "." << nums[2] << "." << nums[3] << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int n, count;
//	cin >> n;
//	int arr[12][12] = { 0 };
//	int x = 0;
//	int y = 0;
//	count = 1;
//	while (1)
//	{
//		//向右
//		while (arr[x][y] == 0 && (y+1) <= n)
//		{
//			arr[x][y] = count;
//			count++;
//			y++;
//		}
//		y--;
//		//向下
//		x++;
//		if (count > n * n)
//			break;
//		while (arr[x][y] == 0 && (x+1) <=n )
//		{
//			arr[x][y] = count;
//			count++;
//			x++;
//		}
//		x--;
//		y--;
//		if (count > n * n)
//			break;
//		//向左
//		while (y >= 0 && arr[x][y] == 0)
//		{
//			arr[x][y] = count;
//			count++;
//			y--;
//		}
//		x--;
//		y++;
//		if (count > n * n)
//			break;
//		//向上
//		while (x >= 0 && arr[x][y] == 0)
//		{
//			arr[x][y] = count;
//			count++;
//			x--;
//		}
//		x++;
//		y++;
//		if (count > n * n)
//			break;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << setw(3) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}