#include <string>
#include <iostream>
using namespace std;
int main( )
{
	//���������� �������� ���� basic_string<char>
	string str1("red");
	string str2("blue");
	cout<<"str1 string is = "<<str1<<endl;
	cout<<"str2 string is = "<<str2<<endl;
	//���������� ������ � ����� C
	char *str3 = "red";
	cout<<"C-style str3 string is = "<<str3<<endl;

	//�������� !=
	//����� � ������ �� ��������� != ������� basic_string
	cout<<"Operation: (str1 != str2) Result: "<<boolalpha<<(str1 != str2)<<endl; 
	
	//����� - ������ � ����� C, ������ - ������ ���� basic_string
	cout<<"Operation: (str3 != str2) Result: "<<boolalpha<<(str3 != str2)<<endl;

	//����� - ������ ���� basic_string, ������ - ������ � ����� C
	cout<<"Operation: (str1 != str3) Result: "<<boolalpha<<(str1 != str3)<<endl;

	//�������� ==
	//����� � ������ �� ��������� == ������� basic_string
	cout<<"Operation: (str1 == str2) Result: "<<boolalpha<<(str1 == str2)<<endl;

	//����� - ������ � ����� C, ������ - ������ ���� basic_string
	cout<<"Operation: (str3 == str2) Result: "<<boolalpha<<(str3 == str2)<<endl;

	//����� - ������ ���� basic_string, ������ - ������ � ����� C
    cout << "Operation: (str1 == str3) Result: "<<boolalpha<<(str1 == str3)<<endl;

	//���������� �������� ���� basic_string<char>
	string str4("testingthree");
	string str5("testingtwo");
	string str6("testingtwo");
	cout<<"str4 is = "<<str4<<endl;
	cout<<"str5 is = "<<str5<<endl;
	cout<<"str6 is = "<<str6<<endl;

	//��������� <, >, <=, >=	
	cout<<"Operation: (str4 < str5) Result: "<<boolalpha<<(str4 < str5)<<endl;
	cout<<"Operation: (str4 > str5) Result: "<<boolalpha<<(str4 > str5)<<endl;
	cout<<"Operation: (str5 > str6) Result: "<<boolalpha<<(str5 > str6)<<endl;
	cout<<"Operation: (str5 < str6) Result: "<<boolalpha<<(str5 < str6)<<endl;
	cout<<"Operation: (str5 >= str6) Result: "<<boolalpha<<(str5 >= str6)<<endl;
	cout<<"Operation: (str5 <= str6) Result: "<<boolalpha<<(str5 <= str6)<<endl;

    return 0;
}
