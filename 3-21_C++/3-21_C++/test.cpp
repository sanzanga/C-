#include <iostream>
#include <string>
using namespace std;

//��̬��������������װ
//����ͬ�������
//����CPU����
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};

//�����Կ�����
class ViedoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//�����ڴ�������
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, ViedoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿ�
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//�ṩ�������� �ͷ�3���������
	~Computer()
	{
		//�ͷ�CPU���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		//�ͷ��Կ�
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		//�ͷ��ڴ���
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu;//CPU�����ָ��
	ViedoCard* m_vc;//�Կ���ָ��
	Memory* m_mem;//�ڴ�����ָ��
};

//����ĳ���
//Intel����
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};

class IntelViedoCard :public ViedoCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};

//Lenova
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
	}
};

class LenovoViedoCard :public ViedoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};

void test01()
{
	//��һ̨����
	CPU* intelCpu = new IntelCPU;
	ViedoCard* intelCard = new IntelViedoCard;
	Memory* intelMem = new IntelMemory;
	cout << "��һ̨���Կ�ʼ����: " << endl;
	//������һ̨����
	Computer* computer1 = new Computer(intelCpu,intelCard,intelMem);
	computer1->work();
	delete computer1;
	cout << "--------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ������" << endl;
	//�����ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoViedoCard, new LenovoMemory);
	computer2->work();
	delete computer2;
	cout << "--------------------" << endl;
	cout << "����̨���Կ�ʼ������" << endl;
	//��������̨����
	Computer* computer3 = new Computer(new LenovoCPU, new IntelViedoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}

int main() {

	test01();

	system("pause");
	return 0;
}

////�������ʹ�������
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//
//	//���麯��
//	virtual void speak() = 0;
//
//	//�������������Խ�� ����ָ���ͷ�������󲻸ɾ�������
//	/*virtual ~Animal()
//	{
//		cout << "Animal��������������" << endl;
//	}*/
//
//	//�������� ��Ҫ����Ҳ��Ҫʵ��
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal����������������" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat�Ĺ��캯������" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_Name <<"Сè��˵��" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat��������������" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//�����ָ����������ʱ�򲻻������������������������������ж������ԣ������ڴ�й©�����
//	delete animal;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////��̬������������Ʒ
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//��������
//	virtual void PutSomething() = 0;
//
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//��������
//	virtual void PutSomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
////������
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//��������
//	virtual void PutSomething()
//	{
//		cout << "�������" << endl;
//	}
//};
//
////��������
//void doWork(AbstractDrinking * abs)//AbstractDrinking * abs = new Coffee
//{
//	abs->makeDrink();
//	delete abs;//�ͷ�
//}
//
//void test01()
//{
//	//��������
//	doWork(new Coffee);
//	cout << "-----------------" << endl;
//	//������
//	doWork(new Tea);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////���麯���ͳ�����
//class Base
//{
//public:
//	//���麯��
//	//ֻҪ��һ�����麯����������Ϊ������
//	//�������ص㣺
//	//1���޷�ʵ��������
//	//2����������������Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func�����ĵ���" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;//���������޷�ʵ��������
//	//new Base;//���������޷�ʵ��������
//
//	//Son s;//���������д�����еĴ��麯���������޷�ʵ��������
//	Base* base = new Son;
//	base->func();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����
////��ͨд��
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
//		//����ʵ�Ŀ����� ����ԭ��
//		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
//	}
//
//	int m_Num1;//������1
//	int m_Num2;//������2
//};
//
//void test01()
//{
//	//�����������Ķ���
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
//	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
//}
//
////���ö�̬ʵ�ּ�����
//// ��̬�ô�
//// 1����֯�ṹ����
//// 2���ɶ���ǿ
//// 3������ǰ�ںͺ��ڵ���չ�Լ�ά��
////ʵ�ּ�����������
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////������������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷���������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test02()
//{
//	//��̬ʹ������
//	//����ָ���������ָ������Ķ���
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	//�����ǵ�����
//	delete abc;
//
//	//��������
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	//�˷�����
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}

////��̬�Ļ�������
////������
//class Animal
//{
//public:
//	//�麯��
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
////è��
//class Cat :public Animal
//{
//public:
//	//��д ��������ֵ���� ������ �����б� ��ȫ��ͬ
//	//��������Ĺؼ���virtual�ǿ���дҲ���Բ�д�����Ƕ��ڸ����Ǳ���Ҫд��
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
////����
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//
////ָ��˵���ĺ���
////��ַ��� �ڱ���׶�ȷ��������ַ
////�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//
////��̬��̬��������
////1���м̳й�ϵ
////2������Ҫ��д������麯��
//
////��̬��̬ʹ��
////�����ָ��������� ָ���������
//
//void doSpeak(Animal& animal)//Animal & animal = cat  ����
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "sizeof(Animal)=" << sizeof(Animal) << endl;
//}
//
//int main() {
//
//	test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}