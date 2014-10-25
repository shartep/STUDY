#include <iostream>
#include <list>
using namespace std;

int main()
{
	//��������� ������������� �������
	int ar[] = {1,2,3};
	list<int> a(ar,ar+3);

	int br[] = {11,12,13};
	list<int> b(br,br+3);

	list<int> c(3,20);

	int dr[] = {31,32,33}; 
	list<int> d(dr,dr+3);

	//����� ���������� ���������
	list<int>::iterator it;
	cout << "Initial state: " << endl;
	cout << "list a: ";
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;
	cout << "list b: ";
	for(it = b.begin(); it != b.end(); it++) cout << *it << " ";
	cout << endl;
	cout << "list c: ";
	for(it = c.begin(); it != c.end(); it++) cout << *it << " ";
	cout << endl;
	cout << "list d: ";
	for(it = d.begin(); it != d.end(); it++) cout << *it << " ";
	cout << endl;

	//����������� ��������� ������ b � ������ �
	a.splice(a.begin(),b);
      cout << endl << "After splice b into a: " << endl;
      cout << "list a: ";
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;
	cout << "list b: ";
	for(it = b.begin(); it != b.end(); it++) cout << *it << " ";
	cout << endl;

	//����������� 1-��� �������� ������ c � ������ a
      a.splice(a.begin(),c,c.begin());
	cout << endl << "After splice first element from list c: " << endl;
      cout << "list a: ";
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;

	//����������� ��������� ��������� ������ d � ������ a
      a.splice(a.begin(),d,++d.begin(),d.end());
	cout << endl << "After splice a range from list d: " << endl;
      cout << "list a: ";
	for(it = a.begin(); it != a.end(); it++) cout << *it << " ";
	cout << endl;
      return 0;
}
