//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a;
//    cin >> a;
//    bool flag = true;
//    int i, j, num, count;
//    int arr[100000];
//    for (i = 1; i <= a; i++)
//    {
//        for (j = 1; j <= a; j++)
//        {
//            if (i * i + j * j == a)
//            {
//                flag = false;
//                num++;
//                if (i < j)
//                {
//                    arr[count] = i;
//                    count++;
//                    arr[count] = j;
//                    count++;
//                }
//                else
//                {
//                    arr[count] = j;
//                    count++;
//                    arr[count] = i;
//                    count++;
//                }
//            }
//        }
//    }
//    if (flag)
//    {
//        cout << "No Solution" << endl;
//    }
//    else
//    {
//        for (int h = 0; h < count / 2; h++)
//        {
//            if (h % 2 == 0)
//            {
//                cout << arr[h] << " ";
//            }
//            else
//            {
//                cout << arr[h] << endl;
//            }
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
//    int c, d;
//    bool flag = false;
//    c += 9 * 10;
//    d += 3 * 10;
//    b += 10;
//    while (a > b)
//    {
//        if (c > d)
//        {
//            d += 30 * 3;
//            b += 30;
//            if (b >= a)
//            {
//                flag = true;
//            }
//        }
//        else
//        {
//            c += 9 * 10;
//            d += 3 * 10;
//            b += 10;
//            if (b >= a)
//            {
//                flag = false;
//            }
//        }
//    }
//    if (flag)
//    {
//        b = b - a;
//        d -= b * 3;
//    }
//    else
//    {
//        b = b - a;
//        c -= b * 9;
//        d -= b * 3;
//    }
//
//    if (c > d)
//    {
//        cout << "^_^" << " " << c << endl;
//    }
//    else if (c < d)
//    {
//        cout << "@_@" << " " << d << endl;
//    }
//    else
//    {
//        cout << "-_-" << " " << d << endl;
//    }
//
//    system("pause");
//    return 0;
//}

//#include<iostream>
////�ٴ�count��ʼ��׺Ϊ0������������Ҫ��������1300000�ģ���Ҫ���ǲ��ϡ��򡱣�
////��0ֻ���㲻��Ȩֵ
////���м�������0ֻ��һ����
////�ܲ�Ҫ������С�ĸ�λ��0
//using namespace std;
//int main(void) {
//    int n;
//    cin >> n;
//    if (n == 0)
//    {
//        cout << 'a';
//        return 0;
//    }
//    int s[9];
//    for (int i = 0; i < 9; i++)
//        s[i] = -1;//����ͳһ����ֵ
//
//    int flag = 1;//���ĩβ��0
//    int count = 8;
//    //��������
//    for (int i = 8; n; i--)
//    {
//        s[i] = n % 10;
//        if (s[i] != 0 && flag == 1)
//        {
//            count = i;
//            flag = 0;
//        }//�Ӻ���ǰ��һ�γ��ֲ���0��λ   
//        n = n / 10;
//    }
//
//    int flag0 = 1;//����Ƿ��ж��0
//    for (int i = 0; i <= count; i++)
//    {
//        if (s[i] == -1)
//            continue;
//        else if (s[i] == 0 && i == 4 && (s[1] > 0 || s[2] > 0 || s[3] > 0))
//        {
//            cout << 'W';
//            continue;
//        }//��0�����,������λ,���Ҳ�������100000001���������ʱ����0ֻ��W
//
//        switch (s[i])
//        {
//        case 0:
//            if (flag0)
//                cout << 'a';
//            break;
//        case 1:
//            cout << 'b';
//            break;
//        case 2:
//            cout << 'c';
//            break;
//        case 3:
//            cout << 'd';
//            break;
//        case 4:
//            cout << 'e';
//            break;
//        case 5:
//            cout << 'f';
//            break;
//        case 6:
//            cout << 'g';
//            break;
//        case 7:
//            cout << 'h';
//            break;
//        case 8:
//            cout << 'i';
//            break;
//        case 9:
//            cout << 'j';
//            break;
//
//        default:
//            break;
//        }
//        if (s[i] != 0)//�㴦����������ʱ��Ȩֵ������
//            switch (i)
//            {
//            case 0:
//                   cout << 'Y'; break;
//            case 1:cout << 'Q'; break;
//            case 2:cout << 'B'; break;
//            case 3:cout << 'S'; break;
//            case 4:cout << 'W'; break;
//            case 5:cout << 'Q'; break;
//            case 6:cout << 'B'; break;
//            case 7:cout << 'S'; break;
//
//            default:break;
//            }
//        else if (s[i] == 0)
//            flag0 = 0;//��������0����ô�´�������Ͳ�����
//    }
//    if (count > 0 && count < 4)
//        cout << 'W';//������Ϊ��׺��0���������������W
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a, b;
//    scanf("%d/%d", &a, &b);
//    int flag = 1;
//
//    if (a == b)
//    {
//        cout << "1/1" << endl;
//    }
//    else
//    {
//        int min = a < b ? a : b;
//        int i;
//        for (i = 1; i <= min; i++)
//        {
//            if (a % i == 0 && b % i == 0)
//            {
//                flag = i;
//            }
//        }
//        a /= flag;
//        b /= flag;
//        cout << a << "/" << b << endl;
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
//    string s;
//    cin >> s;
//    for (int i = 0; i < s.size(); i++)
//    {
//        switch (s[i])
//        {
//        case '-':
//            cout << "fu";
//            break;
//        case '0':
//            cout << "ling";
//            break;
//        case '1':
//            cout << "yi";
//            break;
//        case '2':
//            cout << "er";
//            break;
//        case '3':
//            cout << "san";
//            break;
//        case '4':
//            cout << "si";
//            break;
//        case '5':
//            cout << "wu";
//            break;
//        case '6':
//            cout << "liu";
//            break;
//        case '7':
//            cout << "qi";
//            break;
//        case '8':
//            cout << "ba";
//            break;
//        case '9':
//            cout << "jiu";
//            break;
//        }
//        if (i == s.size() - 1)
//        {
//            cout << endl;
//        }
//        else
//        {
//            cout << " ";
//        }
//    }
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//    string s;
//    cin >> s;
//    int flag = 0;
//    int arr[10000];
//    int len = 0;
//
//    for (int i = 0; i < s.size() - 1; i++)
//    {
//        if (s[i] != ' ')
//        {
//            flag++;
//        }
//        if (s[i] == ' ' && s[i + 1] != ' ')
//        {
//            arr[len] = flag;
//            flag = 0;
//            len++;
//        }
//    }
//
//    for (int i = 0; i < len; i++)
//    {
//        if (i != len - 1)
//        {
//            cout << arr[i] << " ";
//        }
//        else
//        {
//            cout << arr[i] << endl;
//        }
//    }
//
//    system("pause");
//    return 0;
//}

#include <iostream>
#include <string>
using namespace std;

int main() {

    char c;
    int flag = 0;
    int arr[1000];
    int len = 0;
    char c1[100] = { 0 };
    int num = 0;
    scanf_s("%c", &c);
    c1[num] = c;
    num++;

    while (c != '.')
    {
        if (c != ' ')
        {
            flag++;
        }
        else
        {
            if (c1[num - 1] != ' ')
            {
                arr[len] = flag;
                flag = 0;
                len++;
            }
        }
        scanf_s("%c", &c);
        c1[num] = c;
        num++;
    }

    arr[len] = flag;
    len++;

    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            cout << arr[i] << endl;
        }
        else
        {
            cout << arr[i] << " ";
        }
    }

    system("pause");
    return 0;
}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//
//
//	system("pause");
//	return 0;
//}