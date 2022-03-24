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
int Client::GetClientNum() //获得客户机数量 
{ 
return ClientNum;
}
int Client::ClientNum = 0;
char Client::ServerName = 'N';
void Client::ChangeServerName(char sn) //设置服务器名
{
	ServerName = sn;
}
char Client::GetServerName() // 获得服务器名
{
	return ServerName;
}
void PrintServerNameAndClientNum()
{
	cout << "服务器名: " << Client::ServerName << " "
		<< "客户机数: " << Client::ClientNum << endl;
}