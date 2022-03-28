#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    char a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    char arr[100] = { 0 };
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < a; j++)
    {
        if (arr[j] == a)
        {
            arr[j] = b;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == c)
        {
            arr[i] = d;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    system("pause");
    return 0;
}

//int main() {
//
//    int n;
//    char a, b, c, d;
//    cin >> n >> a >> b >> c >> d;
//
//    char arr[100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//
//    for (int j = 0; j < a; j++)
//    {
//        if (arr[j] == 'a')
//        {
//            arr[j] = 'b';
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == 'c')
//        {
//            arr[i] = 'd';
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i];
//    }
//
//    system("pause");
//    return 0;
//}

//int main() {
//
//	int a;
//	cin >> a;
//	int arr[100] = { 0 };
//	for (int i = 0; i < a; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < a; i++)
//	{
//		bool b = true;
//		for (int j = 2; j <= sqrt(arr[i]); j++)
//		{
//			if (arr[i] % j == 0)
//			{
//				b = false;
//				break;
//			}
//		}
//		if (b)
//		{
//			cout << "true" << endl;
//		}
//		else
//		{
//			cout << "false" << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//    int a;
//    int b;
//
//    for (int i = 0; i < a; i++)
//    {
//        cin >> b;
//        bool c = true;
//        for (int j = 2; j <= sqrt(b); j++)
//        {
//            if (a % j == 0)
//            {
//                c = false;
//                break;
//            }
//        }
//        if (c)
//        {
//            cout << "true" << endl;
//        }
//        else
//        {
//            cout << "false" << endl;
//        }
//    }
//
//    system("pause");
//    return 0;
//}

//int huiWen(int a,int n)
//{
//    int b = 0;//165
//    while (a)
//    {
//        b *= n;//0 50 560
//        b += a % n;//5 56
//        a /= n;//16 1
//    }
//    return b;
//}
//
//bool isHuiWen(int a,int n)
//{
//    int b = 0;//165
//    int num = a;
//    while (a)
//    {
//        b *= n;//0 50 560
//        b += a % n;//5 56
//        a /= n;//16 1
//    }
//    if (b == num)
//    {
//        return false;
//    }
//    else
//    {
//        return true;
//    }
//}
//
//int main() {
//
//    int a, n;
//    cin >> n >> a;
//
//    int count = 0;
//    while (true)
//    {
//        int ret = huiWen(a,n);
//        if (!isHuiWen(ret + a,n))
//        {
//            count++;
//            break;
//        }
//        else
//        {
//            count++;
//            a += ret;
//        }
//    }
//
//    cout << "STEP=" << count << endl;
//
//    system("pause");
//    return 0;
//}

//int huiWen(int a)
//{
//    int b = 0;//165
//    while (a)
//    {
//        b *= 10;//0 50 560
//        b += a % 10;//5 56
//        a /= 10;//16 1
//    }
//    return b;
//}
//
//bool isHuiWen(int a)
//{
//    int b = 0;//165
//    int num = a;
//    while (a)
//    {
//        b *= 10;//0 50 560
//        b += a % 10;//5 56
//        a /= 10;//16 1
//    }
//    if (b == num)
//    {
//        return false;
//    }
//    else
//    {
//        return true;
//    }
//}
//
//int main() {
//
//    int a;
//    cin >> a;
//
//    int count = 0;
//    while (true)
//    {
//        int ret = huiWen(a);
//        if (!isHuiWen(ret + a))
//        {
//            count++;
//            break;
//        }
//        else
//        {
//            count++;
//            a += ret;
//        }
//    }
//
//    cout << "STEP=" << count << endl;
//
//    system("pause");
//    return 0;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main() 
//{
//    long long t;
//    cin >> t;
//
//    long long a = t / 10;
//    while (a)
//    {
//        int b = a % 10;
//        a /= 10;
//        t *= 10;
//        t += b;
//    }
//
//    bool flag = true;
//    long long n = sqrt(t);
//    for (long long i = 2; i <= n; ++i) {
//        if (t % i == 0) {
//            flag = false;
//            break;
//        }
//    }
//
//    if (flag)
//        cout << "prime" << endl;
//    else
//        cout << "noprime" << endl;
//    return 0;
//}

//int huiWen(long long a)
//{
//	long long ret = a / 10;//13
//	while (a)//131 131
//	{
//		int b = a % 10;//3
//		a /= 10;//1
//		ret *= 10;//1310
//		ret += b;//13131
//	}
//	return ret;
//}
//
//int main() {
//
//	long long a;
//	cin >> a;
//	long long ret = huiWen(a);
//
//	//cout << ret << endl;
//
//	bool b = true;
//	for (long long i = 2; i <= sqrt(ret); i++)
//	{
//		if (ret % i == 0)
//		{
//			b = false;
//			break;
//		}
//	}
//
//	if (b)
//	{
//		cout << "prime" << endl;
//	}
//	else
//	{
//		cout << "nonprime" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//输入：
//13
//复制
//输出：
//prime
//复制
//说明：
//13的回文数是131，131是素数