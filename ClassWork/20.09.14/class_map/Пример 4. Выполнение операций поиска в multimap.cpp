#include <iostream>
#include <string>
#include <map>
using namespace std;

//��� ���������� ������ ������ �����������:
typedef multimap<char,string> MyMap;
typedef MyMap::iterator Iter;
int main()
{
	//��������� ������������� map
	MyMap m;
	//������������� value_type ��� ������������ ���� "���� - ��������"
      //� ����� �������� ������ ������� � �� ��������� ����
	m.insert(MyMap::value_type('L',"London"));
	m.insert(MyMap::value_type('P',"Paris"));
	m.insert(MyMap::value_type('M',"Madrid"));
	m.insert(MyMap::value_type('M',"Moskow"));
	m.insert(MyMap::value_type('M',"Milan"));
	
      //����� ����������� ����������
	for(Iter it = m.begin(); it != m.end(); it++)
	 cout << it->first << " " << it->second << endl;
	
	//������� ���������� ��������� � �������� ��������� �����
	cout << endl << "There are " << m.count('M') << " cities starting on M" <<endl;

	//��������� ��������� ��������� � �������� ��������� �����
	pair<Iter,Iter> p = m.equal_range('M');
	cout << endl << "Cities starting on M: " << endl;
	for(Iter it = p.first; it != p.second; it++)
		cout <<  it->first<<" "<<it->second << " ";
	cout << endl << endl;

	//����� �������� �� �������� �����
	Iter res = m.find('P');
	if (res != m.end())
	 cout << "The first city starting on P is: " << res->second << endl;
	else
	 cout << "City starting on P is not found" << endl;

  	return 0;
}
