//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // 小时
//    int minutes;    // 分钟
//
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//
//    // write your code here......
//    Time operator+(Time& t)
//    {
//        Time sum;
//        sum.hours = hours + t.hours + (minutes + t.minutes) / 60;
//        sum.minutes = (minutes + t.minutes) % 60;
//        return sum;
//    }
//
//};
//
//int main() {
//
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(2, 20);
//
//    Time t3 = t1 + t2;
//    t3.show();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Base {
//
//private:
//    int x;
//    int y;
//
//public:
//    Base(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    int getY() {
//        return y;
//    }
//
//    void calculate() {
//        cout << getX() * getY() << endl;
//    }
//
//};
//
//class Sub : public Base {
//    // write your code here......
//public:
//    Sub(int x, int y) :Base(x, y)
//    {
//
//    }
//
//    void calculate()
//    {
//        if (Base::getY() == 0)
//        {
//            cout << "Error";
//        }
//        else
//        {
//            cout << Base::getX() / Base::getY() << endl;
//        }
//    }
//
//};
//
//int main() {
//
//    int x, y, z;
//    cin >> x;
//    cin >> y;
//    Sub sub(x, y);
//    sub.calculate();
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // 小时
//    int minutes;    // 分钟
//
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//
//    // write your code here......
//    bool operator<(Time t)
//    {
//        if (this->hours * 60 + this->minutes >= t.hours * 60 + t.minutes)
//        {
//            return false;
//        }
//        else
//        {
//            return true;
//        }
//    }
//
//};
//
//int main() {
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(6, 6);
//
//    if (t1 < t2) cout << "yes"; else cout << "no";
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Base {
//
//private:
//    int x;
//    int y;
//
//public:
//    Base(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//
//    int getX() {
//        return x;
//    }
//
//    int getY() {
//        return y;
//    }
//
//};
//
//class Sub : public Base {
//
//private:
//    int z;
//
//public:
//    Sub(int x, int y, int z) :Base(x, y)
//    {
//        // write your code here
//        this->z = z;
//    }
//
//    int getZ() {
//        return z;
//    }
//
//    int calculate() {
//        return Base::getX() * Base::getY() * this->getZ();
//    }
//
//};
//
//int main() {
//
//    int x, y, z;
//    cin >> x;
//    cin >> y;
//    cin >> z;
//    Sub sub(x, y, z);
//    cout << sub.calculate() << endl;
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	rectangle(int x, int y) {
//		length = x;
//		width = y;
//	}
//	void set(int x, int y) {
//		length = x;
//		width = y;
//	}
//	int area() {
//		return length * width;
//	}
//};
//class cuboid :public rectangle {
//private:
//	int height;
//public:
//	// write your code here...
//	cuboid(int x, int y, int height) :rectangle(x, y)
//	{
//		this->height = height;
//	}
//
//	int getvolume()
//	{
//		return rectangle::area() * this->height;
//	}
//
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	cout << a.getvolume();
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	rectangle(int x, int y) {
//		length = x;
//		width = y;
//	}
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
//};
//class cuboid :public rectangle {
//private:
//	int height;
//public:
//	// write your code here...
//	cuboid(int x, int y, int z) :rectangle(x, y)
//	{
//		this->height = z;
//	}
//	int area()
//	{
//		return 2 * getlength() * getwidth() + 2 * getlength() * height + 2 * getwidth() * height;
//	}
//
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	cout << a.rectangle::area() << '\n' << a.area();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class BaseCalculator {
//public:
//    int m_A;
//    int m_B;
//    // write your code here......
//    virtual int getResult() = 0;
//};
//
//// 加法计算器类
//class AddCalculator : public BaseCalculator {
//    // write your code here......
//    int getResult()
//    {
//        return BaseCalculator::m_A + BaseCalculator::m_B;
//    }
//};
//
//// 减法计算器类
//class SubCalculator : public BaseCalculator {
//    // write your code here......
//    int getResult()
//    {
//        return BaseCalculator::m_A - BaseCalculator::m_B;
//    }
//};
//
//
//int main() {
//
//    BaseCalculator* cal = new AddCalculator;
//    cal->m_A = 10;
//    cal->m_B = 20;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    cal = new SubCalculator;
//    cal->m_A = 20;
//    cal->m_B = 10;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	rectangle(int x, int y) {
//		length = x;
//		width = y;
//	}
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
//	// write your code here...
//	virtual int getval()
//	{
//		return width * length;
//	}
//};
//class cuboid :public rectangle {
//private:
//	int height;
//public:
//	cuboid(int x, int y, int z) :rectangle(x, y) {
//		height = z;
//	}
//	// write your code here...
//	int getval()
//	{
//		return getwidth() * getlength() * height;
//	}
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	rectangle b(x, y);
//
//	rectangle* p = &b;
//	cout << p->getval() << '\n';
//
//	p = &a;
//	cout << p->getval();
//	return 0;
//}

//#include <iostream>
//// write your code here......
//#include <vector>
//#include <algorithm>
//
//using namespace std;
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
//    // write your code here......
//    int a;
//    vector<int>v;
//    for (int i = 0; i < 5; i++)
//    {
//        cin >> a;
//        v.push_back(a);
//    }
//
//    for_each(v.begin(), v.end(), MyPrint());
//    cout << endl;
//
//    for (vector<int>::iterator it = v.end() - 1; it != v.begin() - 1; it--)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//    set<int>s;
//    // write your code here......
//    int a;
//    for (int i = 0; i < 5; i++)
//    {
//        cin >> a;
//        s.insert(a);
//    }
//
//    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//
//    return 0;
//}