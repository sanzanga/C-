#include <iostream>
using namespace std;

//long long A(int n, int m)
//{
//    if (n < m)
//    {
//        return 0;
//    }
//    else if (m == 0 || m == n)
//    {
//        return 1;
//    }
//    else
//    {
//        return A(n - 1, m) * A(n - 1, m - 1);
//    }
//}

long long A(int n, int m)
{
    int ret = 1;
    int num = n;
    for (int i = 0; i < m; i++)
    {
        ret *= num;
        num--;
    }
    return ret;
}

int main() {

    int n, m;
    cin >> n >> m;

    long long ret = A(n, m);

    cout << ret << endl;

    system("pause");
    return 0;
}

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

//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//
//	int x = 5;
//	int y = 10;
//	cout << "x=" << x << "   y=" << y << endl;
//	swap(x, y);
//	cout << "x=" << x << "   y=" << y << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b;
//	int& r = a;//��a������һ�����ֽ�r
//	b = 10;
//	r = b;//�൱��a=b;
//
//	system("pause");
//	return 0;
//}

//��ֵ���ݳ��Խ�������������ֵ
//
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//
//	int x = 5;
//	int y = 10;
//	cout << "x=" << x << "   y=" << y << endl;
//	swap(x, y);
//	cout << "x=" << x << "   y=" << y << endl;
//
//	system("pause");
//	return 0;
//}

////��ŵ������
//
////��src���������һ�������ƶ���dest����
//void move(char src, char dest)
//{
//	cout << src << "-->" << dest << endl;
//}
//
////��n�����Ӵ�src���ƶ���dest�룬��medium����Ϊ�н�
//void hanoi(int n, char src, char medium, char dest)
//{
//	if (n == 1)
//	{
//		move(src, dest);
//	}
//	else
//	{
//		hanoi(n - 1, src, dest, medium);
//		move(src, dest);
//		hanoi(n - 1, medium, src, dest);
//	}
//}
//
//int main() {
//
//	int m;
//	cout << "Enter the number of disks:";
//	cin >> m;
//	cout << "the steps to move " << m << " disks:" << endl;
//	hanoi(m, 'A', 'B', 'C');
//
//	system("pause");
//	return 0;
//}

////��n������ѡ��k���˵Ĳ�ͬ���
////���ڴ�n-1������ѡk���˵������+n-1��������ѡ��k-1����
//int comm(int n, int k)
//{
//	if (k > n)
//	{
//		return 0;
//	}
//	else if (n == k || k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return comm(n - 1, k) + comm(n - 1, k - 1);
//	}
//}
//
//int main() {
//
//	int n, k;
//	cout << "�������������֣�" << endl;
//	cin >> n >> k;
//
//	int ret = comm(n, k);
//
//	cout << "C(n,k)=" << ret << endl;
//
//	system("pause");
//	return 0;
//}