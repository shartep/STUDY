#include <iostream>
#include <list>
using namespace std;

int main()
{
	//�������� ������� ������
	list<int> a;
	list<int>::iterator it;

	//������� ��������� � ����� ������
	for(int i = 0; i < 10; i++)	a.push_back(i);
	
	//�����  ������ � ������� ���������
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;
	a.clear();

	//������� ��������� � ������ ������
	for(int i = 0; i < 10; i++)	a.push_front(i);
	//�����  ������ � ������� ���������
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;
    
	//������� �������� ����� 1-��� �������� ������
	a.insert(++a.begin(), 20);
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;

	//������� ��������� ��������� ����� ��������� ��������� ������
	int ar[] = {30,31,32};
	a.insert(--a.end(),ar,ar+3);
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;

  return 0;
}
