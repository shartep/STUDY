#include <string>
#include <iostream>
using namespace std;
int main()
{
	string str1;
	const char *str2 = "StRiNg assign()";
	cout<<"str2, C string is: "<<str2<<endl;
	//���������� C ������
	str1.assign(str2);
	cout<<"Operation: str1.assign(str2) Result: "<<str1<<"\n\n";

	//���������� 11 �������� �� C ������
	string str3;
	const char *str4 = "Another StRiNg assign()";
	cout<<"str4 C string is: "<<str4<<endl;
	str3.assign(str4, 11);
	cout<<"Operation: str3.assign(str4, 11) Result: "<<str3<<"\n\n";
	
	//���������� 6 �������� ������ basic_string, ������� � 7-�� �������
	string str5("First "), str6("Second sTrInG");
	cout<<"str5 string is: "<<str5<<endl;
	cout<<"str6 string is: "<<str6<<endl;
	str5.assign(str6, 7, 6);
	cout<<"Operation: str5.assign(str6, 7, 6) Result: "<<str5<<"\n\n";
	
	
	//���������� 3 �������� !
	string str10("Working STrInG");
	cout<<"\nstr10 string is: "<<str10<<endl;
	str10.assign(3, '!');
	cout<<"Operation: str10.assign(3, '!')"<<str10<<endl;
	
	return 0;
}
