#include "client.h" 
#include <iostream> 
using namespace std;
Client::Client()
{
	ClientNum++;
}
Client::~Client()
{
	ClientNum--;
}
int Client::GetClientNum() //��ÿͻ������� 
{ 
return ClientNum;
}
int Client::ClientNum = 0;
char Client::ServerName = 'N';
void Client::ChangeServerName(char sn) //���÷�������
{
	ServerName = sn;
}
char Client::GetServerName() // ��÷�������
{
	return ServerName;
}
void PrintServerNameAndClientNum()
{
	cout << "��������: " << Client::ServerName << " "
		<< "�ͻ�����: " << Client::ClientNum << endl;
}