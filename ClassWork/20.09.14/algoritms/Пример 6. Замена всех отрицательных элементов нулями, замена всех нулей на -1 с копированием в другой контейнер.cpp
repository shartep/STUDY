#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>


using namespace std;

int rangeRand()
{
	return rand()%30 - 10;
}
int main()
{
	vector<int> a(10);
	generate(a.begin(), a.end(),rangeRand);
	ostream_iterator<int> out(cout, " ");
	cout << "Initial state: "; 
	copy(a.begin(),a.end(), out); cout << endl;

	//������ ���� ������������� ��������� �� 0 � ��� �� �������
	replace_if(a.begin(), a.end(), bind2nd(less<int>(),0),0);
	cout << "After set negative to 0: ";
      copy(a.begin(),a.end(), out); cout << endl;

	//������ ����  ��������� �� ��������� 0 �� -1 � ������������ � ������ ������
      //���������� �������� ������� � �����, �.�. ������ b ���������� ������
	vector<int> b;
	replace_copy(a.begin(), a.end(), back_inserter(b), 0,-1);
	cout << "Copy in b and replace 0 with -1: ";
      copy(b.begin(),b.end(), out); cout << endl;
	return 0;
}
