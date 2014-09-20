#include <list>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <ctime>

using namespace std;
int main()
{
	list<int> b;
    int val;
	list<int>::iterator pb;

	srand(time(NULL));
	for(int i = 0; i < 10; i++) 
		b.push_back(rand()%10);
		
	for(pb = b.begin(); pb != b.end(); pb++) 
		cout << *pb << " ";
	cout << endl;
	//���� �������� ��� ������
	cout << "Element to find - ";
	cin >> val;
	//����� �������� � �������� ���������
	pb = find(b.begin(),b.end(),val);
	if (pb != b.end())
	{
		//���������� ���������� �� ������ ������ �� ���������� ��������
		cout << "Position of element is " << (int)distance(b.begin(),pb) << endl;
	}
	else
	{
		cout << "Element not found" << endl;
	}
	
	return 0;
}

