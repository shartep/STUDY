#include <string>
#include <iostream>

using namespace std;
int main()
{
	//Declaring an object of type basic_string<char>
	string str1("StringOne");
	string str2("StringTwo"); 
	cout<<"str1 string is = "<<str1<<endl;
	cout<<"str2 string is = "<<str2<<endl;
	//������� ������ � ������� clear
	str1.clear();
	cout << "After str1.clear() " << str1 <<  endl;
    //�������� ���� ��������, ������� � 6
	str2.erase(6);
	cout << "After str2.erase(6) " << str2 <<  endl;
   //������� ������ � ������� erase
	str2.erase();
	cout << "After str2.erase() " << str2 <<  endl;

	return 0;
}
