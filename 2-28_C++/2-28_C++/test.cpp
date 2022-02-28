//#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class rectangle
{
private:
	int length, width;
public:
	void set(int x, int y)
	{
		length = x;
		width = y;
	}
	int getlength()
	{
		return length;
	}
	int getwidth() 
	{
		return width;
	}
	int area()
	{
		return length * width;
	}
	// write your code here......
	string cancover(rectangle x)
	{
		if ((length >= x.length && width >= x.width) || (length >= x.width && width >= x.length))
		{
			//cout << "yes" << endl;
			return "yes";
		}
		else
		{
			//cout << "no" << endl;
			return "no";
		}
	}
};

int main() {
	int l1, w1, l2, w2;
	cin >> l1 >> w1 >> l2 >> w2;
	rectangle a, b;
	a.set(l1, w1);
	b.set(l2, w2);
	cout << a.cancover(b);
	return 0;
}

//class rectangle {
//private:
//	int length, width;
//public:
//	void set(int x, int y) {
//		length = x;
//		width = y;
//	}
//	int getlength() {
//		return length;
//	}
//	int getwidth() {
//		return width;
//	}
//	int area() {
//		return length * width;
//	}
//	void compare(rectangle a) {
//		// write your code here......
//		if (length * width > a.area())
//		{
//			cout << "1" << endl;
//		}
//		else
//		{
//			cout << "0" << endl;
//		}
//	}
//};
//int main() {
//	int l1, w1, l2, w2;
//	cin >> l1 >> w1 >> l2 >> w2;
//	rectangle a, b;
//	a.set(l1, w1);
//	b.set(l2, w2);
//	a.compare(b);
//	return 0;
//}

//int main() {
//    string s;
//    cin >> s;
//    // write your code here......
//    int len = s.length();
//
//    int a = 0;
//    int b = 0;
//    int c = 0;
//
//    for (int i = 0; i < len; i++)
//    {
//        if (s[i] == 'a')
//        {
//            a++;
//        }
//        else if (s[i] == 'b')
//        {
//            b++;
//        }
//        else
//        {
//            c++;
//        }
//    }
//
//    cout << a << " " << b << " " << c << endl;
//
//    return 0;
//}

//// write your code here......
//
//void reverse(string& s)
//{
//    int len = s.length();
//    for (int i = 0; i < len / 2; i++)
//    {
//        char temp = s[i];
//        s[i] = s[len - 1 - i];
//        s[len - 1 - i] = temp;
//    }
//}
//
//int main() {
//    string s;
//    getline(cin, s);
//    // write your code here......
//    reverse(s);
//    cout << s;
//    return 0;
//}