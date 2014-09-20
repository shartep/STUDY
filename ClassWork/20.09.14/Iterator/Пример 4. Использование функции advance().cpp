#include <list>
#include <iterator>
#include <iostream>

using namespace std;
int main()
{
	list<int> b;

	for(int i = 0; i < 10; i++) 
		b.push_back(i);
	
	list<int>::iterator pb = b.begin();

	//����� ������� ��������
	cout << "First element: " <<*pb <<  endl;

	//����������� �� 3 �������� ������
 	 advance(pb,3);
	 cout << "Move forward on 3 elements: " << *pb <<  endl;

	//����������� �� 1 ������� �����
	advance(pb,-1);
	cout << "Move backword on 1 element: " << *pb <<  endl;
	return 0;
}