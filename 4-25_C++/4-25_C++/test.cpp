#include <iostream>
using namespace  std;
#include <iomanip>
#include <string>
#include <cmath>

//���������������飬����Ҫ���ҳ��������߹��е�Ԫ�ء�

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

//����Ҫ���д�����ҳ�������n�����е����ֵ�����Ӧ����С�±꣨�±��0��ʼ����
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
* ����Ҫ�����ĳ������ͨ���⳵�շѱ�׼��д������г��Ѽ��㡣�����׼���£�

�����Ϊ3����𲽷�10Ԫ��
������̺�10�����ڣ�ÿ����2Ԫ��
����10�������ϵĲ��ּ���50%�Ļؿղ����ѣ���ÿ����3Ԫ��
Ӫ�˹����У���·�輰�˿�Ҫ����ʱͣ���ģ���ÿ5����2Ԫ���գ�����5�������շѣ���
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
* ��˵һ���˵ı�׼����Ӧ��������ߣ���λ�����ף���ȥ100���ٳ���0.9���õ��Ĺ�������
��֪�н����ֵ�ǹ�����ֵ���������ָ���ĳ����ߣ�����������׼����Ӧ���Ƕ��٣�
��˳��Ҳ���ĸ��Լ���һ�°ɡ�����
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
* ����ĿҪ��������зֶκ���f(x)��ֵ��


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

//����һ���ַ������Ը��ַ���������������������ַ�����
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
* һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӡ�
С���ӳ�����3���º�ÿ��������һ�����ӡ�
�������Ӷ����������ʵ�1���³�����һ�����ӣ�
������Ҫ���ܵ��ڼ�����ʱ���������ſ��ԴﵽN�ԣ�
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
* һֻ���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬�ֶ����һ����
�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
�Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ���һ����
����N���������ٳ�ʱ����ֻʣ��һ�������ˡ��ʣ���һ�칲ժ�˶��ٸ����ӣ�
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
* ����Ҫ���������������������Լ������С��������
*/
//int main() {
//
//	int num1, num2;
//	cin >> num1 >> num2;
//	int r = 0;
//	//���Լ�� շת�����
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
* ����Ҫ����������һϵ���������������ĺ͡�
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
* ����Ҫ�����ĳ������ͨ���⳵�շѱ�׼��д������г��Ѽ��㡣�����׼���£�

�����Ϊ3����𲽷�10Ԫ��
������̺�10�����ڣ�ÿ����2Ԫ��
����10�������ϵĲ��ּ���50%�Ļؿղ����ѣ���ÿ����3Ԫ��
Ӫ�˹����У���·�輰�˿�Ҫ����ʱͣ���ģ���ÿ5����2Ԫ���գ�����5�������շѣ���
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