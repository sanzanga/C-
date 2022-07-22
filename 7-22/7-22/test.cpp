
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    double a, b, c, d;
//    cin >> a >> b >> c >> d;
//
//    if (d < a)
//    {
//        if (c < a && c < d)
//        {
//            if (b > a && b > d)
//            {
//                cout << "BW-Solid with Lower Shadow and Upper Shadow" << endl;
//            }
//            else
//            {
//                cout << "BW-Solid with Lower Shadow" << endl;
//            }
//        }
//        else
//        {
//            cout << "BW-Solid" << endl;
//        }
//        if (b > a && b > d && !(c < a && c < d))
//        {
//            cout << "BW-Solid with Upper Shadow";
//        }
//    }
//    else if (d > a)
//    {
//        if (c < a && c < d)
//        {
//            if (b > a && b > d)
//            {
//                cout << "R-Hollow with Lower Shadow and Upper Shadow" << endl;
//            }
//            else
//            {
//                cout << "R-Hollow with Lower Shadow" << endl;
//            }
//        }
//        else
//        {
//            cout << "R-Hollow" << endl;
//        }
//        if (b > a && b > d && !(c < a && c < d))
//        {
//            cout << "R-Hollow with Upper Shadow";
//        }
//
//    }
//    else
//    {
//        if (c < a)
//        {
//            if (b > a)
//            {
//                cout << "R-Cross with Lower Shadow and Upper Shadow" << endl;
//            }
//            else
//            {
//                cout << "R-Cross with Lower Shadow" << endl;
//            }
//        }
//        if (b > a && c == a)
//        {
//            cout << "R-Cross with Upper Shadow" << endl;
//        }
//        if (b == a && c == a)
//        {
//            cout << "R-Cross" << endl;
//        }
//    }
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    int a, b;
//    cin >> a >> b;
//    int sum = 0;
//    int flag = 1;
//
//    for (int i = a; i <= b; i++)
//    {
//        sum += i;
//        if (flag % 5 == 0 && i != b)
//        {
//            cout << setw(5) << i << endl;
//        }
//        else
//        {
//            cout << setw(5) << i;
//        }
//        flag++;
//    }
//
//    cout << endl;
//    cout << "Sum = " << sum << endl;
//
//    system("pause");
//    return 0;
//}
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    double a;
//    cin >> a;
//    double sum = 1;
//    double n = 1;
//    double num = 1;
//    double flag = 1;
//    double count = 1;
//    while (flag > a)
//    {
//        n *= num;
//        flag = n / (count * (2.0 * num + 1));
//        num++;
//        sum += flag;
//        count *= (num + 1);
//    }
//
//    cout << sum << endl;
//
//    system("pause");
//    return 0;
//}



//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    double a;
//    cin >> a;
//    double sum = 1;
//    double n = 1;
//    double num = 1;
//    double flag = 1;
//    double count = 1;
//    while (flag > a)
//    {
//        n *= num;
//        flag = n / (count * (2.0 * num + 1));
//        count *= (2 * num + 1);
//        num++;
//        sum += flag;
//    }
//
//    cout << setprecision(6) << std::fixed << sum * 2 << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a;
//    cin >> a;
//    int num = a;
//    int count = 1;
//    for (int i = num; i <= num + 3; i++)
//    {
//        for (int j = num; j <= num + 3; j++)
//        {
//            for (int g = num; g <= num + 3; g++)
//            {
//                if (j != i && g != i && g != j)
//                {
//                    if (count % 6 == 0)
//                    {
//                        cout << i << j << g;
//                    }
//                    else
//                    {
//                        cout << i << j << g << " ";
//                    }
//                    count++;
//                }
//            }
//        }
//        cout << endl;
//    }
//
//    system("pause");
//    return 0;
//}
//
//#include <iomanip>
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a;
//    cin >> a;
//    for (int i = 1; i <= a; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            cout << j << "*" << i << "=" << setiosflags(ios::left) << setw(4) << i * j;
//        }
//        cout << endl;
//    }
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n, u, d;
//    cin >> n >> u >> d;
//    int sum = 0;
//    int min = 0;
//    while (sum < n)
//    {
//        sum += u;
//        min++;
//        if (sum >= n)
//        {
//            break;
//        }
//        sum -= d;
//        min++;
//    }
//
//    cout << min << endl;
//
//    system("pause");
//    return 0;
//}


//#include <iomanip>
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    double a, b, c, d;
//    double left, right;
//    double ret;
//    cin >> a >> b >> c >> d;
//    cin >> left >> right;
//    double flag;
//    double num;
//    while (right - left > 0.001 && (left * left * left * a + left * left * b + left * c + d) * (right * right * right
//        * a + right * right * b + right * c + d) <= 0)
//    {
//        if ((left * left * left * a + left * left * b + left * c + d) == 0)
//        {
//            ret = left;
//            break;
//        }
//        if ((right * right * right
//            * a + right * right * b + right * c + d) == 0)
//        {
//            ret = right;
//            break;
//        }
//
//        flag = (left + right) / 2.0;
//        if ((left * left * left * a + left * left * b + left * c + d) * (right * right * right
//            * a + right * right * b + right * c + d) < 0)
//        {
//            num = flag * flag * flag * a + flag * flag * b + flag * c + d;
//        }
//        if (num == 0)
//        {
//            ret = flag;
//            break;
//        }
//        else if (num * (left * left * left * a + left * left * b + left * c + d) > 0)
//        {
//            left = flag;
//        }
//        else if (num * (right * right * right
//            * a + right * right * b + right * c + d) > 0)
//        {
//            right = flag;
//        }
//    }
//
//    cout << setprecision(2) << std::fixed << ret << endl;
//
//    system("pause");
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {



    system("pause");
    return 0;
}