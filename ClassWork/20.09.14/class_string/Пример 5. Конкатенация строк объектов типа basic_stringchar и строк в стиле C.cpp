#include <string>
#include <iostream>
using namespace std;
int main()
{
	//���������� �������� ���� basic_string<char>
	string str1("StringOne");
	string str2("StringTwo");
	//���������� ������ � ����� C
	char *str3 = "StringThree";
	//���������� �������
	char chr = '*';
	cout<<"str1 string is = "<<str1<<endl;
	cout<<"str2 string is = "<<str2<<endl;
	cout<<"str3 C-style string is = "<<str3<<endl;
	cout<<"A character constant chr is = "<<chr<<endl;

	//������������ ����� - �������� ���� basic_string<char>
	cout<<"\nOperation: str12 = str1 + str2"<<endl;
	string str12 = str1 + str2;
	cout<<"str12 = "<<str12<<endl;
	//������������ ������ - ������� ���� basic_string<char> �� ������� � ����� C
	cout<<"\nOperation: str13 = str1 + str3"<<endl;
	string str13 = str1 + str3;
	cout<<"str13 = "<<str13<<endl;
	//������������ ������ - ������� ���� basic_string<char> � ���������� ����������
	cout<<"\nOperation: str13chr = str13 + chr"<<endl;
	string str13chr = str13 + chr;
	cout<<"str13chr = "<<str13chr<<endl;
	return 0;
}
