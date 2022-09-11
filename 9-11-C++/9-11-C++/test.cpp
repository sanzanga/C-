//#include <iostream>
//#include <string>
//using namespace std;
//
///* 请在这里填写答案 */
//class BigInt
//{
//private:
//    string str;
//
//public:
//    BigInt() {}
//    BigInt(string s) {
//        str = s;
//    }
//
//    //重载>>运算符
//    friend istream& operator >>(istream& cin, BigInt& b);
//
//    //重载<<运算符
//    friend ostream& operator <<(ostream& cout, BigInt& b);
//
//    //重载+运算符
//    friend BigInt operator +(BigInt& a, BigInt& b);
//};
//
//istream& operator>>(istream& cin, BigInt& b) {
//    cin >> b.str;
//    return cin;
//}
//
//ostream& operator<<(ostream& cout, BigInt& b) {
//    cout << b.str;
//    return cout;
//}
//
//BigInt operator+(BigInt& a, BigInt& b) {
//    int arr1[100] = { 0 }, arr2[100] = { 0 };
//    int j = 0;
//    //将第一个数赋值给arr1数组
//    for (int i = a.str.size()-1; i >= 0; i--) {
//        arr1[j] = a.str[i] - '0';
//        j++;
//    }
//    j = 0;
//    //将第二个数赋值给arr2数组
//    for (int i = b.str.size()-1; i >= 0; i--) {
//        arr2[j] = b.str[i] - '0';
//        j++;
//    }
//    int max = a.str.size() > b.str.size() ? a.str.size() : b.str.size();
//    //将两个数组对应值相加，赋值给arr1，大于9，就向前进一位，后一位加一
//    j = 0;
//    for (int i = 0; i < max; i++) {
//        arr1[i] += arr2[i];
//        if (arr1[i] > 9) {
//            arr1[i] -= 10;
//            arr1[i + 1]++;
//        }
//    }
//    //将所相加得到的数组赋值给一个字符串
//    char ret[100];
//    j = 0;
//    for (int i = max; i >= 0; i--) {
//        //数组max的位置不知道有没有数字
//        if (i == max && arr1[max] != 0) {
//            ret[j] = arr1[i] + '0';
//            ret[j + 1] = '\0';
//            j++;
//        }
//        if (i != max) {
//            ret[j] = arr1[i] + '0';
//            ret[j + 1] = '\0';
//            j++;
//        }
//    }
//    //将字符数组组转化字符串
//    string st(ret);
//    return BigInt(st);
//}
//
//int main() {
//    BigInt a, b, c;
//    cin >> a >> b;
//    c = a + b;
//    cout << a << "+" << b << "=" << c << endl;
//    return 0;
//}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Student {
private:
    string name;
    int height;
    int weight;
    int roomNum;

public:
    Student(){}
    Student(int roomNum, string name, int height, int weight) {
        this->name = name;
        this->height = height;
        this->weight = weight;
        this->roomNum = roomNum;
    }

    string getName() {
        return this->name;
    }
    int getHeight() {
        return this->height;
    }
    int getWeight() {
        return this->weight;
    }
    int getRoomNum() {
        return this->roomNum;
    }
};

class MyCompare1 {
public:
    bool operator()(Student* s1, Student* s2) {
        return s1->getHeight() > s2->getHeight();
    }
};

class MyCompare2{
public:
    bool operator()(int val1,int val2) {
        return val1 < val2;
    }
};

int main() {
    int n;
    cin >> n;
    string name;
    int height;
    int weight;
    int roomNum;
    Student* stus = new Student;
    vector<Student*> vStu;
    vector<int> roomNums;
    int num = 0;
    for (int i = 0; i < n; i++) {
        cin >> roomNum >> name >> height >> weight;
        stus = new Student(roomNum, name, height, weight);
        vStu.push_back(stus);
    }
    //根据身高进行排序
    sort(vStu.begin(), vStu.end(), MyCompare1());

    bool flag = true;
    for (int i = 0; i < n; i++) {
        flag = true;
        for (int j = 0; j < num; j++) {
            if (vStu[i]->getRoomNum() == roomNums[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            roomNums.push_back(vStu[i]->getRoomNum());
            num++;
        }
    }

    sort(roomNums.begin(), roomNums.end(), MyCompare2());

    for (int i = 0; i < num; i++) {
        for (vector<Student*>::iterator it = vStu.begin(); it != vStu.end(); it++) {
            if ((*it)->getRoomNum() == roomNums[i]) {
                printf("%06d", roomNums[i]);
                cout << " " << (*it)->getName() << " " << (*it)->getHeight() << " " << (*it)->getWeight() << endl;
                break;
            }
        }
    }


    return 0;
}