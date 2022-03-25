#include<iostream>
#include<cmath>
using namespace std;

int count(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        bool b = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                b = false;
                break;
            }
        }
        if (b)
        {
            count += i;
        }
    }
    return count;
}

int main() {

    int a, b;
    cin >> a >> b;
    int ret = count(a, b);

    cout << ret << endl;

    system("pause");
    return 0;
}

//double howPay(int arr[], int a)
//{
//    double money;
//    for (int i = 0; i < a; i++)
//    {
//        if (arr[i] <= 60)
//        {
//            money += 0.1;
//        }
//        else
//        {
//            money += 0.2;
//        }
//    }
//    return money;
//}
//

//int main() 
//{
//    long long t;
//    cin >> t;
//    long long a = t / 10;
//    while (a)
//    {
//        int b = a % 10;
//        a /= 10;
//        t *= 10;
//        t += b;
//    }
//    bool flag = true;
//    long long n = sqrt(t);
//    for (long long i = 2; i <= n; ++i) 
//    {
//        if (t % i == 0) 
//        {
//            flag = false;
//            break;
//        }
//    }
//    if (flag)
//        cout << "prime" << endl;
//    else
//        cout << "noprime" << endl;
//    return 0;
//}