#include <iostream>
#include <list>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
	int ar[] = {10,12,8};
	list<int> a = list<int>(ar, ar+3);
	list<int>::iterator it;
	
	//����� ������
	cout << "Initial state: " << endl;
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";

	//�� ��������� ������������ less<int>(), ����������� ���������� �� �����������
	a.sort();
	cout << endl << "Sort with default criteria: " << endl;
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";

	//����� ������� �������� ��� ����������: ������� greater<int>()
      //������������ ���������� �� ��������
	a.sort(greater<int>());
	cout << endl << "Sort with greater<int> criteria: " << endl;
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";

	//��������� ����� ���� ��������� ������
	transform(a.begin(),a.end(),a.begin(),negate<int>());
	cout << endl << "After negate: " << endl;
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;
	return 0;
}
