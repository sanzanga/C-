//#include <iostream>
//using namespace std;
//
//int main() {
//
//	char a = 0;
//	int b = 0;
//	long c = 0;
//	double d = 0;
//
//	cout << sizeof(a) << endl;
//	cout << sizeof(b) << endl;
//	cout << sizeof(c) << endl;
//	cout << sizeof(d) << endl;
//
//	system("pause");
//
//	return 0;
//
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//    double d;
//    cin >> d;
//
//    // write your code here......
//    int ret = 0;
//    if (d > 0)
//    {
//        ret = (d * 10 + 5) / 10;
//        cout << ret << endl;
//    }
//    else
//    {
//        ret = (d * 10 - 5) / 10;
//        cout << ret << endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int a, b;
//	int ret = 0;
//	cin >> a >> b;
//	ret = a + b;
//
//	cout << ret << endl;
//
//	system("pause");
//
//	return 0;
//
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int a, b;
//	cin >> a >> b;
//	if (a > b)
//	{
//		cout << a << endl;
//	}
//	else
//	{
//		cout << b << endl;
//	}
//
//	system("pause");
//
//	return 0;
//
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int a, b;
//	cin >> a >> b;
//	if (a > b)
//	{
//		cout << (a + b) << " ";
//		cout << (a - b) << " ";
//		cout << (a * b) << " ";
//		cout << (a / b) << " ";
//		cout << (a % b) << endl;
//	}
//	else
//	{
//		cout << (a + b) << " ";
//		cout << (b - a) << " ";
//		cout << (a * b) << " ";
//		cout << (b / a) << " ";
//		cout << (b % a) << endl;
//	}
//
//	system("pause");
//
//	return 0;
//
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a = 0;
//    int b = 0;
//    cin >> a;
//    cin >> b;
//
//    //write your code here.......
//    int temp = a;
//    a = b;
//    b = temp;
//
//    cout << a << " " << b << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a, b, c;
//    cin >> a;
//    cin >> b;
//    cin >> c;
//
//    // write your code here......
//    int max1 = a > b ? a : b;
//    int max2 = max1 > c ? max1 : c;
//
//    cout << max2 << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    double price;
//    cin >> price;
//
//    double cost = 0.0;
//
//    // write your code here.......
//    if (price >= 5000)
//    {
//        cost = price * 0.6;
//    }
//    else if (price >= 2000)
//    {
//        cost = price * 0.7;
//    }
//    else if (price >= 500)
//    {
//        cost = price * 0.8;
//    }
//    else if (price >= 100)
//    {
//        cost = price * 0.9;
//    }
//
//    cout << setiosflags(ios::fixed) << setprecision(1) << cost << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//    double weight;
//    double height;
//
//    cin >> weight;
//    cin >> height;
//
//    // write your code here......
//    double BIM = weight / (height * height);
//
//    if (BIM < 18.5)
//    {
//        cout << "偏瘦" << endl;
//    }
//    else if (BIM < 20.9)
//    {
//        cout << "苗条" << endl;
//    }
//    else if (BIM <= 24.9)
//    {
//        cout << "适中" << endl;
//    }
//    else
//    {
//        cout << "偏胖" << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int score;
//    cin >> score;
//
//    // write your code here......
//    if (score > 100 || score < 0)
//    {
//        cout << "成绩不合法" << endl;
//    }
//    else if (score <= 100 && score >= 90)
//    {
//        cout << "优秀" << endl;
//    }
//    else if (score <= 89 && score >= 80)
//    {
//        cout << "良" << endl;
//    }
//    else if (score <= 79 && score >= 70)
//    {
//        cout << "中" << endl;
//    }
//    else if (score <= 69 && score >= 60)
//    {
//        cout << "及格" << endl;
//    }
//    else
//    {
//        cout << "差" << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int month;
//    cin >> month;
//
//    // write your code here......
//    if (month == 12 || month == 1 || month == 2)
//    {
//        cout << "冬季" << endl;
//    }
//    else if (month >= 3 && month <= 5)
//    {
//        cout << "春季" << endl;
//    }
//    else if (month <= 8 && month >= 6)
//    {
//        cout << "夏季" << endl;
//    }
//    else if (month <= 11 && month >= 9)
//    {
//        cout << "秋季" << endl;
//    }
//    else
//    {
//        cout << "不合法" << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    cin >> n;
//    int sum = 0;
//
//    // write your code here......
//
//    for (int i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//        {
//            sum += i;
//        }
//    }
//
//    cout << sum << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    cin >> n;
//    long long factorial = 1;
//
//    // write your code here......
//    for (int i = n; i >= 1; i--)
//    {
//        factorial *= i;
//    }
//
//    cout << factorial << endl;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//bool isN(int a)
//{
//	int num = a;
//	int ge = num % 10;
//	num /= 10;
//	int shi = num % 10;
//	int bai = num / 10;
//
//	if (ge * ge * ge + shi * shi * shi + bai * bai * bai == a)
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
//	for (int i = 100; i < 1000; i++)
//	{
//		if (isN(i))
//		{
//			cout << i << endl;
//		}
//
//	}
//
//	system("pause");
//
//	return 0;
//
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    // write your code here......
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            if (i != j)
//            {
//                cout << j << " * " << i << " = " << (i * j) << "    ";
//            }
//            else
//            {
//                cout << j << " * " << i << " = " << (i * j);
//            }
//        }
//        cout << endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // write your code here......
//    long long ret = 0;
//    long long i = 9;
//    int count = 0;
//    while (count < 10)
//    {
//        ret += i;
//        i = i * 10 + 9;
//        count++;
//    }
//
//    cout << ret << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    // 下落的高度和落地的次数
//    double h;
//    int n;
//
//    cin >> h;
//    cin >> n;
//
//    // write your code here......
//    double sum = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        if (i == 0)
//        {
//            sum += h;
//        }
//        else
//        {
//            sum += 2 * h;
//        }
//        h /= 2;
//    }
//
//    cout << fixed << setprecision(1) << sum << " " << setprecision(1) << h << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // write your code here......
//    int a;
//    cin >> a;
//
//    for (int i = 2; i <= a; i++) {
//        if (i == a) {
//            cout << "是质数" << endl;
//            break;
//        }
//        if (a % i == 0) {
//            cout << "不是质数" << endl;
//            break;
//        }
//
//    }
//
//
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    // write your code here......
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << min << " " << max << endl;

    return 0;
}