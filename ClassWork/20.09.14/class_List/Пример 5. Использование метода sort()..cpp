#include <iostream>
#include <string>
#include <list>
using namespace std;

bool desc(int a1, int a2)
{
	return (a1 > a2);
}

int main()
{
	//��������� ������������� ������
      list<int> a;
	for(int i = 0; i < 10; i++) a.push_back(rand()%10);

	//����� ���������� ���������
	list<int>::iterator it;
	cout << "Initial state: " << endl;
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;
	
	//���������� �� ����������� 
	a.sort();
	cout << "After ascending sort: " << endl;
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;

     //���������� �� ��������
	a.sort(desc);
	cout << "After descending sort: " << endl;
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;

	//���������� ������� �����
	string br[] = {"STL","C#","Java","C++"};
	list<string> b(br,br+4);

	//����� ���������� ���������
	list<string>::iterator it1;
	cout << "Initial state: " << endl;
	for(it1 = b.begin(); it1 != b.end(); it1++) cout << *it1 << " ";
	cout << endl;
	
	//���������� �� ����������� 
	b.sort();
	cout << "After ascending sort: " << endl;
	for(it1 = b.begin(); it1 != b.end(); it1++) cout << *it1 << " ";
	cout << endl;
	return 0;
}
