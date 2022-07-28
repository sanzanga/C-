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
////总结：①cin不能扫描空格、回车②针对行末不能有空格的问题最好使用存入数组，否则要对是否是最后一个打印数字进行详细分析。
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
//        //判断a字符是否为空格或b是否为点
//
//        if (a != ' ')count++;
//        //是空格，输出到数组后count归零
//        if ((a == ' ') || (b == '.'))
//        {
//            if (count > 0) {
//                word_counts[t] = count;
//                t++;
//            }
//            count = 0;
//            if (b == '.')break;
//        }
//        //将b的值传给a
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
//    //获取姓名
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
//    //个人所得税
//    double tax = 0.0;
//    //全月应纳税所得额
//    double t = e.getSalary() - 3500;
//    //按表中所给的范围，分别进行计算
//    if (t <= 0)
//    {
//        //小于0，不需要扣税
//    }
//    //其它情况，按所给公式及表中数据计算
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
//    //设置精度
//    cout << fixed << setprecision(1);
//    cout << e.getName() << "应该缴纳的个人所得税是：" << tax << endl;
//}
//
//int main() {
//
//    // write your code here......
//    //创建三个员工
//    Employee e1("张三", 6500);
//    Employee e2("李四", 8000);
//    Employee e3("王五", 100000);
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
//     //遍历输入字符串中所有字符
//    for (int i = 0; buf[i] != '\0'; i++) {
//        //如果是英文字母，letter计数加1
//        if ((buf[i] >= 'a' && buf[i] <= 'z') || (buf[i] >= 'A' && buf[i] <= 'Z')) {
//            letter++;
//        }
//        //如果是数字，digit计数加1
//        else if (buf[i] >= '0' && buf[i] <= '9') {
//            digit++;
//        }
//        //如果是空格，space计数加1
//        else if (buf[i] == ' ') {
//            space++;
//        }
//        //如果以上都不是，other计数加1
//        else {
//            other++;
//        }
//    }
//
//    cout << "letter:" << letter << " digit:" << digit << " space:" << space << " other:" << other << endl;
//
//    return 0;
//}