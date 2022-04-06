#include <iostream>
using namespace std;

class Matrix
{
public:
	Matrix() {}
	//构造函数
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

	//拷贝构造函数
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

	//输入矩阵
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
	//输出矩阵
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

	//矩阵相加
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

	//矩阵相减
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

	//析构函数
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
	int lines;//行数
	int rows;//列数
	int** array;//存放指针数组的指针
};

int main() {

	int line, row;
	cout << "请输入矩阵行数：";
	cin >> line;
	cout << "请输入矩阵列数：";
	cin >> row;

	Matrix ma1(line, row);
	cout << "请输入" << line << "行" << row << "列矩阵" << endl;
	ma1.cinMatrix(ma1);
	Matrix ma2(line, row);
	cout << "请输入" << line << "行" << row << "列矩阵" << endl;
	ma2.cinMatrix(ma2);

	Matrix ma3(line, row);
	ma3.addMatrix(ma1, ma2);
	cout << "矩阵相加结果为：" << endl;
	ma3.coutMatrix(ma3);
	ma3.subMatrix(ma1, ma2);
	cout << "矩阵相减的结果为：" << endl;
	ma3.coutMatrix(ma3);

	Matrix* pA1 = new Matrix(line, row);
	Matrix* pA2 = new Matrix(line, row);
	Matrix* pA3 = new Matrix(ma3);//用ma3来初始化pA3
	cout << "请输入" << line << "行" << row << "列矩阵" << endl;
	pA1->cinMatrix(*pA1);

	cout << "请输入" << line << "行" << row << "列矩阵" << endl;
	pA2->cinMatrix(*pA2);

	pA3->addMatrix(*pA1, *pA2);
	cout << "矩阵相加结果为：" << endl;
	pA3->coutMatrix(*pA3);
	pA3->subMatrix(*pA1, *pA2);
	cout << "矩阵相减的结果为：" << endl;
	pA3->coutMatrix(*pA3);

	//释放
	delete pA1;
	delete pA2;
	delete pA3;

	system("pause");
	return 0;
}

//int main() {
//	cout << "****二维数组的五种指针表示*****" << endl;
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
//	cout << "*************指针数组************" << endl;
//	int* pArray[3];
//	int Line1[3], Line2[3], Line3[3];
//	pArray[0] = Line1; pArray[1] = Line2; pArray[2] = Line3;
//	cout << "****输入数组元 素*****" << endl;
//	for (int m = 0; m < 3; m++) {
//		for (int n = 0; n < 3; n++) {
//			cout << "输入pArray[" << m << "][" << n << "]的值：";
//			//该形式与数组下标的访问形式相似，但本质不同首地址的来源不同
//			cin >> pArray[m][n];
//		}
//		cout << endl;
//	}
//	cout << "****输出数组元素*****" << endl;
//	for (int m = 0; m < 3; m++) {
//		for (int n = 0; n < 3; n++) {
//			cout << *(pArray[m] + n) << " ";
//		}
//		cout << endl;
//	}
//}


//int main() {
//
//	// 常量指针 不可以改变指针所指对象的值；但可以能改变对象
//	int m = 50;
//	int n = 210;
//	const int* ptr1 = &m;
//	cout << "*ptr1:" << *ptr1 << endl;
//	//*ptr1=200; //错误
//	ptr1 = &n;
//	cout << "*ptr1:" << *ptr1 << endl;
//	// 指针类型常量 可以改变指针所指对象的值；但不能改变对象
//	int* const ptr2 = &m;
//	cout << "*ptr2:" << *ptr2 << endl;
//	*ptr2 = 200;
//	// ptr2=&n; //错误
//	cout << "*ptr2:" << *ptr2 << endl;
//
//	system("pause");
//	return 0;
//}

//void main() {
//	int i = 100;
//	int* ptr = &i;
//	cout << "ptr:" << ptr << endl;//i的地址
//	cout << "*ptr:" << *ptr << endl;//i
//	cout << "&ptr:" << &ptr << endl;//ptr的地址
//	cout << "&*ptr:" << &*ptr << endl;//i的地址
//	cout << "*&ptr:" << *&ptr << endl;//i的地址
//}

//class student
//{
//private:
//	int num;
//	int score;
//public:
//	void display();
//	student(int n, int s) :num(n), score(s) {}//这种方法就是给num 和score赋初值
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