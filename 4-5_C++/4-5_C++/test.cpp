#include <iostream>
using namespace std;

class Matrix
{
public:
	Matrix(){}
	//构造函数
	Matrix(int lines,int rows)
	{
		this->lines = lines;
		this->rows = rows;
		array = new int*[lines];
		for (int i = 0; i < rows; i++)
		{
			array[i] = new int[rows];
		}
	}

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
	cout << "请输入" << line << "行" << row << "列矩阵" << endl;
	pA1->cinMatrix(*pA1);

	Matrix* pA2 = new Matrix(line, row);
	cout << "请输入" << line << "行" << row << "列矩阵" << endl;
	pA2->cinMatrix(*pA2);

	Matrix* pA3 = new Matrix(line, row);
	pA3->addMatrix(*pA1, *pA2);
	cout << "矩阵相加结果为：" << endl;
	pA3->coutMatrix(*pA3);
	
	system("pause");
	return 0;
}