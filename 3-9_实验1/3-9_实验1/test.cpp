#include <iostream>
using namespace std;

int main() {

	for (int i = 2; i <= 10000; i++){
		int sum = 0;
		for (int j = 1; j < i; j++){
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum==i){
			cout << i << " ";
		}
	}

	system("pause");
	return 0;
}

//�ҳ�2~10000֮�ڵ�������ȫ������ν��ȫ�������������֮�����õ��ڱ����������
//6 = 1 + 2 + 3��28 = 1 + 2 + 4 + 7 + 14������6��28������ȫ��

//int main() {
//
//	char ch;
//	//��ӡ�˵���ʾ
//	cout << "Menu: A(dd) D(elete) S(ort) Q(uit)�� Select one :" << endl;
//
//	do
//	{
//		cin >> ch;
//		switch (ch)
//		{
//		case 'A':
//			cout << "�����Ѿ���ӳɹ�" << endl;
//			break;
//		case 'D':
//			cout << "�����Ѿ�ɾ���ɹ�" << endl;
//			break;
//		case 'S':
//			cout << "�����Ѿ�����ɹ�" << endl;
//			break;
//		case 'Q':
//			break;
//		default:
//			break;
//		}
//	} while (ch != 'Q');
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	char ch;
//	//��ӡ�˵���ʾ
//	cout << "Menu: A(dd) D(elete) S(ort) Q(uit)�� Select one :" << endl;
//
//	do
//	{
//		cin >> ch;
//		if (ch == 'A')
//			cout << "�����Ѿ���ӳɹ�" << endl;
//		else if (ch == 'D')
//			cout << "�����Ѿ�ɾ���ɹ�" << endl;
//		else if (ch == 'S')
//			cout << "�����Ѿ�����ɹ�" << endl;
//		else
//			break;
//	} while (ch != 'Q');
//
//	system("pause");
//	return 0;
//}

//������������ʱ��ʾ"Menu: A(dd) D(elete) S(ort) Q(uit)�� Select one:"��ʾ
//�û����룬A ��ʾ���ӣ�D ��ʾɾ����S ��ʾ����Q ��ʾ�˳�������Ϊ A�� D��S ʱ�ֱ���ʾ" �����Ѿ����ӡ�ɾ��������"����Ϊ Q

//int main()
//{
//	int myage = 20, yourage = 30;
//	cout << "I am" << myage;
//	cout << "You are " << yourage;
//	myage++;
//	++yourage;
//	cout << "One year passes\n";
//	cout << "I am" << myage;
//	cout << "You are " << yourage;
//	cout << "Another year passes\n";
//	cout << "I am" << myage++;
//	cout << "You are " << ++yourage;
//	cout << "I am" << myage;
//	cout << "You are " << yourage;
//	return 0;
//}


//int main()
//{
//	cout << "char length:" << sizeof(char) << endl;
//	cout << "int length:" << sizeof(int) << endl;
//	cout << "long length:" << sizeof(long) << endl;
//	cout << "float length:" << sizeof(float) << endl;
//	cout << "double length:" << sizeof(double) << endl;
//	cout << "long double length:" << sizeof(long double) << endl;
//	cout << "char* length:" << sizeof(char*) << endl;
//	cout << "int* length:" << sizeof(int*) << endl;
//	cout << "long* length:" << sizeof(long*) << endl;
//	cout << "float* length:" << sizeof(float*) << endl;
//	cout << "double* length:" << sizeof(double*) << endl;
//	cout << "long double* length:" << sizeof(long double*) << endl;
//	cout << "void* length:" << sizeof(void*) << endl;
//	return 0;
//}

//int main() {
//
//	int a = 1, b = 2, c = 3;
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	cout << "hello world" << endl;
//
//	system("pause");
//	return 0;
//}