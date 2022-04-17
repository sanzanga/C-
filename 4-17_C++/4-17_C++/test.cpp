#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    cout << "score1=" << a << ",score2=" << b << ",score3=" << c << endl;

    system("pause");
    return 0;
}

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
//    char ch;
//    cin >> ch;
//
//    cout << (int)ch << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    char ch;
//    cin >> ch;
//    int n = 5;
//
//    for (int i = 0; i < (n - 1) / 2; i++)
//    {
//        int a = (n - 1) / 2 - i;//空格数
//        int b = i * 2 + 1;//符号数
//        int c = a;
//        while (a)
//        {
//            cout << " ";
//            a--;
//        }
//        while (b)
//        {
//            cout << ch;
//            b--;
//        }
//        while (c)
//        {
//            cout << " ";
//            c--;
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << ch;
//    }
//    cout << endl;
//
//    for (int i = 0; i < 2; i++)
//    {
//        int a = i + 1;//空格数
//        int b = n - 2 * (i + 1);
//        int c = a;
//        while (a)
//        {
//            cout << " ";
//            a--;
//        }
//        while (b)
//        {
//            cout << ch;
//            b--;
//        }
//        while (c)
//        {
//            cout << " ";
//            c--;
//        }
//        cout << endl;
//    }
//
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    char ch;
//    cin >> ch;
//
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            cout << ch;
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
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    cout << b << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    char ch;
//    cin >> ch;
//
//    cout << ch << endl;
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
//
//    cout << setprecision(3) << std::fixed << a << endl;
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
//
//    cout << a << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    cout << "     **" << endl;
//    cout << "     **" << endl;
//    cout << "************" << endl;
//    cout << "************" << endl;
//    cout << "    *  *    " << endl;
//    cout << "    *  *    " << endl;
//
//    system("pause");
//    return 0;
//}

//int main() {
//
//	cout << "Hello Nowcoder!" << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//    int letter = 0;
//    int digit = 0;
//    int space = 0;
//    int other = 0;
//
//    char buf[1024] = { 0 };
//    cin.getline(buf, sizeof(buf));
//
//    // write your code here......
//    for (int i = 0; buf[i] != '\0'; i++)
//    {
//        char ch = buf[i];
//        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//        {
//            letter++;
//        }
//        else if (ch >= '0' && ch <= '9')
//        {
//            digit++;
//        }
//        else if (ch == ' ')
//        {
//            space++;
//        }
//        else
//        {
//            other++;
//        }
//    }
//
//    cout << "letter:" << letter << " digit:" << digit << " space:" << space << " other:" << other << endl;
//
//    return 0;
//}