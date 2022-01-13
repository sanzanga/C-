#include <iostream>
using namespace std;

int main5() {

	//转义字符

	//换行符号 \n

	cout << "hello world\n";

	//反斜杠 \\

	cout << "\\" << endl;

	//水平制表符 \t  作用：整齐的输出数据

	cout << "aaa\thello world" << endl;//aaa\t占了8个空间
	cout << "aa\thello world" << endl;
	cout << "aaaa\thello world" << endl;

	system("pause");
	return 0;
}