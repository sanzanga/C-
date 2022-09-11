//#include <iostream>
//#include <string>
//using namespace std;
//
///* ����������д�� */
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
//    //����>>�����
//    friend istream& operator >>(istream& cin, BigInt& b);
//
//    //����<<�����
//    friend ostream& operator <<(ostream& cout, BigInt& b);
//
//    //����+�����
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
//    //����һ������ֵ��arr1����
//    for (int i = a.str.size()-1; i >= 0; i--) {
//        arr1[j] = a.str[i] - '0';
//        j++;
//    }
//    j = 0;
//    //���ڶ�������ֵ��arr2����
//    for (int i = b.str.size()-1; i >= 0; i--) {
//        arr2[j] = b.str[i] - '0';
//        j++;
//    }
//    int max = a.str.size() > b.str.size() ? a.str.size() : b.str.size();
//    //�����������Ӧֵ��ӣ���ֵ��arr1������9������ǰ��һλ����һλ��һ
//    j = 0;
//    for (int i = 0; i < max; i++) {
//        arr1[i] += arr2[i];
//        if (arr1[i] > 9) {
//            arr1[i] -= 10;
//            arr1[i + 1]++;
//        }
//    }
//    //������ӵõ������鸳ֵ��һ���ַ���
//    char ret[100];
//    j = 0;
//    for (int i = max; i >= 0; i--) {
//        //����max��λ�ò�֪����û������
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
//    //���ַ�������ת���ַ���
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
    //������߽�������
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