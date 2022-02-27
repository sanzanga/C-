#include <iostream>
#include <string>
#include <cstring>
//#include <bits/stdc++.h>
using namespace std;



//设计点与圆的位置关系的类
//// 点类
//class Pointer {
//
//private:
//    int x;  // x 坐标
//    int y;  // y 坐标
//
//public:
//    void setX(int x) {
//        this->x = x;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    void setY(int y) {
//        this->y = y;
//    }
//
//    int getY() {
//        return y;
//    }
//
//};
//
//// 圆类
//class Circle {
//
//private:
//    Pointer center; // 圆心
//    int radius; // 半径
//
//public:
//    void setCenter(int x, int y) {
//        center.setX(x);
//        center.setY(y);
//    }
//
//    void setRadius(int radius) {
//        this->radius = radius;
//    }
//
//    // write your code here......
//    void isPointerInCircle(Pointer p)
//    {
//        int len = (p.getX() - center.getX()) * (p.getX() - center.getX()) +
//            (p.getY() - center.getY()) * (p.getY() - center.getY());
//        if (len > radius * radius)
//        {
//            cout << "out" << endl;
//        }
//        else if (len == radius * radius)
//        {
//            cout << "on" << endl;
//        }
//        else
//        {
//            cout << "in" << endl;
//        }
//    }
//
//};
//
//int main() {
//
//    // 键盘输入点的坐标
//    int x, y;
//    cin >> x;
//    cin >> y;
//
//    // 创建一个点
//    Pointer p;
//    p.setX(x);
//    p.setY(y);
//
//    // 创建一个圆
//    Circle c;
//    c.setCenter(5, 0);
//    c.setRadius(5);
//
//    // 判断点和圆的关系
//    c.isPointerInCircle(p);
//
//    return 0;
//}

//设计立方体类
//class Cube {
//
//    // write your code here......
//public:
//    //设置长
//    void setLength(int L)
//    {
//        lenght = L;
//    }
//    //获取长
//    int getLength()
//    {
//        return lenght;
//    }
//
//    //设置宽
//    void setWidth(int W)
//    {
//        width = W;
//    }
//    //获取宽
//    int getWidth()
//    {
//        return width;
//    }
//
//    //设置高
//    void setHeight(int H)
//    {
//        height = H;
//    }
//    //获取高
//    int getHeight()
//    {
//        return height;
//    }
//
//    //求面积
//    int getArea()
//    {
//        return 2 * (lenght * width) + 2 * (lenght * height) + 2 * (width * height);
//    }
//
//    //求体积
//    int getVolume()
//    {
//        return lenght * height * width;
//    }
//
//private:
//    //长
//    int lenght;
//    //宽
//    int width;
//    //高
//    int height;
//
//};
//
//int main() {
//
//    int length, width, height;
//    cin >> length;
//    cin >> width;
//    cin >> height;
//
//    Cube c;
//    c.setLength(length);
//    c.setWidth(width);
//    c.setHeight(height);
//
//    cout << c.getLength() << " "
//        << c.getWidth() << " "
//        << c.getHeight() << " "
//        << c.getArea() << " "
//        << c.getVolume() << endl;
//
//    return 0;
//}

////交换两个整型的值 用引用的方法
//// write your code here......
//
//
//int main() {
//
//    int m, n;
//    cin >> m;
//    cin >> n;
//
//    // write your code here......
//    int& ref = m;
//    int& ref1 = n;
//
//    int temp = ref;
//    ref = ref1;
//    ref1 = temp;
//
//    cout << m << " " << n << endl;
//
//    return 0;
//}

//int getSum(int n);
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    cout << getSum(n) << endl;
//
//    return 0;
//}
//
//int getSum(int n) {
//
//    // write your code here......
//    if (n == 1 || n == 2)
//    {
//        return 1;
//    }
//    return getSum(n - 1) + getSum(n - 2);
//
//}

//long long factorial(int n);
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    cout << factorial(n) << endl;
//
//    return 0;
//}
//
//long long factorial(int n) {
//
//    // write your code here......
//    if (n == 1)
//    {
//        return 1;
//    }
//    return factorial(n - 1) * n;
//
//}

//int main() {
//
//    string str;
//    getline(cin, str);
//
//    int whitespace = 0;
//    int digits = 0;
//    int chars = 0;
//    int others = 0;
//
//    // write your code here......
//    for (int i = 0; i < str.length(); i++)
//    {
//        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
//        {
//            chars++;
//        }
//        else if (str[i] >= '0' && str[i] <= '9')
//        {
//            digits++;
//        }
//        else if (str[i] == ' ')
//        {
//            whitespace++;
//        }
//        else
//        {
//            others++;
//        }
//    }
//
//    cout << "chars : " << chars
//        << " whitespace : " << whitespace
//        << " digits : " << digits
//        << " others : " << others << endl;
//
//    return 0;
//}

//int main() {
//
//    char str[100] = { 0 };
//    char substr[100] = { 0 };
//
//    cin.getline(str, sizeof(str));
//    cin.getline(substr, sizeof(substr));
//
//    int count = 0;
//
//    // write your code here......
//    int i = 0;
//    int j = 0;
//    int flag = 0;
//    while (str[i] != '\0' && substr[j] != '\0')
//    {
//        if (str[i] == substr[j])
//        {
//            j++;
//        }
//        else
//        {
//            j = 0;
//        }
//        i++;
//        if (substr[j] == '\0')
//        {
//            j = 0;
//            i--;
//            count++;
//        }
//    }
//
//    cout << count << endl;
//
//    return 0;
//}

//// write your code here......
//void swap(int* m, int* n)
//{
//    int temp = *m;
//    *m = *n;
//    *n = temp;
//}
//
//int main() {
//
//    int m, n;
//    cin >> m;
//    cin >> n;
//
//    // write your code here......
//    swap(&m, &n);
//
//    cout << m << " " << n << endl;
//
//    return 0;
//}

//int mystrcmp(const char* src, const char* dst);
//
//int main() {
//
//    char s1[100] = { 0 };
//    char s2[100] = { 0 };
//
//    cin.getline(s1, sizeof(s1));
//    cin.getline(s2, sizeof(s2));
//
//    int ret = mystrcmp(s1, s2);
//
//    cout << ret << endl;
//
//    return 0;
//}
//
//int mystrcmp(const char* src, const char* dst) {
//
//    // write your code here......
//    while (*src != '\0' && *dst != '\0')
//    {
//        if (*src > *dst)
//        {
//            return 1;
//        }
//        else if (*src < *dst)
//        {
//            return -1;
//        }
//        src++;
//        dst++;
//    }
//    if (*src == '\0' && *dst == '\0')
//    {
//        return 0;
//    }
//    else if (*src == '\0' && *dst != '\0')
//    {
//        return -1;
//    }
//    else
//    {
//        return 1;
//    }
//}

//void func(int* p, int n);
//
//int main() {
//
//    int arr[6] = { 0 };
//    for (int i = 0; i < 6; i++) {
//        cin >> arr[i];
//    }
//
//    func(arr, 6);
//
//    for (int i = 0; i < 6; i++) {
//        if (i == 5) {
//            cout << arr[i] << endl;
//        }
//        else {
//            cout << arr[i] << " ";
//        }
//    }
//
//    return 0;
//}
//
//void func(int* p, int n) {
//
//    // write your code here......
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (p[i] != 0)
//        {
//            int temp = p[i];
//            p[i] = p[count];
//            p[count] = temp;
//            count++;
//        }
//        //p++;
//    }
//
//}

//int main() {
//
//    int n;
//    cin >> n;
//
//    // write your code here......
//    int* p = (int*)malloc(n * sizeof(int));
//    int* p1 = p;
//    int num = n;
//
//    for (int i = 0; i < n; i++)
//    {
//        *p = num;
//        num++;
//        p++;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (i == n - 1)
//        {
//            cout << (*p1) << endl;
//        }
//        else
//        {
//            cout << (*p1) << " ";
//        }
//        p1++;
//    }
//
//    return 0;
//}

//int main() {
//
//    char str[30] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    int m;
//    cin >> m;
//
//    // write your code here......
//    char str1[30] = { 0 };
//    char* p = str + m - 1;
//    char* p1 = str1;
//
//    while (*p != '\0')
//    {
//        *p1 = *p;
//        p++;
//        p1++;
//    }
//
//    cout << str1 << endl;
//
//    return 0;
//}

//int change(const char* p)
//{
//
//    while (*p != '\0')
//    {
//        p++;
//        return 1 + change(p);
//    }
//}
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//    char* p = str;
//    int len = change(p);
//
//    cout << len << endl;
//
//    return 0;
//}

//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//
//    // write your code here......
//    int len = 0;
//    char* p = str;
//    while (*p != '\0')
//    {
//        len++;
//        p++;
//    }
//
//    cout << len << endl;
//
//    return 0;
//}

//void print(int* arr, int sz)
//{
//    for (int i = 0; i < sz; i++)
//    {
//        if (i == sz - 1)
//        {
//            cout << (*arr) << endl;
//        }
//        else
//        {
//            cout << (*arr) << " ";
//        }
//        arr++;
//    }
//}
//
//int main() {
//
//    int arr[6] = { 0 };
//    int* ptr = arr;
//
//    int len = sizeof(arr) / sizeof(int);
//
//    for (int i = 0; i < len; i++) {
//        cin >> arr[i];
//    }
//
//    // write your code here......
//    print(arr, len);
//
//    return 0;
//}

//struct student {
//    // write your code here......
//    //姓名
//    string name;
//    //年龄
//    int age;
//    //身高
//    double height;
//};
//
//int main() {
//
//    // write your code here......
//    struct student stu;
//    cin >> stu.name;
//    cin >> stu.age;
//    cin >> stu.height;
//
//    cout << stu.name << " " << stu.age << " " << stu.height << endl;
//
//    return 0;
//}

//int main() {
//
//    string s1, s2;
//    getline(cin, s1);
//    getline(cin, s2);
//
//    // write your code here......
//    cout << s1 << s2 << endl;
//
//    return 0;
//}

//int main() {
//
//    int arr[4][3] = {
//        // write your code here......
//        {22,66,44},
//        {77,33,88},
//        {25,45,65},
//        {11,66,99}
//    };
//
//    int sum = 0;
//
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 3; j++) {
//            sum += arr[i][j];
//        }
//    }
//
//    cout << sum << endl;
//
//    return 0;
//}

//int main() {
//
//    int arr[6] = { 0 };
//    int len = sizeof(arr) / sizeof(int);
//
//    for (int i = 0; i < len; i++) {
//        cin >> arr[i];
//    }
//
//    // write your code here......
//    for (int i = 0; i < len - 1; i++)
//    {
//        for (int j = 0; j < len - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
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
//    return 0;
//}