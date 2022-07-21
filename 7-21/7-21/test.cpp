//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int cm;
//    cin >> cm;
//    int foot;//Ó¢³ß
//    int inch;//Ó¢´ç
//
//    foot = (cm / 30.48) * 144 / 145;
//    inch = ((cm / 30.48) - foot) * 12;
//
//    cout << foot << " " << inch << endl;
//
//    system("pause");
//    return 0;
//}


//#include  <iostream>
//using namespace std;
//
//int main() {
//
//    int hour, minute, time;
//    cin >> time;//1120
//    minute = time % 100;//20
//    hour = time / 100;//11
//
//    int addHour, addMin, addTime;
//    cin >> addTime;//110
//    if (addTime > 0)
//    {
//        addHour = addTime / 60;//1
//        addMin = addTime % 60;//50
//        minute += addMin;//70
//        hour = hour + minute / 60;//13
//        minute %= 60;
//    }
//    else if (addTime < 0)
//    {
//        addTime = -addTime;
//        addHour = addTime / 60;
//        addMin = addTime % 60;
//        minute -= addMin;
//        hour -= addHour;
//        if (minute < 0)
//        {
//            minute = -minute;
//            hour -= minute / 60;
//            minute %= 60;
//        }
//        else if (minute > 0)
//        {
//            hour += minute / 60;
//            minute %= 60;
//        }
//    }
//    cout << hour << minute << endl;
//
//    system("pause");
//    return 0;
//}


//#include  <iostream>
//using namespace std;
//
//int main() {
//
//    int hour, minute, time;
//    cin >> time;//1120
//    minute = time % 100;//20
//    hour = time / 100;//11
//
//    int addHour, addMin, addTime;
//    cin >> addTime;//110
//    if (addTime > 0)
//    {
//        addHour = addTime / 60;//1
//        addMin = addTime % 60;//50
//        minute += addMin;//70
//        hour = hour + addHour + minute / 60;//13
//        minute %= 60;
//    }
//    else if (addTime < 0)
//    {
//        addTime = -addTime;//110
//        addHour = addTime / 60;//1
//        addMin = addTime % 60;//50
//        minute -= addMin;//-50
//        hour -= addHour;//1
//        if (minute < 0)
//        {
//            minute = -minute;//50
//            if (minute % 60 == 0)
//            {
//                hour = hour - minute / 60;
//            }
//            else
//            {
//                hour = hour - minute / 60 - 1;//0
//            }
//            minute = 60 - minute % 60;//30
//        }
//        else if (minute > 0)
//        {
//            hour += minute / 60;//0
//            minute %= 60;//10
//        }
//    }
//    if (minute == 0)
//    {
//        if (hour == 0)
//        {
//            cout << "000" << endl;
//        }
//        else
//        {
//            cout << hour << "00" << endl;
//        }
//    }
//    else
//    {
//        if (hour == 0)
//        {
//            cout << "0" << minute << endl;
//        }
//        else
//        {
//            cout << hour << minute << endl;
//        }
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
//    int a;
//    cin >> a;
//    int b;
//    while (a > 0)
//    {
//        b += a % 10;//3 32 321
//        a /= 10;//12 1 0
//        if (a == 0)
//        {
//            break;
//        }
//        b *= 10;//30 320
//    }
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
//    int a;
//    cin >> a;
//    int b;
//    while (a > 10)
//    {
//        b += a / 16;
//        a %= 16;
//        b *= 10;
//    }
//    b += a;
//
//    cout << b << endl;
//
//    system("pause");
//    return 0;
//}


//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//    cout << "------------------------------------" << endl;
//    cout << "Province      Area(km2)   Pop.(10K)" << endl;
//    cout << "------------------------------------" << endl;
//    cout << "Anhui         139600.00   6461.00" << endl;
//    cout << "Beijing        16410.54   1180.70" << endl;
//    cout << "Chongqing      82400.00   3144.23" << endl;
//    cout << "Shanghai        6340.50   1360.26" << endl;
//    cout << "Zhejiang      101800.00   4894.00" << endl;
//    cout << "------------------------------------" << endl;
//
//    cout<<setprecision(2)<<std::fixed<<
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
//    int b;
//    char c;
//    double d;
//    cin >> a >> b >> c >> d;
//
//    cout << c << " " << b << " " << setprecision(2) << std::fixed << a << " " << d;
//
//    system("pause");
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int hour, min;
//    scanf("%d:%d", &hour, &min);
//    if (hour > 12)
//    {
//        hour -= 12;
//        if (hour == 12)
//        {
//            hour = 0;
//            cout << hour << ":" << min << " AM" << endl;
//
//        }
//        else
//        {
//            cout << hour << ":" << min << " PM" << endl;
//        }
//    }
//    else
//    {
//        if (hour == 12)
//        {
//            cout << hour << ":" << min << " PM" << endl;
//        }
//        else
//        {
//            cout << hour << ":" << min << " AM" << endl;
//        }
//    }
//
//    system("pause");
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a;
//    cin >> a;
//    if (a > 60)
//    {
//        cout << "Speed: " << a << " - Speeding" << endl;
//    }
//    else
//    {
//        cout << "Speed: " << a << " - OK" << endl;
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
//    if (a == b && a != c)
//    {
//        cout << "C" << endl;
//    }
//    else if (a == c && a != b)
//    {
//        cout << "B" << endl;
//    }
//    else
//    {
//        cout << "A" << endl;
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
//    int year, hour;
//    cin >> year >> hour;
//    double money;
//    if (hour > 40)
//    {
//        if (year >= 5)
//        {
//            money = 50 * 40 + (hour - 40) * 50 * 1.5;
//        }
//        else
//        {
//            money = 30 * 40 + (hour - 40) * 30 * 1.5;
//        }
//    }
//    else
//    {
//        if (year >= 5)
//        {
//            money = hour * 50;
//        }
//        else
//        {
//            money = 30 * hour;
//        }
//    }
//
//    cout << setprecision(2) << std::fixed << money << endl;
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
//    int a;
//    cin >> a;
//    double b;
//
//    if (a <= 15)
//    {
//        b = 4 * a / 3.0;
//    }
//    else
//    {
//        b = 2.5 * a - 17.5;
//    }
//
//    cout << setprecision(2) << std::fixed << b << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a, b;
//    char c;
//    cin >> a >> c >> b;
//
//    if (c == '+')
//    {
//        cout << a + b << endl;
//    }
//    else if (c == '-')
//    {
//        cout << a - b << endl;
//    }
//    else if (c == '*')
//    {
//        cout << a * b << endl;
//    }
//    else if (c == '/')
//    {
//        cout << a / b << endl;
//    }
//    else if (c == '%')
//    {
//        cout << a % b << endl;
//    }
//    else
//    {
//        cout << "ERROR" << endl;
//    }
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