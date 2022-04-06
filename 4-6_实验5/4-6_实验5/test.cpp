#include <iostream>
using namespace std;

class Matrix
{
public:
	Matrix() {}
	//���캯��
	Matrix(int lines, int rows)
	{
		this->lines = lines;
		this->rows = rows;
		array = new int* [lines];
		for (int i = 0; i < rows; i++)
		{
			array[i] = new int[rows];
		}
	}

	//�������캯��
	Matrix(const Matrix& ma)
	{
		this->lines = ma.lines;
		this->rows = ma.rows;
		this->array = new int* [ma.lines];
		for (int i = 0; i < ma.rows; i++)
		{
			this->array[i] = new int[ma.rows];
		}
		for (int i = 0; i < ma.lines; i++)
		{
			for (int j = 0; j < ma.rows; j++)
			{
				this->array[i][j] = ma.array[i][j];
			}
		}
	}

	//�������
	void cinMatrix(Matrix& matrix)
	{
		int num;
		for (int i = 0; i < this->lines; i++)
		{
			for (int j = 0; j < this->rows; j++)
			{
				cin >> num;
				matrix.array[i][j] = num;
			}
		}
	}
	//�������
	void coutMatrix(Matrix& matrix)
	{
		for (int i = 0; i < this->lines; i++)
		{
			for (int j = 0; j < this->rows; j++)
			{
				cout << matrix.array[i][j] << " ";
			}
			cout << endl;
		}
	}

	//�������
	void addMatrix(Matrix& ma1, Matrix& ma2)
	{
		for (int i = 0; i < this->lines; i++)
		{
			for (int j = 0; j < this->rows; j++)
			{
				this->array[i][j] = ma1.array[i][j] + ma2.array[i][j];
			}
		}
	}

	//�������
	void subMatrix(Matrix& ma1, Matrix& ma2)
	{
		for (int i = 0; i < this->lines; i++)
		{
			for (int j = 0; j < this->rows; j++)
			{
				this->array[i][j] = ma1.array[i][j] - ma2.array[i][j];
			}
		}
	}

	//��������
	~Matrix()
	{
		for (int i = 0; i < this->rows; i++)
		{
			if (array[i] != NULL)
			{
				delete array[i];
				array[i] = NULL;
			}
		}
		if (array != NULL)
		{
			delete array;
			array = NULL;
		}

	}

private:
	int lines;//����
	int rows;//����
	int** array;//���ָ�������ָ��
};

int main() {

	int line, row;
	cout << "���������������";
	cin >> line;
	cout << "���������������";
	cin >> row;

	Matrix ma1(line, row);
	cout << "������" << line << "��" << row << "�о���" << endl;
	ma1.cinMatrix(ma1);
	Matrix ma2(line, row);
	cout << "������" << line << "��" << row << "�о���" << endl;
	ma2.cinMatrix(ma2);

	Matrix ma3(line, row);
	ma3.addMatrix(ma1, ma2);
	cout << "������ӽ��Ϊ��" << endl;
	ma3.coutMatrix(ma3);
	ma3.subMatrix(ma1, ma2);
	cout << "��������Ľ��Ϊ��" << endl;
	ma3.coutMatrix(ma3);

	Matrix* pA1 = new Matrix(line, row);
	Matrix* pA2 = new Matrix(line, row);
	Matrix* pA3 = new Matrix(ma3);//��ma3����ʼ��pA3
	cout << "������" << line << "��" << row << "�о���" << endl;
	pA1->cinMatrix(*pA1);

	cout << "������" << line << "��" << row << "�о���" << endl;
	pA2->cinMatrix(*pA2);

	pA3->addMatrix(*pA1, *pA2);
	cout << "������ӽ��Ϊ��" << endl;
	pA3->coutMatrix(*pA3);
	pA3->subMatrix(*pA1, *pA2);
	cout << "��������Ľ��Ϊ��" << endl;
	pA3->coutMatrix(*pA3);

	//�ͷ�
	delete pA1;
	delete pA2;
	delete pA3;

	system("pause");
	return 0;
}

//int main() {
//	cout << "****��ά���������ָ���ʾ*****" << endl;
//	int i, j, a[2][3] = { { 1, 3, 5 }, { 2, 4, 6 } }, * p, (*pRow)[3]; pRow = a;
//	p = &a[0][0];
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			cout << a[i][j] << " ";
//			cout << *(pRow[i] + j) << " ";
//			cout << *(*(pRow + i) + j) << " ";
//			cout << *(a[i] + j) << " ";
//			cout << *(*(a + i) + j) << " ";
//			cout << *(p + 3 * i + j) << " ";
//		}
//		cout << endl;
//	}
//	cout << "*************ָ������************" << endl;
//	int* pArray[3];
//	int Line1[3], Line2[3], Line3[3];
//	pArray[0] = Line1; pArray[1] = Line2; pArray[2] = Line3;
//	cout << "****��������Ԫ ��*****" << endl;
//	for (int m = 0; m < 3; m++) {
//		for (int n = 0; n < 3; n++) {
//			cout << "����pArray[" << m << "][" << n << "]��ֵ��";
//			//����ʽ�������±�ķ�����ʽ���ƣ������ʲ�ͬ�׵�ַ����Դ��ͬ
//			cin >> pArray[m][n];
//		}
//		cout << endl;
//	}
//	cout << "****�������Ԫ��*****" << endl;
//	for (int m = 0; m < 3; m++) {
//		for (int n = 0; n < 3; n++) {
//			cout << *(pArray[m] + n) << " ";
//		}
//		cout << endl;
//	}
//}


//int main() {
//
//	// ����ָ�� �����Ըı�ָ����ָ�����ֵ���������ܸı����
//	int m = 50;
//	int n = 210;
//	const int* ptr1 = &m;
//	cout << "*ptr1:" << *ptr1 << endl;
//	//*ptr1=200; //����
//	ptr1 = &n;
//	cout << "*ptr1:" << *ptr1 << endl;
//	// ָ�����ͳ��� ���Ըı�ָ����ָ�����ֵ�������ܸı����
//	int* const ptr2 = &m;
//	cout << "*ptr2:" << *ptr2 << endl;
//	*ptr2 = 200;
//	// ptr2=&n; //����
//	cout << "*ptr2:" << *ptr2 << endl;
//
//	system("pause");
//	return 0;
//}

//void main() {
//	int i = 100;
//	int* ptr = &i;
//	cout << "ptr:" << ptr << endl;//i�ĵ�ַ
//	cout << "*ptr:" << *ptr << endl;//i
//	cout << "&ptr:" << &ptr << endl;//ptr�ĵ�ַ
//	cout << "&*ptr:" << &*ptr << endl;//i�ĵ�ַ
//	cout << "*&ptr:" << *&ptr << endl;//i�ĵ�ַ
//}

//class student
//{
//private:
//	int num;
//	int score;
//public:
//	void display();
//	student(int n, int s) :num(n), score(s) {}//���ַ������Ǹ�num ��score����ֵ
//};
//void student::display()
//{
//	cout << "student " << num << "'s score is " << score << endl;
//}
//int main()
//{
//	student stu[5] = { student(1,91),student(2,92),student(3,93),student(4,94),student(5,95) };
//	student* p = stu;
//	int i;
//	for (i = 0; i < 3; p = p + 2, i++)
//	{
//		p->display();
//	}
//	return 0;
//}

//int main() {
//
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int i, j, t;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			cout << a[i][j] << " ";
//		cout << endl;
//	}
//	for (i = 0; i < 3; i++)
//		for (j = i; j < 3; j++)
//			t = a[i][j], a[i][j] = a[j][i], a[j][i] = t;
//	cout << endl;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			cout << a[i][j] << " ";
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}