#pragma once

# ifndef Flag 
# define Flag
class Client
{
public:
	Client();
	~Client();
	static int GetClientNum(); //获得客户机数量
	static void ChangeServerName(char sn); //设置服务器名
	static char GetServerName(); //获得服务器名
	friend void PrintServerNameAndClientNum(); //屏幕输出服务器名和客户机数目
protected:
	static char ServerName; //服务器名
	static int ClientNum; //客户机数量
};
#endif