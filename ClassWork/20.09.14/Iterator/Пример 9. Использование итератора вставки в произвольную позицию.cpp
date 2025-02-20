#include <vector>
#include <iterator>
#include <iostream>

using namespace std;
int main()
{
	vector<char> b;
	vector<char>::iterator pb;
	char ar[] = {'a','b','c'};
	
	//�������� ��������� ������� � ������������ �������
	//� ����������� ���������� ��������� � ��������� ������� �������
	insert_iterator<vector<char> > bi(b,b.begin());
	
	//������� ��������� �  ���������
	*bi = 'A'; bi++;
	*bi = 'B'; bi++;
	*bi = 'C'; 
	
	cout << "Initial list: " << endl;
	for(pb = b.begin(); pb != b.end(); pb++) cout << *pb << " ";
	cout << endl;

	//����������� ������ � ������� ��������� �������:
	copy(ar,ar+3,inserter(b,b.begin() + 2));

      cout << "After insert: " << endl;
	for(pb = b.begin(); pb != b.end(); pb++) cout << *pb << " ";
	cout << endl;
	
	//���������� 2 ��������� � �������������� ������� front_inserter
	inserter(b,b.begin()) = '1';
	inserter(b,b.begin() + 4) = '2';
	cout << "Add some new data: " << endl;
	for(pb = b.begin(); pb != b.end(); pb++) cout << *pb << " ";
	cout << endl;

	return 0;
}
