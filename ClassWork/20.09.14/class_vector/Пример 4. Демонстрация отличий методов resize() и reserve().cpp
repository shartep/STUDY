#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
	int ar[4] = {1,2,3,4};
   //�������� �������, ����������� 3 ������ �������� �������
	vector<int> a(ar, ar+3);
  
	//�����  ��������
	ostream_iterator<int, char> out(cout," ");
	cout << "Vector a: "; 
	copy(a.begin(), a.end(),out); 
	cout << endl;
	//����� ������� � ������� �������
	cout<<"Vector size: "<<a.size()<<" Vector capacity: "<<a.capacity()<< endl;

	//��������� ������� �������
	a.resize(4);
	cout << "Vector a: "; 
	copy(a.begin(), a.end(),out); 
	cout << endl;
	cout<<"Vector size: "<<a.size()<<" Vector capacity: "<<a.capacity()<< endl;

	//���������� ��������������
	a.reserve(5);
	cout << "Vector a: "; 
	copy(a.begin(), a.end(),out); 
	cout << endl;
	cout<<"Vector size: "<<a.size()<<" Vector capacity: "<<a.capacity()<< endl;

	return 0;
}


