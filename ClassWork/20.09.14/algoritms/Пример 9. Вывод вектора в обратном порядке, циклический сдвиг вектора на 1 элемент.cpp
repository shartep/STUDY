#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int ar[] = {1,2,3,4,5,6 };
	vector<int> a(ar, ar + 6);
	cout << "Initial state: "; 
	ostream_iterator<int> out(cout, " ");
	copy(a.begin(),a.end(), out); 
	cout << endl;

	cout << "Reverse order: ";
	reverse_copy(a.begin(),a.end(), out); 
	cout << endl;
	
	//����������� ����� �� ���� �������
	rotate(a.begin(),a.begin() + 1, a.end());
	cout << "Atfer rotate: "; 
	copy(a.begin(),a.end(), out); 
	cout << endl;

	return 0;
}
