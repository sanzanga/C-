#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

//ϵͳ����Ӧ�þ���

const double PI = 3.14159265358979;

int main() {

	double angle;
	cout << "Please enter an angle: ";
	cin >> angle;//����Ƕ�

	double radian = angle * PI / 180;//ת��Ϊ������
	cout << "sin(" << angle << ")=" << sin(radian) << endl;
	cout << "cos(" << angle << ")=" << cos(radian) << endl;
	cout << "tan(" << angle << ")=" << tan(radian) << endl;


	system("pause");
	return 0;
}


//��������
//int sumOfSquare(int a, int b)
//{
//	return a * a + b * b;
//}
//double sumOfSquare(double a, double b)
//{
//	return a * a + b * b;
//}
//
//int main() {
//
//	int m, n;
//	cout << "Enter two integer: ";
//	cin >> m >> n;
//	cout << "Their sum of square: " << sumOfSquare(m, n) << endl;
//
//	double x, y;
//	cout << "Enter two real numbers: ";
//	cin >> x >> y;
//	cout << "Their sum of square: " << sumOfSquare(x, y) << endl;
//
//	system("pause");
//	return 0;
//}

////��Ĭ�ϲ���ֵ�ú�������
//int getVolume(int length, int width = 2, int height = 3);
//
//int main() {
//
//	const int X = 10, Y = 12, Z = 15;
//	cout << "Some box data is ";
//	cout << getVolume(X, Y, Z) << endl;
//	cout << "Some box data is ";
//	cout << getVolume(X, Y) << endl;
//	cout << "Some box data is ";
//	cout << getVolume(X) << endl;
//
//	system("pause");
//	return 0;
//}
//
//int getVolume(int length, int width/*=2*/, int height/*=3*/)
//{
//	cout << setw(5) << length << setw(5) << width << setw(5) << height << "\t";
//	return length * width * height;
//}

////��Ĭ�ϲ���ֵ�ú���
//
////�����ڶ����ʱ�����Ԥ������Ĭ�ϵ��β�ֵ
////int  add(int x = 5, int y = 10)
////{
////	return x + y;
////}
//
//////��Ĭ��ֵ���βα������β��б�����
////int add(int x, int y = 5, int z = 6);//��ȷ
//////int add(int x = 1, int y = 5, int z);//����
//////int add(int x - 1, int y, int z);//����
//
////����ͬ���������ڣ���������ͬһ�������Ķ�������ж�ͬһ��������Ĭ��ֵ�ظ�����
////��ʹǰ�����ֵ��ͬҲ����
//
//int add(int x = 5, int y = 6);//ԭ�͸���
//
//int main() {
//
//	//add(10, 20);//��ʵ������ʼ���βΣ�ʵ��10+20
//	//add(10);//�β�x����ʵ��ֵ10��y����Ĭ��ֵ10��ʵ��10+10
//	//add();//x��y������Ĭ��ֵ���ֱ�Ϊ5��10��ʵ��5+10
//
//	system("pause");
//	return 0;
//}
//
//int add(int x /* = 5*/, int y /* = 6*/)
////���ﲻ�ܳ���Ĭ���βΣ���Ϊ������������ͨ��ע��˵��Ĭ���β�
//{
//	return x + y;
//}

////��������Ӧ�õľ���
//
//const double PI = 3.14159265358975;
//
////��������������Բ�İ뾶���������
//inline double calArea(double radius)
//{
//	return PI * radius * radius;
//}
//
//int main() {
//
//
//	double r = 3.0;
//	//��������������Բ�����������˴����滻ΪcalArea�����������
//	//չ��Ϊ��area = PI * radius * radius
//	double area = calArea(r);
//	cout << "area=" << area << endl;
//
//	system("pause");
//	return 0;
//}

////ֵ���ݺ����ô��ݵıȽ�
//
//void fiddle(int in1, int& in2)
//{
//	in1 = in1 + 100;
//	in2 = in2 + 100;
//	cout << "The values are ";
//	cout << setw(5) << in1;
//	cout << setw(5) << in2 << endl;
//}
//
//int main() {
//
//	int v1 = 7;
//	int v2 = 21;
//	cout << "The values are ";
//	cout << setw(5) << v1;
//	cout << setw(5) << v2 << endl;
//	fiddle(v1, v2);
//	cout << "The values are ";
//	cout << setw(5) << v1;
//	cout << setw(5) << v2 << endl;
//
//	system("pause");
//	return 0;
//}