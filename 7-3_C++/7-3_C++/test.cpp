#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>//��׼�㷨ͷ�ļ�
#include <vector>
#include <string>
#include <time.h>

//STL����-��ί���
//��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����
/*
* ʵ�ֲ��裺
* ��������ѡ�� �ŵ�vector������
* ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10����ί��ִ浽deque������
* sort�㷨��deque�����з�������ȥ����߷ֺ���ͷ�
* deque��������һ�飬�ۼ��ܷ�
* ��ȡƽ����
*/

//ѡ����
class Person
{
public:
	Person(string name, int score)
	{
		this->name = name;
		this->score = score;
	}

	string name;
	int score;
};

void creatPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		//��������Person���� ���뵽������
		v.push_back(p);
	}
}

//���
void setScore(vector<Person>& v)
{
	//srand((unsigned)time(NULL));
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ����ŵ�deque������
		deque<int>d;
		//srand((unsigned)time(NULL));
		for (int i = 0; i < 10; i++)
		{
			//srand((unsigned)time(NULL));
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		cout << "ѡ�֣�" << it->name << "   ��֣�" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;

		//������
		sort(d.begin(), d.end());
		//ȥ����ͺ���߷�
		d.pop_back();
		d.pop_front();
		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//�ۼ�ÿ����ί�ķ���
		}
		int avg = sum / d.size();
		//��ƽ���ָ�ֵ��ѡ������
		it->score = avg;
	}
}

void showScore(vector<Person>& p)
{
	for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "name:" << it->name << "   avg:" << it->score << endl;
	}
}

int main() {
	//������������
	srand((unsigned)time(NULL));

	//1������5��ѡ��
	vector<Person>v;//���ѡ�ֵ�����
	creatPerson(v);
	//����
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name:" << (*it).name << "   score:" << (*it).score << endl;
	}*/

	//2����5��ѡ�ִ��
	setScore(v);

	//3����ʾ���÷�
	showScore(v);

	system("pause");
	return 0;
}




////deque����
////�����㷨ʵ�ֶ�deque������������
////sort(iterator beg,iterator end);//��beg��end������Ԫ�ؽ�������
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//	//300 200 100 10 20 30
//	printDeque(d);
//
//	//���� Ĭ��������� ��С���� ����
//	//����֧��������ʵ�����������������������sort�㷨ֱ�Ӷ����������
//	//vector����Ҳ��������sort��������
//	sort(d.begin(), d.end());
//	cout << "�����" << endl;
//	printDeque(d);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}



////deque���ݴ�ȡ
///*
//* at(int idx);//��������idx��ָ������
//* operator[];//��������[idx]��ָ������
//* front();//���������е�һ������Ԫ��
//* back();//�������������һ������Ԫ��
//*/
//
//void test01()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//
//	//ͨ��[]��ʽ����Ԫ��
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//
//	//ͨ��at��ʽ����Ԫ��
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "��һ��Ԫ��Ϊ��" << d1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << d1.back() << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}



////deque�����ɾ��
///*
//* ���˲������
//* push_back(elem);//������β�����һ������
//* push_front(elem);//������ͷ������һ������
//* pop_back();//ɾ���������һ������
//* pop_front();//ɾ��������һ������
//* ָ��λ�ò���
//* insert(pos,elem);//��posλ�ò���һ��elemԪ�صĿ���������������λ��
//* insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ
//* insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ
//* clear();//�����������������
//* erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
//* erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//*/
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////���˲���
//void test01()
//{
//	deque<int>d1;
//
//	//β��
//	d1.push_back(10);
//	d1.push_back(20);
//
//	//ͷ��
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printDeque(d1);
//
//	//βɾ
//	d1.pop_back();
//	printDeque(d1);
//
//	//ͷɾ
//	d1.pop_front();
//	printDeque(d1);
//}
//
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	//200 100 10 20
//	printDeque(d1);
//
//	//insert����
//	d1.insert(d1.begin(), 1000);
//	//1000 200 100 10 20
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2, 10000);
//	//10000 10000 1000 200 100 10 20 
//	printDeque(d1);
//
//	//����������в���
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//}
//
//void test03()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	//200 100 10 20
//	printDeque(d1);
//
//	//ɾ��
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printDeque(d1);
//
//	//������ķ�ʽɾ��
//	//d1.erase(d1.begin(), d1.end());
//	//���
//	d1.clear();
//	printDeque(d1);
//}
//
//int main() {
//
//	//test01();
//
//	//test02();
//
//	test03();
//
//	system("pause");
//	return 0;
//}



////deque��С����
///*
//* deque.empty();//�ж������Ƿ�Ϊ��
//* deque.size();//����������Ԫ�صĸ���
//* deque.resize(num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
//* ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//* deque.resize(num,int elem);//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
//* ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//*/
//
//void printDeque(const deque<int>d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	if (d1.empty())
//	{
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d2��Ϊ��" << endl;
//		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
//		//dequeû������capacity����
//	}
//
//	//����ָ����С
//	//d1.resize(15);
//	d1.resize(15, 1);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////deque��ֵ����
///*
//* deque& operator=(const deque &deq);//���صȺŲ�����
//* assign(beg,end);//��[beg,end)�����е����ݿ�����ֵ������
//* assign(n,elem);//��n��elem������ֵ������
//*/
//
//void printDeque(const deque<int>d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//operator=��ֵ
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	//assign��ֵ
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//
//int main() { 
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////deque���캯��
///*
//* deque<T> deqT;//Ĭ�Ϲ��캯��
//* deque(beg,end);//���캯����[beg,end)�����е�Ԫ�ؿ���������
//* deque(n,elem);//���캯����n��elem����������
//* deque(const deque &deq);//�������캯��
//*/
//
//void printDeque(const deque<int>& d)//constֻ��
//{
//	//const�������޸ģ�������ʹ�õ�������ʱ�򣬵���������ҲҪ�ǲ������޸ĵ�
//	//������const_iterator
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;//�����е����������Խ����޸ĵ�
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}