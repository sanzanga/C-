//#include <iostream>
//#include <deque>
//using namespace std;
//
//class Guest {
//public:
//    string name;
//    bool vip;
//
//    Guest(string name, bool vip) {
//        this->name = name;
//        this->vip = vip;
//    }
//};
//
//int main() {
//
//    Guest guest1("张三", false);
//    Guest guest2("李四", false);
//    Guest vipGuest("王五", true);
//    deque<Guest> deque;
//
//    // write your code here......
//    deque.push_back(guest1);
//    deque.push_back(guest2);
//    deque.push_front(vipGuest);
//
//
//    for (Guest g : deque) {
//        cout << g.name << " ";
//    }
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//    int n, k;
//    vector<int>a;
//    // write your code here......
//    cin >> n >> k;
//    int num;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> num;
//        a.push_back(num);
//    }
//
//    int count = 0;
//    for (vector<int>::iterator it = a.end() - 1; count < k; count++, it--)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

//#include <iostream>
//// write your code here......
//#include <set>
//
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//    set<char>s;
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        s.insert(str[i]);
//    }
//
//    for (set<char>::iterator it = s.begin(); it != s.end(); it++)
//    {
//        cout << *it;
//    }
//    cout << endl;
//
//    return 0;
//}

//#include <iostream>
//// write your code here......
//#include <map>
//
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//    map<char, int>m;
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
//        {
//            m[str[i]]++;
//        }
//    }
//
//    for (map<char, int>::iterator it = m.begin(); it != m.end(); it++)
//    {
//        cout << it->first << ":" << it->second << endl;
//    }
//
//    return 0;
//}

//#include<bits/stdc++.h>
//#include <set>
//#include <vector>
//
//using namespace std;
//int main() {
//    set<int>s;
//    //write your code here......
//    int n, m;
//    cin >> n >> m;
//
//    int num;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> num;
//        s.insert(num);
//    }
//
//    int nums;
//    vector<int>v;
//    for (int i = 0; i < m; i++)
//    {
//        cin >> nums;
//        v.push_back(nums);
//    }
//
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        bool flag = true;
//        int flag1 = 0;
//        for (set<int>::iterator sit = s.begin(); sit != s.end(); sit++)
//        {
//            if (*sit > *it)
//            {
//                flag = false;
//                flag1 = *sit;
//                break;
//            }
//        }
//        if (flag)
//        {
//            cout << "-1" << endl;
//        }
//        else
//        {
//            cout << flag1 << endl;
//        }
//    }
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//    set<int>s;
//    //write your code here......
//    int n, m, x, a;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a;
//        s.insert(a);//有序存储不重复
//    }
//    while (m--)
//    {
//        cin >> x;
//        auto it = s.upper_bound(x);//返回第一个大于x的元素对应的迭代器指针
//        if (it == s.end()) { cout << -1 << endl; }
//        else {
//            cout << *it << endl;
//        }
//    }
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//#include <map>
//int main() {
//    //write your code here......
//    int n, m, x;
//    cin >> n >> m;
//
//    map<int, string>ma;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> x;
//        ma.insert(pair<int, string>(x, "yes"));
//    }
//    for (int i = 0; i < m; i++)
//    {
//        cin >> x;
//        map<int, string>::iterator it = ma.find(x);
//        if (it == ma.end())
//        {
//            cout << "no" << endl;
//        }
//        else
//        {
//            cout << "yes" << endl;
//        }
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//// write your code here......
//
//using namespace std;
//
//class MySort
//{
//public:
//    bool operator()(int val1, int val2)
//    {
//        return val1 > val2;
//    }
//};
//
//class MyPrint
//{
//public:
//    void operator()(int val)
//    {
//        cout << val << " ";
//    }
//};
//
//int main() {
//
//    int num;
//    vector<int> v;
//    for (int i = 0; i < 5; i++) {
//        cin >> num;
//        v.push_back(num);
//    }
//
//    // write your code here......
//    //从大到小排序
//    sort(v.begin(), v.end(), MySort());
//
//    for_each(v.begin(), v.end(), MyPrint());
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n, k;
//    vector<int>a;
//    // write your code here......
//    cin >> n >> k;
//    int num;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> num;
//        a.push_back(num);
//    }
//
//    sort(a.begin(), a.end());
//
//    cout << a[k - 1] << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
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
//    for (int i = 0; buf[i] != '\0'; i++) 
//    { //遍历字符串到'\0'为止
//        char c = buf[i];
//        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') //大小写字母
//            letter++;
//        else if (c >= '0' && c <= '9') //数字
//            digit++;
//        else if (c == ' ')  //空格
//            space++;
//        else //其他字符
//            other++;
//    }
//    cout << "letter:" << letter << " digit:" << digit << " space:" << space << " other:" << other << endl;
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
//using namespace std;
//#include <string>
//#include <cstdlib>
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//    string op;
//    string num1;
//    string num2;
//    int space;
//
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] = ' ')
//        {
//            space++;
//            continue;
//        }
//        else if (space == 0)
//        {
//            op = str[i];
//        }
//        else if (space == 1)
//        {
//            num1 = str[i];
//        }
//        else if (space == 2)
//        {
//            num2 = str[i];
//        }
//    }
//
    /*int a = stoi(num1);
    int b = stoi(num2);

    if (op == "add")
    {
        cout << a + b << endl;
    }
    else if (op == "sub")
    {
        cout << a - b << endl;
    }
    else if (op == "mul")
    {
        cout << a * b << endl;
    }
    else if (op == "div")
    {
        if (b == 0)
        {
            cout << "Error" << endl;
        }
        else
        {
            cout << (double)a / b << endl;
        }
    }*/
//
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//#include <string>
//#include <cstdlib>
//#include <string.h>
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//    string op = "";
//    string num1 = "";
//    string num2 = "";
//    int space = 0;
//
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] == ' ')
//        {
//            space++;
//            continue;
//        }
//        else if (space == 0)
//        {
//            op += str[i];
//        }
//        else if (space == 1)
//        {
//            num1 += str[i];
//        }
//        else if (space == 2)
//        {
//            num2 += str[i];
//        }
//    }
//
//    int a = stoi(num1);
//    int b = stoi(num2);
//
//    if (strcasecmp(op.c_str(), "add") == 0)
//    {
//        cout << a + b << endl;
//    }
//    else if (strcasecmp(op.c_str(), "sub") == 0)
//    {
//        cout << a - b << endl;
//    }
//    else if (strcasecmp(op.c_str(), "mul") == 0)
//    {
//        cout << a * b << endl;
//    }
//    else if (strcasecmp(op.c_str(), "div") == 0)
//    {
//        if (b == 0)
//        {
//            cout << "Error" << endl;
//        }
//        else
//        {
//            cout << (double)a / b << endl;
//        }
//    }
//    return 0;
//}