#include <iostream>
#include <string>
#include <map>
using namespace std;

//��� ���������� ������ ������ �����������:
typedef multimap<char,string> MyMap;
typedef MyMap::iterator Iter;
int main()
{
   //����� � �������� ������ ������������ �������� ���, � �������� �������� �� �������
	map<string,int> Tones;
	Tones["Do"] = 523;
	Tones["Re"] = 587;
	Tones["Mi"] = 659;
	Tones["F"] = 698;
	Tones["Sol"] = 783;
	Tones["La"] = 879;
	Tones["Si"] = 987;
	Tones["La#"]; // ������ �������� ��������� �������� �� ���������( 0 - ��� int)
	map<string,int>::iterator it;
	for(it = Tones.begin();it!=Tones.end();it++)
	{
		cout << it->first << " " << it->second << endl;
	}
	cout << Tones["Si#"] << endl; //������ �� ��������� - ��������� �������� �� ���������
      return 0;
}
