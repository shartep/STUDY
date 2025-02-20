#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int ar[] = {1,0,2,0,3,0,4 };
	vector<int> a(ar,ar+7);
	ostream_iterator<int> out(cout, " ");
	cout << "Initial state: "; 
	copy(a.begin(),a.end(), out); cout << endl;

	//�������� ��������� �� ��������� 0
	//�������� end() �� ������������, ������� ��� ������ 
	//������������ 	������ ��������
	vector<int>::iterator it;
	it = remove(a.begin(), a.end(),0);
	cout << "After remove 0: "; 
	copy(a.begin(),a.end(), out); 
	cout << endl;

	//����������� ��������� end()  � ����� ����� ����������
	cout << "After correct end: "; 
	a.erase(it,a.end());
	copy(a.begin(),a.end(), out); 
	cout << endl;

	return 0;
}
