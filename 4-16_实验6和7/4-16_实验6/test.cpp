#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int arr[3];
	int flag[3];
	//��ֵ
	for (int i = 0; i < 3; i++){
		int a, b, c;
		cout << "�������" << i + 1 << "��ѧ�����Ƶĳɼ���";
		cin >> a >> b >> c;
		arr[i] = a + b + c;
		flag[i] = arr[i];
	}
	//���� ����
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2 - i; j++){
			if (flag[j] < flag[j + 1]) {
				int temp = flag[j];
				flag[j] = flag[j + 1];
				flag[j + 1] = temp;
			}
		}
	}
	//�Ƚ�
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i] == flag[j]) {
				cout << "��" << i + 1 << "��ѧ���ܳɼ�Ϊ��" << arr[i] << " ��" << j + 1 << "��" << endl;
				break;
			}
		}
	}


	/*if (arr[0] == arr[1]){
		if (arr[0] == arr[2]) {
			flag[0] = 1; flag[1] = 1; flag[2] = 1;
		}
		else if (arr[0] > arr[2]) {
			flag[0] = 1; flag[1] = 1; flag[2] = 2;
		}
		else {
			flag[0] = 2; flag[1] = 2; flag[2] = 1;
		}
	}
	else if(arr[0] > arr[1])*/

	system("pause");
	return 0;
}

//int main() {
//
//	int a;
//	cin >> a;
//	while (a)
//	{
//		bool flag = true;
//		for (int i = 2; i <= sqrt(a); i++)
//		{
//			if (a % i == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << a << endl;
//			break;
//		}
//		a++;
//	}
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#define PI 3.14
////����Shape
//class Shape
//{
//public:
//	Shape()
//	{
//		cout << "Shape���캯��" << endl;
//	}
//	virtual double getS(double length, double width);
//	virtual double getS(double r);
//	~Shape()
//	{
//		cout << "Shape����������" << endl;
//	}
//};
//
//class Rectangle :public Shape
//{
//public:
//	Rectangle()
//	{
//		cout << "Rectangle�Ĺ��캯��" << endl;
//	}
//	~Rectangle()
//	{
//		cout << "rectangle����������" << endl;
//	}
//};
//
//class Circle :public Shape
//{
//public:
//	Circle()
//	{
//		cout << "Circle�Ĺ��캯��" << endl;
//	}
//	~Circle()
//	{
//		cout << "Circle����������" << endl;
//	}
//};
//
//class Square :public Rectangle
//{
//public:
//	Square()
//	{
//		cout << "Square�Ĺ��캯��" << endl;
//	}
//
//	~Square()
//	{
//		cout << "Square����������" << endl;
//	}
//};
//
//double Shape::getS(double length, double width)
//{
//	return length * width;
//}
//double Shape::getS(double r)
//{
//	return PI * r * r;
//}
//
//int main() {
//
//	cout << "���Σ�" << endl;
//	Rectangle re;
//	cout << "�߳�Ϊ2��1�ľ������Ϊ��" << re.getS(1, 2) << endl;
//	cout << "--------------------------" << endl;
//	cout << "Բ�Σ�" << endl;
//	Circle c;
//	cout << "�뾶Ϊ2��Բ�����Ϊ��" << c.getS(2) << endl;
//	cout << "--------------------------" << endl;
//	cout << "�����Σ�" << endl;
//	Square sq;
//	cout << "�߳�Ϊ2�����������Ϊ��" << sq.getS(2, 2) << endl;
//	system("pause");
//	cout << "--------------------------" << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Mammal
//{
//public:
//	virtual void move() = 0;
//	virtual void eat() = 0;
//	virtual void speak() = 0;
//	virtual void dispaly()
//	{
//		cout << "չʾ��Ϣ" << endl;
//	}
//};
//
//class Dog :public Mammal
//{
//public:
//	Dog(string name,int age,double weight)
//	{
//		this->name = name;
//		this->age = age;
//		this->weight = weight;
//	}
//
//	void move()
//	{
//		cout << "С�������ƶ�" << endl;
//	}
//	void eat()
//	{
//		cout << "С�����ڳԶ���" << endl;
//	}
//	void speak()
//	{
//		cout << "С�����ڽ�" << endl;
//	}
//	void dispaly()
//	{
//		cout << "С����" << endl;
//		cout << "������" << this->name << "  ����:" << this->age << "  ������" << this->weight << endl;
//	}
//
//private:
//	string name;//����
//	int age;//����
//	double weight;//����
//};
//
//class Cat :public Mammal
//{
//public:
//	Cat(string name, int age, double weight)
//	{
//		this->name = name;
//		this->age = age;
//		this->weight = weight;
//	}
//
//	void move()
//	{
//		cout << "Сè�����ƶ�" << endl;
//	}
//	void eat()
//	{
//		cout << "Сè���ڳԶ���" << endl;
//	}
//	void speak()
//	{
//		cout << "Сè���ڽ�" << endl;
//	}
//	void dispaly()
//	{
//		cout << "Сè��" << endl;
//		cout << "������" << this->name << "  ����:" << this->age << "  ������" << this->weight << endl;
//	}
//
//private:
//	string name;//����
//	int age;//����
//	double weight;//����
//};
//
//class Horse :public Mammal
//{
//public:
//	Horse(string name, int age, double weight)
//	{
//		this->name = name;
//		this->age = age;
//		this->weight = weight;
//	}
//
//	void move()
//	{
//		cout << "�������ƶ�" << endl;
//	}
//	void eat()
//	{
//		cout << "�����ڳԶ���" << endl;
//	}
//	void speak()
//	{
//		cout << "�����ڽ�" << endl;
//	}
//	void dispaly()
//	{
//		cout << "��" << endl;
//		cout << "������" << this->name << "  ����:" << this->age << "  ������" << this->weight << endl;
//	}
//
//private:
//	string name;//����
//	int age;//����
//	double weight;//����
//};
//
//
//class Pig :public Mammal
//{
//public:
//	Pig(string name, int age, double weight)
//	{
//		this->name = name;
//		this->age = age;
//		this->weight = weight;
//	}
//
//	void move()
//	{
//		cout << "С�������ƶ�" << endl;
//	}
//	void eat()
//	{
//		cout << "С�����ڳԶ���" << endl;
//	}
//	void speak()
//	{
//		cout << "С�����ڽ�" << endl;
//	}
//	void dispaly()
//	{
//		cout << "С��" << endl;
//		cout << "������" << this->name << "  ����:" << this->age << "  ������" << this->weight << endl;
//	}
//
//private:
//	string name;//����
//	int age;//����
//	double weight;//����
//};
//
//int main() {
//
//	Mammal* ma1 = new Dog("С��", 2, 20);
//	Mammal* ma2 = new Cat("Сè", 3, 29);
//	Mammal* ma3 = new Horse("С��", 5, 30);
//	Mammal* ma4 = new Pig("С��", 3, 30);
//	Mammal* maArr[4] = { ma1,ma2,ma3,ma4 };
//
//	for (int i = 0; i < 4; i++)
//	{
//		maArr[i]->dispaly();
//		maArr[i]->eat();
//		maArr[i]->move();
//		maArr[i]->speak();
//	}
//
//	delete ma1, ma2, ma3, ma4;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#define pi 3.14
//class shape
//{
//public:
//	//��ȡ���
//	virtual double gets() = 0;
//};
//
//class rectangle:public shape
//{
//public:
//	rectangle(){}
//	rectangle(double length, double width)
//	{
//		this->length = length;
//		this->width = width;
//	}
//	virtual double gets()
//	{
//		return this->length * this->width;
//	}
//
//private:
//	double length;//��
//	double width;//��
//};
//
//class circle:public shape
//{
//public:
//	circle(double r)
//	{
//		this->r = r;
//	}
//	double gets()
//	{
//		return pi * this->r * this->r;
//	}
//
//private:
//	double r;//�뾶
//};
//
//class square:public rectangle
//{
//public:
//	square(double a)
//	{
//		this->length = a;
//	}
//	double gets()
//	{
//		return this->length * this->length;
//	}
//private:
//	double length;//��
//};
//
//int main() {
//
//	//����
//	rectangle rec1(3, 4);
//	cout << "�߳�Ϊ3��4�ľ������Ϊ��";
//	cout << rec1.gets() << endl;
//
//	//Բ
//	circle circle(2);
//	cout << "�뾶Ϊ2��Բ���Ϊ��";
//	cout << circle.gets() << endl;
//
//	//������
//	square sq(3);
//	cout << "�߳�Ϊ3�������ε����Ϊ��";
//	cout << sq.gets() << endl;
//
//	system("pause");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#define PI 3.14
//
////�麯��û�к���ʵ�ֲ��֣��������ݾ�����������ʵ�֣�
////����һ��������ĺ�������Ҫ��ʵ�ֲ��֣���ʹ�Ǹ��պ���
////���ҳ���һ�õ����캯���ļ̳�
////���������Shape�ಢ���ý��й��캯���ĸ�ֵ����������ĸ�ֵ����������������
//class Shape
//{
//	friend class Rectangle;
//	friend class Circle;
//	friend class Square;
//public:
//	//��ȡ���
//	virtual double getS();
//
//private:
//	double length;//��
//	double width;//��
//	double r;//�뾶
//};
//
//class Rectangle:public Shape
//{
//public:
//	Rectangle(){}
//	Rectangle(double length, double width)
//	{
//		this->length = length;
//		this->width = width;
//	}
//	double getS()
//	{
//		return this->length * this->width;
//	}
//};
//
//class Circle:public Shape
//{
//public:
//	Circle(double r)
//	{
//		this->r = r;
//	}
//	double getS()
//	{
//		return PI * this->r * this->r;
//	}
//};
//
//class Square:public Rectangle
//{
//public:
//	Square(double a)
//	{
//		this->length = a;
//	}
//	double getS()
//	{
//		return this->length * this->length;
//	}
//};
//
//int main() {
//
//	//����
//	Rectangle rec1(3, 4);
//	cout << "�߳�Ϊ3��4�ľ������Ϊ��";
//	cout << rec1.getS() << endl;
//
//	//Բ
//	Circle circle(2);
//	cout << "�뾶Ϊ2��Բ���Ϊ��";
//	cout << circle.getS() << endl;
//
//	//������
//	Square sq(3);
//	cout << "�߳�Ϊ3�������ε����Ϊ��";
//	cout << sq.getS() << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#define PI 3.14
////����Shape
//class Shape
//{
//public:
//	Shape()
//	{
//		cout << "Shape���캯��" << endl;
//	}
//	double getS(double length, double width)
//	{
//		return length * width;
//	}
//	double getS(double r)
//	{
//		return PI * r * r;
//	}
//	~Shape()
//	{
//		cout << "Shape����������" << endl;
//	}
//};
//
//class Rectangle:public Shape
//{
//public:
//	Rectangle()
//	{
//		cout << "Rectangle�Ĺ��캯��" << endl;
//	}
//	~Rectangle()
//	{
//		cout << "rectangle����������" << endl;
//	}
//};
//
//class Circle:public Shape
//{
//public:
//	Circle()
//	{
//		cout << "Circle�Ĺ��캯��" << endl;
//	}
//	~Circle()
//	{
//		cout << "Circle����������" << endl;
//	}
//};
//
//class Square:public Rectangle
//{
//public:
//	Square()
//	{
//		cout << "Square�Ĺ��캯��" << endl;
//	}
//
//	~Square()
//	{
//		cout << "Square����������" << endl;
//	}
//};
//
//int main() {
//
//	cout << "���Σ�" << endl;
//	Rectangle re;
//	cout << "�߳�Ϊ2��1�ľ������Ϊ��" << re.getS(1, 2) << endl;
//	cout << "--------------------------" << endl;
//	cout << "Բ�Σ�" << endl;
//	Circle c;
//	cout << "�뾶Ϊ2��Բ�����Ϊ��" << c.getS(2) << endl;
//	cout << "--------------------------" << endl;
//	cout << "�����Σ�" << endl;
//	Square sq;
//	cout << "�߳�Ϊ2�����������Ϊ��" << sq.getS(2,2) << endl;
//	system("pause");
//	cout << "--------------------------" << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#define PI 3.14
////����Shape
//class Shape
//{
//public:
//	Shape(){}
//	Shape(double length, double width)
//	{
//		this->length = length;
//		this->width = width;
//	}
//	Shape(double r)
//	{
//		this->r = r;
//	}
//	//�ֱ��ȡ����Ͱ뾶
//	double getLength() { return length; }
//	double getWidth() { return width; }
//	double getR() { return r; }
//	//��������ĺ���
//	double getS(){}
//
//private:
//	double r;//�뾶
//	double length;//��
//	double width;//��
//};
//
////������
//class Rectangle:public Shape
//{
//public:
//	Rectangle(double length, double width) :Shape(length, width)
//	{
//		
//	}
//	Rectangle(double width)
//	{
//		this->a = width;
//	}
//	//��ȡ�߳�
//	double getA() { return a; }
//	
//	//��������ĺ���
//	double getS()
//	{
//		return Shape::getLength() * Shape::getWidth();
//	}
//private:
//	double a;//�����
//};
//
////Բ��
//class Circle:public Shape
//{
//public:
//	Circle(double r) :Shape(r)
//	{
//
//	}
//	//��������ĺ���
//	double getS() 
//	{
//		return PI * Shape::getR() * Shape::getR();
//	}
//};
//
////��������
//class Square:public Rectangle
//{
//public:
//	Square(double length) :Rectangle(length)
//	{
//
//	}
//	//��������ĺ���
//	double getS()
//	{
//		return Rectangle::getA() * Rectangle::getA();
//	}
//};
//
//int main() {
//
//	//����
//	Rectangle rec1(3, 4);
//	cout << "�߳�Ϊ3��4�ľ������Ϊ��";
//	cout << rec1.getS() << endl;
//
//	//Բ
//	Circle circle(2);
//	cout << "�뾶Ϊ2��Բ���Ϊ��";
//	cout << circle.getS() << endl;
//
//	//������
//	Square sq(3);
//	cout << "�߳�Ϊ3�������ε����Ϊ��";
//	cout << sq.getS() << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream> 
//using namespace std;
///***************����Employee��********************/
//class Employee
//{
//public:
//	Employee(char* theName, float thePayRate);
//	char* getName() const;
//	float getPayRate() const;
//	float pay(float hoursWorked) const;
//protected:
//	char* name; //��Ա����
//	float payRate; //нˮ�ȼ�
//};
//Employee::Employee(char* theName, float thePayRate)
//{
//	name = theName;
//	payRate = thePayRate;
//}
//char* Employee::getName() const
//{
//	return name;
//}
//float Employee::getPayRate() const
//{
//	return payRate;
//}
//float Employee::pay(float hoursWorked) const
//{
//	return hoursWorked * payRate;
//}
///***** ������Ա����ͨ��Ա��һ�� ����Manager��*************/
//class Manager : public Employee
//{
//public:
//	/*����isSalaried����н��ʽ��true ��н�̶����ʣ�false��Сʱ��н*/
//	Manager(char* theName, float thePayRate, bool isSalaried);
//	bool getSalaried() const;
//	float pay(float hoursWorked) const;
//protected:
//	bool salaried;
//};
//Manager::Manager(char* theName, float thePayRate, bool isSalaried) : Employee(theName, thePayRate)
//{
//	salaried = isSalaried;
//}
//bool Manager::getSalaried() const
//{
//		return salaried;
//}
//float Manager::pay(float hoursWorked) const
//{
//	if (salaried)
//		return payRate;
//	/* ����*/
//	return Employee::pay(hoursWorked);
//}
///****������Ա�ǹ�����Ա��һ�� ����Supervisor��**********/
//class Supervisor : public Manager
//{
//public:
//	Supervisor(char* theName, float thePayRate, float theBouns) :Manager(theName,
//		thePayRate, true), bouns(theBouns) {}
//	float getBouns() const { return bouns; }
//	float pay(float hoursWorked) const { return payRate + bouns; }
//protected:
//	float bouns;
//};
///*���ͼ��ݹ���ָ����Ҫ���������κεط���������ʹ�ù���������
//�Ķ������������ʱ���ɵ��õľ�Ϊ�����Ա��*/
///***************������ͨ����Display ����********************/
//void Display(Employee& ptr, float pay)
//{
//	cout << "name:" << ptr.getName() << endl;
//	cout << "Pay:" << ptr.pay(pay) << endl;
//}
///***************������ͨ����Display ָ��********************/
//void Display(Employee* ptr, float pay)
//{
//	cout << "name:" << ptr->getName() << endl;
//	cout << "Pay:" << ptr->pay(pay) << endl;
//}
///*(1)��ͨ��Ա����������Ļ��࣬�����˹�Ա��һЩ������Ϣ��
//(2)������Ա�����ͨ��Ա��������������Ա�ĸ�н��ʽ����ͨ��Ա����ͬ��
//���Ը��������һ����Ա������ʶ���ֲ���(salaried)���������˻����pay()������
//(3)������ӹ�����Ա��������������Ա�ǹ�����Ա��һ�֣����ǲ���֧���̶�нˮ�����һ��н�����
//�����������������bonus��Ա���������ǵĽ������
//�������˹�����Ա���pay()�������¼��㹤�ʡ�*/
//void main()
//{
//	Employee e("Jack", 50.00);
//	Manager m("Tom", 6000, true);
//		Supervisor * Sptr = new Supervisor("Tanya", 8000.00, 5000.00); //��̬����ռ�
//	cout << "Name:" << e.getName() << endl;
//	cout << "Pay:" << e.pay(60) << endl; //��ÿ�¹���Сʱ
//	cout << "Name:" << m.getName() << endl;
//	cout << "Pay:" << m.pay(40) << endl;
//	cout << "Name:" << Sptr->getName() << endl;
//	cout << "Pay:" << Sptr->pay(40) << endl; //�������ﲻ������
//	cout << "/*********���ͼ��ݹ������********************/" << endl;
//	/*����Display��ʵ���ϵ��õľ���Employee��pay������
//	��ˣ�����ʾm��*Sptr�Ķ�������ʱ�������������治���Ľ����*/
//	Display(e, 60);
//	Display(m, 40);
//	Display(Sptr, 40);
//}