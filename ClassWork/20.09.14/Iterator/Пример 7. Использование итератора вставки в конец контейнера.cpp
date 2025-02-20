#include <list>
#include <iterator>
#include <iostream>

using namespace std;
int main()
{
	list<int> b;
	list<int> b1;
	list<int>::iterator pb;
	
	//�������� ��������� ������� � ����� ����������
	//� ����������� ���������� ���������
	back_insert_iterator<list<int> > bi(b);
	back_insert_iterator<list<int> > bi1(b1);

	//������� ��������� � ����� ����������
	for(int i = 0; i < 10; i++, bi++) *bi = i;
	
	cout << "Initial list: " << endl;
	for(pb = b.begin(); pb != b.end(); pb++) cout << *pb << " ";
	cout << endl;

	//copy(b.begin(),b.end(),b1.end());
	//���� ����� �������� � ������ ������� ����������, �.�. ������� �������� 
      //�� ��������� ��������� ���������
	//��� ����� ������� � ������� ��������� �������:
	copy(b.begin(),b.end(),bi1);

      cout << "Copy of list: " << endl;
	for(pb = b1.begin(); pb != b1.end(); pb++) cout << *pb << " ";
	cout << endl;
	
	//���������� 2 ��������� � �������������� ������� back_inserter
	back_inserter(b1) = 11;
	back_inserter(b1) = 12;
	cout << "Add some new data: " << endl;
	for(pb = b1.begin(); pb != b1.end(); pb++) cout << *pb << " ";

	return 0;
}
