#include <string>
#include <iostream>
using namespace std;
int main()
{
	string s("123");
	string s1("123-456-789");
	cout << "s: " << s <<  endl;
	cout << "s1: " << s1 <<  endl;

	//�������������� � ������ � ����� � ��� �������� � �������
	cout << "atoi(s.c_str()) = " << atoi(s.c_str()) << endl;
	//��������� ������� �������� � ������� ������ data
	const char* dat = s.data();
	cout << "s.data(): ";
	for(int i = 0; i < 3; i++) cout << dat[i];
	cout << endl;
    
	
	char dat1[3];
   //��������� ������� �������� � ������� ������ copy
   //�������� 3 �������, ������� � 4-���
	s1.copy(dat1,3,4);
	cout << "s1.copy(dat1,3,4): ";
    for(int i = 0; i < 3; i++) cout << dat1[i];
	cout << endl;
	return 0;
}
