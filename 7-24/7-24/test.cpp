//#include <iostream>
//using namespace std;
//
//class Cube {
//
//    // write your code here......
//public:
//    //构造方法
//    Cube()
//    {
//
//    }
//
//    //设置长度
//    void setLength(int length)
//    {
//        this->length = length;
//    }
//    //获取长度
//    int getLength()
//    {
//        return this->length;
//    }
//
//    //设置宽度
//    void setWidth(int width)
//    {
//        this->width = width;
//    }
//    //获取宽度
//    int getWidth()
//    {
//        return this->width;
//    }
//
//    //设置高度
//    void setHeight(int heigth)
//    {
//        this->height;
//    }
//    //获取高度
//    int getHeight()
//    {
//        return this->height;
//    }
//
//    //获取面积
//    int getArea()
//    {
//        return 2 * (this->height * this->length + this->height * this->width + this->length * this->width);
//    }
//
//    //获取体积
//    int getVolume()
//    {
//        return this->height * this->length * this->width;
//    }
//
//private:
//
//    int length;
//    int width;
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



//#include <iostream>
//using namespace std;
//
//class Cube {
//
//    // write your code here......
//public:
//    //构造方法
//    Cube()
//    {
//
//    }
//
//    //设置长度
//    void setLength(int length)
//    {
//        this->length = length;
//    }
//    //获取长度
//    int getLength()
//    {
//        return this->length;
//    }
//
//    //设置宽度
//    void setWidth(int width)
//    {
//        this->width = width;
//    }
//    //获取宽度
//    int getWidth()
//    {
//        return this->width;
//    }
//
//    //设置高度
//    void setHeight(int heigth)
//    {
//        this->height = heigth;
//    }
//    //获取高度
//    int getHeight()
//    {
//        return this->height;
//    }
//
//    //获取面积
//    int getArea()
//    {
//        return 2 * (this->height * this->length + this->height * this->width + this->length * this->width);
//    }
//
//    //获取体积
//    int getVolume()
//    {
//        return this->height * this->length * this->width;
//    }
//
//private:
//
//    int length;
//    int width;
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

//#include <iostream>
//using namespace std;
//
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
//        int distence = (center.getX() - p.getX()) * (center.getX() - p.getX()) +
//            (center.getY() - p.getY()) * (center.getY() - p.getY());
//        if (distence > this->radius * this->radius)
//        {
//            cout << "out" << endl;
//        }
//        else if (distence == this->radius * this->radius)
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

//#include<bits/stdc++.h>
//using namespace std;
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

//#include<bits/stdc++.h>
//using namespace std;
//
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
//	// write your code here......
//	string cancover(rectangle x)
//	{
//		if ((length >= x.length && width >= x.width) || (length >= x.width && width >= x.length))
//		{
//			return "yes";
//		}
//		else
//		{
//			return "no";
//		}
//	}
//};
//int main() {
//	int l1, w1, l2, w2;
//	cin >> l1 >> w1 >> l2 >> w2;
//	rectangle a, b;
//	a.set(l1, w1);
//	b.set(l2, w2);
//	cout << a.cancover(b);
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class Array {
//private:
//	int n;//数组大小 
//	int* a;//数组 
//public:
//	// write your code here......
//	Array()
//	{
//		cin >> n;
//		a = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//	}
//
//	~Array() {
//		delete[]a;
//	}
//	void show() {
//		for (int i = 0; i < n; i++) cout << a[i] << ' ';
//	}
//};
//int main() {
//	Array a;
//	a.show();
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class Array {
//private:
//	int n;//数组大小 
//	int* a;//数组 
//public:
//	Array() {
//		cin >> n;
//		a = new int[n];
//		for (int i = 0; i < n; i++) cin >> a[i];
//	}
//	~Array() {
//		delete[]a;
//	}
//	int getlen() {
//		return n;
//	}
//	int get(int i) {
//		return a[i];
//	}
//	// write your code here......
//	Array(const Array& arr)
//	{
//		delete[] a;
//		a = new int[arr.n];
//		n = arr.n;
//		for (int i = 0; i < n; i++)
//		{
//			this->a[i] = arr.a[i];
//		}
//	}
//
//	void show() {
//		for (int i = 0; i < n; i++) cout << a[i] << ' ';
//	}
//};
//int main() {
//	Array a;
//	Array b = a;
//	b.show();
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class phone {
//	// write your code here......
//	friend class myphone;
//
//private:
//	int price;
//public:
//	phone(int x) {
//		price = x;
//	}
//};
//class myphone {
//private:
//	phone a;
//public:
//	myphone(int x) :a(x) {
//	}
//	int getprice() {
//		return a.price;
//	}
//};
//int main() {
//	int p;
//	cin >> p;
//	myphone a(p);
//	cout << a.getprice();
//	return 0;
//}