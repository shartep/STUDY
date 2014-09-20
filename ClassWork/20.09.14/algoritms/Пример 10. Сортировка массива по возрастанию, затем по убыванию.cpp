#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int ar[] = {3,2,5,6,1,3,2,5,5,6};
	vector<int> v(ar,ar+10);
	ostream_iterator<int> out(cout," ");

	//���������� �� �����������
	sort(v.begin(),v.end());
	copy(v.begin(), v.end(), out); 
	cout << endl;

	//���������� �� ��������
	sort(v.begin(),v.end(), greater<int>());
	//copy(v.begin(), v.end(), out); 
	cout << endl;
	return 0;
}
