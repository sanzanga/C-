#include <iostream>
#include <cmath>
using namespace std;

#define PI acos((double)-1)



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

//int main() {
//
//	double x, y;
//	cin >> x;
//	y = sqrt((1 - cos(x /180 * PI)) / 2.0);
//	cout << "y=" << y << endl;
//
//	system("pause");
//	return 0;
//}

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
//	cuboid(int x, int y, int z) :rectangle(x, y)
//	{
//		this->height = z;
//	}
//	int getvolume()
//	{
//		return height * rectangle::area();
//	}
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	cout << a.getvolume();
//	return 0;
//}

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
//};
//
//class Sub : public Base {
//
//public:
//    //通过父类构造函数，初始化x、y的值
//    Sub(int x, int y) :Base(x, y) 
//    {
//
//    }
//
//    void calculate()
//    {
//        //如果Y为0，输出"Error"
//        if (getY() == 0)
//        {
//            cout << "Error" << endl;
//        }
//        //输出X/Y的结果
//        else 
//        {
//            cout << getX() / getY() << endl;
//        }
//    }
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
//    void calculate()
//    {
//        if (getY() == 0)
//            cout << "Error" << endl;
//        else
//            cout << getX() / getY() << endl;
//    }
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
//    Sub(int x, int y, int z) :Base(x, y) {
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

//int main() {
//
//	double a;
//	cin >> a;
//	int money;
//	if (a <= 5)
//		money = 10;
//	else
//	{
//		a -= 5;
//		int count = a / 2;
//		if (count * 2 != a)
//			count++;
//		money = 10 + count * 5;
//	}
//	cout << money << endl;
//
//	system("pause");
//	return 0;
//}