#include <string>
#include <iostream>

using namespace std;
int main()
{
	//��������� ���������
	string s1  = "one string in another string";
      //��� ������ 
	cout<< "s1.substr(): " << s1.substr() << endl;
      //����� ������, ������� � 14 ��������
	cout<< "s1.substr(14): " << s1.substr(14) << endl;
      //6 �������� ������, ������� � 4 ��������
	cout<< "s1.substr(4,6): " << s1.substr(4,6) << endl;
	return 0;
}
