#include "orderFile.h"

//���캯��
OrderFile::OrderFile()
{
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string data;//����
	string interval;//ʱ���
	string stuId;//ѧ�����
	string stuName;//ѧ������
	string roomId;//�������
	string status;//ԤԼ״̬

	//date: interval:1 stuId:1 stuName:���� roomId:1 status:2

	this->m_Size = 0;//��¼����

	while (ifs >> data && ifs >> interval && ifs >> 
		stuId && ifs >> stuName && ifs >> roomId && ifs >> status)
	{
		/*cout << data << endl;
		cout << interval << endl;
		cout << stuId << endl;
		cout << stuName << endl;
		cout << roomId << endl;
		cout << status << endl;
		cout << endl;*/

		//data:1
		string key;
		string value;
		map<string, string>m;

		int pos = data.find(":");//4
		if (pos != -1)
		{
			key = data.substr(0, pos);
			value = data.substr(pos + 1, data.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		/*cout << "key=" << key << endl;
		cout << "value=" << value << endl;*/

		pos = interval.find(":");//4
		if (pos != -1)
		{
			key = interval.substr(0, pos);
			value = interval.substr(pos + 1, interval.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		pos = stuId.find(":");//4
		if (pos != -1)
		{
			key = stuId.substr(0, pos);
			value = stuId.substr(pos + 1, stuId.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		pos = stuName.find(":");//4
		if (pos != -1)
		{
			key = stuName.substr(0, pos);
			value = stuName.substr(pos + 1, stuName.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		pos = roomId.find(":");//4
		if (pos != -1)
		{
			key = roomId.substr(0, pos);
			value = roomId.substr(pos + 1, roomId.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		pos = status.find(":");//4
		if (pos != -1)
		{
			key = status.substr(0, pos);
			value = status.substr(pos + 1, status.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		//��С���������뵽���������
		this->m_orderDate.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();

	//��������map����
	//for (map<int, map<string, string>>::iterator it = this->m_orderDate.begin(); it != this->m_orderDate.end(); it++)
	//{
	//	cout << "����Ϊ=" << it->first << "  value=" << endl;
	//	for (map<string, string>::iterator mit = (*it).second.begin(); mit != it->second.end(); mit++)
	//	{
	//		cout << "key=" << mit->first << "  value=" << mit->second << " ";
	//	}
	//	cout << endl;
	//}
}

//����ԤԼ��¼
void OrderFile::updateOrder()
{
	if (this->m_Size == 0)
	{
		return;//ԤԼ��¼Ϊ0�� ֱ��return
	}

	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);
	for (int i = 0; i < this->m_Size; i++)
	{
		ofs << "date:" << this->m_orderDate[i]["data"] << " ";
		ofs << "interval:" << this->m_orderDate[i]["interval"] << " ";
		ofs << "stuId:" << this->m_orderDate[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_orderDate[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_orderDate[i]["roomId"] << " ";
		ofs << "status:" << this->m_orderDate[i]["status"] << endl;
	}

	ofs.close();
}

//��ȡԤԼ����
int OrderFile::getSize()
{
	return this->m_Size;
}