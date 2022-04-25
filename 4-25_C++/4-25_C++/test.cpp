#include <iostream>
using namespace  std;
#include <iomanip>
#include <string>
#include <cmath>

//给定两个整型数组，本题要求找出不是两者共有的元素。

int main() {

	int n, m;
	int count1 = 0;
	int count2 = 0;
	cin >> n;
	int arr1[20];
	int arr2[20];
	int arr3[20];
	int arr4[20];
	bool b = true;
	bool b1 = true;
	for (int i = 0; i < n; i++)
		cin >> arr1[i];
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> arr2[i];
	for (int i = 0; i < n; i++)
	{
		b = true;
		for (int j = 0; j < m; j++)
		{
			if (arr1[i] == arr2[j])
				b = false;
		}
		if (b)
		{
			b1 = true;
			for (int k = 0; k < count1; k++)
			{
				if (arr1[i] == arr3[k])
				{
					b1 = false;
					break;
				}
			}
			if (b1)
			{
				arr3[count1] = arr1[i];
				count1++;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		b = true;
		for (int j = 0; j < n; j++)
		{
			if (arr2[i] == arr1[j])
				b = false;
		}
		if (b)
		{
			b1 = true;
			for (int k = 0; k < count2; k++)
			{
				if (arr2[i] == arr4[k])
				{
					b1 = false;
					break;
				}
			}
			if (b1)
			{
				arr4[count2] = arr2[i];
				count2++;
			}
		}
	}

	if (count2 == 0)
	{
		for (int i = 0; i < count1; i++)
		{
			if (i == count1 - 1)
				cout << arr3[i] << endl;
			else
				cout << arr3[i] << " ";
		}
	}
	else
	{
		for (int i = 0; i < count1; i++)
		{
			cout << arr3[i] << " ";
		}
		for (int i = 0; i < count2; i++)
		{
			if (i == count2 - 1)
				cout << arr4[i] << endl;
			else
				cout << arr4[i] << " ";
		}
	}


	system("pause");
	return 0;
}

//本题要求编写程序，找出给定的n个数中的最大值及其对应的最小下标（下标从0开始）。
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
//		if (max == arr1[i])
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

/*
* 本题要求根据某城市普通出租车收费标准编写程序进行车费计算。具体标准如下：

起步里程为3公里，起步费10元；
超起步里程后10公里内，每公里2元；
超过10公里以上的部分加收50%的回空补贴费，即每公里3元；
营运过程中，因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）。
*/

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

/*
* 据说一个人的标准体重应该是其身高（单位：厘米）减去100、再乘以0.9所得到的公斤数。
已知市斤的数值是公斤数值的两倍。现给定某人身高，请你计算其标准体重应该是多少？
（顺便也悄悄给自己算一下吧……）
*/

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

/*
* 本题目要求计算下列分段函数f(x)的值：


*/

//int main() {
//
//	int x;
//	cin >> x;
//	if (x != 10)
//		cout << setprecision(1) << std::fixed << "f(" << (double)x << ") = " << (double)x << endl;
//	else
//		cout << setprecision(1) << std::fixed << "f(" << (double)x << ") = " << setprecision(1) << std::fixed << 1.0 / (double)x << endl;
//
//	system("pause");
//	return 0;
//}

//输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。
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


/*
* 一对兔子，从出生后第3个月起每个月都生一对兔子。
小兔子长到第3个月后每个月又生一对兔子。
假如兔子都不死，请问第1个月出生的一对兔子，
至少需要繁衍到第几个月时兔子总数才可以达到N对？
*/
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


/*
* 一只猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个；
第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
以后每天早上都吃了前一天剩下的一半加一个。
到第N天早上想再吃时，见只剩下一个桃子了。问：第一天共摘了多少个桃子？
*/
//int main() {
//
//	int N;
//	cin >> N;
//	int sum = 1;
//	for (int i = 0; i < N - 1; i++)
//	{
//		sum = (sum + 1) * 2;
//	}
//	cout << sum << endl;
//
//	system("pause");
//	return 0;
//}


/*
* 本题要求两个给定正整数的最大公约数和最小公倍数。
*/
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


/*
* 本题要求计算给定的一系列正整数中奇数的和。
*/
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

//#include <iostream>
//using namespace  std;
//#include <iomanip>
//#include <string>
//#include <cmath>
//
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

/*
* 本题要求根据某城市普通出租车收费标准编写程序进行车费计算。具体标准如下：

起步里程为3公里，起步费10元；
超起步里程后10公里内，每公里2元；
超过10公里以上的部分加收50%的回空补贴费，即每公里3元；
营运过程中，因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）。
*/
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    double sum;
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        sum += 1.0 / (i * 2 + 1);
//    }
//    cout << setprecision(6) << std::fixed << "sum = " << sum << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace  std;
//#include <iomanip>
//#include <string>
//#include <cmath>
//
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