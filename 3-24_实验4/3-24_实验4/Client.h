#pragma once

# ifndef Flag 
# define Flag
class Client
{
public:
	Client();
	~Client();
	static int GetClientNum(); //��ÿͻ�������
	static void ChangeServerName(char sn); //���÷�������
	static char GetServerName(); //��÷�������
	friend void PrintServerNameAndClientNum(); //��Ļ������������Ϳͻ�����Ŀ
protected:
	static char ServerName; //��������
	static int ClientNum; //�ͻ�������
};
#endif