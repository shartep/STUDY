#include <iostream>
#include <functional>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // ������� ��������
	int ar[] = {20,30,40};
	int br[] = {1,2,3};
	vector<int> a = vector<int>(ar, ar+3);
	vector<int> b = vector<int>(br, br+3);
	ostream_iterator<int> out(cout, " "); 
	cout << "a: "; 
	copy(a.begin(),a.end(),out);
	cout << endl;
	cout << "b: "; 
	copy(b.begin(),b.end(),out); 
	cout << endl;
    // ������������� ��������� ��� ���������� ��������� �������� ��������� ��������
	cout << "use plus<int>(): ";
	transform(a.begin(), a.end(), b.begin(), out, plus<int>()); 
	cout << endl;
    // ������������� ��������� ��� ���������� ��������� ��������� ��������� ��������
    cout << "use minus<int>(): ";
	transform(a.begin(), a.end(), b.begin(), out, minus<int>());  
	cout << endl;
    // ������������� ��������� ��� ���������� ��������� ������� ��������� ��������
	cout << "use devides<int>(): ";
	transform(a.begin(), a.end(), b.begin(), out, divides<int>());  
	cout << endl;
    // ������������� ��������� ��� ���������� ��������� ��������� ��������� ��������
	cout << "use multiplies<int>(): ";
	transform(a.begin(), a.end(), b.begin(), out, multiplies<int>());  
	cout << endl;
	
	return 0;
}
