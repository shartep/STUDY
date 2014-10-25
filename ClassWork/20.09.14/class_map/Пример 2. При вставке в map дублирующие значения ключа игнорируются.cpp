#include <iostream>
#include <string>
#include <map>
using namespace std;

//��� ���������� ������ ������ �����������:
typedef map<int,string> MyMap;
typedef MyMap::iterator Iter;
int main()
{
	//��������� ������������� map
	MyMap m;
	//������������� value_type ��� ������������ ���� "���� - ��������"
	m.insert(MyMap::value_type(3,"Ivanov"));
	//����� ��������������� ������������ ��� pair
	m.insert(pair<int,string>(2,"Petrov"));
	//������������� ������� make_pair
	// ��� ������� � map ����������� �������� ����� ������������ 
	m.insert(make_pair(3,"Sidorov"));

	for(Iter it = m.begin(); it != m.end(); it++)
	{
		//������������� ������� ���������:
		//first ��� ��������� � �����,
		//second ��� ��������� � ��������
		cout << it->first << " " << it->second << endl;
	}
	
	return 0;
}
