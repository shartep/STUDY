#include <iterator>
#include <iostream>

using namespace std;
int main()
{
	char a[] = {'a','b','c'};
	//����� ������ �� ����� � �������������� ��������� ������
    //� ����������� ���������� �����, � ������� ����
	//������������ ����� � ����������� 

	//��� �����������
	ostream_iterator<char> out(cout);
	cout << "Without delimeter: " << endl;
	copy(a,a+3,out);
	cout << endl;

	//� �������� ����������� ������������ ���������
    ostream_iterator<char> out1(cout,"\t");
	cout << "Without tab delimeter: " << endl;
    copy(a,a+3,out1);
	return 0;
}
