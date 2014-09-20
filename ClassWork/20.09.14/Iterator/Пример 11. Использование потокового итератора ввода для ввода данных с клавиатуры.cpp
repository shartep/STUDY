#include <vector>
#include <iterator>
#include <iostream>

using namespace std;
int main()
{
	vector<int> b;
	cout << "Input: " << endl;

	//�������� ������ �� ������
	istream_iterator<int> in(cin);

	//��������, ������������� �� ����� ������ - ���������� �����
	istream_iterator<int> inEnd;

	//���� ������������ �� ��� ���, ���� �� ���������� ������,
	//��������, ��� �������� ������� ������ �����
	copy(in,inEnd,back_inserter(b));
	
	//����� ������ �� �������
	cout << "Data in vector: " << endl;
	ostream_iterator<int> out(cout," ");
	copy(b.begin(),b.end(),out);
	cout << endl;
	return 0;
}
