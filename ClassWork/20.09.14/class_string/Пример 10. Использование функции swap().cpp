#include <string>
#include <iostream>

using namespace std;
int main()
{
	string str1("StringOne");
	string str2("StringTwo"); 
	cout<<"Before swapping string str1 and str2:"<<endl;
	cout<<"str1 string is = "<<str1<<endl;
	cout<<"str2 string is = "<<str2<<endl;
	//����� �������� ����� � ������� ������� swap
	swap(str1, str2);
	cout<<"\nOperation: swap(str1, str2)"<<endl;
	cout<<"After swapping string str1 and str2:"<<endl;
	cout<<"str1 string is = "<<str1<<endl;
	cout<<"str2 string is = "<<str2<<endl;
	return 0;
}
