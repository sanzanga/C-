#include <iostream>
using namespace std;

class Matrix
{
public:
	Matrix(){}
	//���캯��
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
	cout << "������" << line << "��" << row << "�о���" << endl;
	pA1->cinMatrix(*pA1);

	Matrix* pA2 = new Matrix(line, row);
	cout << "������" << line << "��" << row << "�о���" << endl;
	pA2->cinMatrix(*pA2);

	Matrix* pA3 = new Matrix(line, row);
	pA3->addMatrix(*pA1, *pA2);
	cout << "������ӽ��Ϊ��" << endl;
	pA3->coutMatrix(*pA3);
	
	system("pause");
	return 0;
}