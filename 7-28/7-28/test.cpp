//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//    char c;
//    int flag = 0;
//    int arr[1000] = { 0 };
//    int len = 0;
//    char c1[100] = { 0 };
//    int num = 0;
//    scanf_s("%c", &c);
//    c1[num] = c;
//    num++;
//
//    while (c != '.')
//    {
//        if (c != ' ')
//        {
//            flag++;
//        }
//        else
//        {
//            if (c1[num] != ' ')
//            {
//                arr[len] = flag;
//                flag = 0;
//                len++;
//            }
//        }
//        scanf_s("%c", &c);
//        c1[num] = c;
//        num++;
//    }
//
//    arr[len-1]++;
//
//    for (int i = 0; i < len; i++)
//    {
//        if (i == len - 1)
//        {
//            cout << arr[i] << endl;
//        }
//        else
//        {
//            cout << arr[i] << " ";
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
//    char c;
//    int flag = 0;
//    int arr[1000] = { 0 };
//    int len = 0;
//    char c1[100] = { 0 };
//    int num = 0;
//    scanf("%c", &c);
//    c1[num] = c;
//    num++;
//
//    while (c != '.')
//    {
//        if (c != ' ')
//        {
//            flag++;
//        }
//        else
//        {
//            if (c1[num] != ' ')
//            {
//                arr[len] = flag;
//                flag = 0;
//                len++;
//            }
//        }
//        scanf("%c", &c);
//        c1[num] = c;
//        num++;
//    }
//
//    arr[len] = flag;
//
//    for (int i = 0; i <= len; i++)
//    {
//        if (i == len)
//        {
//            cout << arr[i] << endl;
//        }
//        else
//        {
//            cout << arr[i] << " ";
//        }
//    }
//
//    system("pause");
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
////�ܽ᣺��cin����ɨ��ո񡢻س��������ĩ�����пո���������ʹ�ô������飬����Ҫ���Ƿ������һ����ӡ���ֽ�����ϸ������
//int main(void) {
//
//    int count = -1;
//    char a, b;
//    a = NULL;
//    int t = 0;
//    int word_counts[10000];
//    for (;;)
//    {
//
//        b = getchar();
//
//        //�ж�a�ַ��Ƿ�Ϊ�ո��b�Ƿ�Ϊ��
//
//        if (a != ' ')count++;
//        //�ǿո�����������count����
//        if ((a == ' ') || (b == '.'))
//        {
//            if (count > 0) {
//                word_counts[t] = count;
//                t++;
//            }
//            count = 0;
//            if (b == '.')break;
//        }
//        //��b��ֵ����a
//        a = b;
//    }
//
//    for (int i = 0; i < t; i++)
//    {
//        cout << word_counts[i];
//        if (i != t - 1)
//            cout << ' ';
//    }
//
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a, b, count;
//    cin >> a >> b;
//    int arr[105];
//    bool flag = false;
//
//    for (int i = 0; i < a; i++)
//    {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < a - 1; i++)
//    {
//        for (int j = 0; j < a - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//        count++;
//        if (count == b)
//        {
//            break;
//        }
//    }
//
//    for (int i = 0; i < a; i++)
//    {
//        cout << arr[i];
//        if (i != a - 1)
//            cout << " ";
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
//    int a, num;
//    int count = 0;
//    int flag = 0;
//    cin >> a;
//    int arr[1000] = { -1 };
//    for (int i = 0; i < a; i++)
//    {
//        arr[i] = i + 1;
//    }
//
//    num = a;
//
//    if (a == 1)
//    {
//        cout << "1" << endl;
//    }
//    else
//    {
//        while (num != 1)
//        {
//            for (int i = flag; i < a; i++)
//            {
//                if (arr[i] == -1)
//                {
//                    continue;
//                }
//                else
//                {
//                    count++;
//                    if (count % 3 == 0)
//                    {
//                        arr[i] = -1;
//                        flag = i;
//                        num--;
//                        count = 0;
//                    }
//                }
//                if (num == 1)
//                    break;
//            }
//            for (int i = 0; i < a; i++)
//            {
//                if (arr[i] != -1)
//                {
//                    flag = i;
//                    break;
//                }
//            }
//        }
//
//        for (int i = 0; i < a; i++)
//        {
//            if (arr[i] != -1)
//                cout << i+1 << endl;
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
//    int a, num;
//    int count = 0;
//    int flag = 0;
//    cin >> a;
//    int arr[1000] = { -1 };
//    for (int i = 0; i < a; i++)
//    {
//        arr[i] = i + 1;
//    }
//
//    num = a;
//
//    if (a == 1)
//    {
//        cout << "1" << endl;
//    }
//    else
//    {
//        while (num != 1)
//        {
//            for (int i = flag; i < a; i++)
//            {
//                if (arr[i] == -1)
//                {
//                    continue;
//                }
//                else
//                {
//                    count++;
//                    if (count % 3 == 0)
//                    {
//                        arr[i] = -1;
//                        flag = i;
//                        num--;
//                        count = 0;
//                    }
//                }
//                if (num == 1)
//                    break;
//            }
//            for (int i = 0; i < a; i++)
//            {
//                if (arr[i] != -1)
//                {
//                    flag = i;
//                    break;
//                }
//            }
//        }
//
//        for (int i = 0; i < a; i++)
//        {
//            if (arr[i] != -1)
//                cout << i + 1 << endl;
//        }
//    }
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//// write your code here......
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//
//using namespace std;
//
//class Employee {
//
//private:
//    string name;
//    double salary;
//    // write your code here......
//public:
//    Employee(string name, double salary)
//    {
//        this->name = name;
//        this->salary = salary;
//    }
//    //��ȡ����
//    string getName()
//    {
//        return this->name;
//    }
//    double getSalary()
//    {
//        return this->salary;
//    }
//
//};
//
//class MySort
//{
//public:
//    bool operator()(Employee& e1, Employee& e2)
//    {
//        return e1.getSalary() > e2.getSalary();
//    }
//};
//
//void myPrint(Employee& e)
//{
//    //��������˰
//    double tax = 0.0;
//    //ȫ��Ӧ��˰���ö�
//    double t = e.getSalary() - 3500;
//    //�����������ķ�Χ���ֱ���м���
//    if (t <= 0)
//    {
//        //С��0������Ҫ��˰
//    }
//    //�����������������ʽ���������ݼ���
//    else if (t > 0 && t <= 1500)
//    {
//        tax = t * 0.03 - 0;
//    }
//    else if (t > 1500 && t <= 4500)
//    {
//        tax = t * 0.10 - 105;
//    }
//    else if (t > 4500 && t <= 9000)
//    {
//        tax = t * 0.20 - 555;
//    }
//    else if (t > 9000 && t <= 35000)
//    {
//        tax = t * 0.25 - 1005;
//    }
//    else if (t > 35000 && t <= 55000)
//    {
//        tax = t * 0.30 - 2755;
//    }
//    else if (t > 55000 && t <= 80000)
//    {
//        tax = t * 0.35 - 5505;
//    }
//    else {
//        tax = t * 0.45 - 13505;
//    }
//    //���þ���
//    cout << fixed << setprecision(1);
//    cout << e.getName() << "Ӧ�ý��ɵĸ�������˰�ǣ�" << tax << endl;
//}
//
//int main() {
//
//    // write your code here......
//    //��������Ա��
//    Employee e1("����", 6500);
//    Employee e2("����", 8000);
//    Employee e3("����", 100000);
//
//    vector<Employee>v;
//    v.push_back(e1);
//    v.push_back(e2);
//    v.push_back(e3);
//
//    sort(v.begin(), v.end(), MySort());
//
//    for_each(v.begin(), v.end(), myPrint);
//
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//#include <map>
//
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
//
//     //���������ַ����������ַ�
//    for (int i = 0; buf[i] != '\0'; i++) {
//        //�����Ӣ����ĸ��letter������1
//        if ((buf[i] >= 'a' && buf[i] <= 'z') || (buf[i] >= 'A' && buf[i] <= 'Z')) {
//            letter++;
//        }
//        //��������֣�digit������1
//        else if (buf[i] >= '0' && buf[i] <= '9') {
//            digit++;
//        }
//        //����ǿո�space������1
//        else if (buf[i] == ' ') {
//            space++;
//        }
//        //������϶����ǣ�other������1
//        else {
//            other++;
//        }
//    }
//
//    cout << "letter:" << letter << " digit:" << digit << " space:" << space << " other:" << other << endl;
//
//    return 0;
//}