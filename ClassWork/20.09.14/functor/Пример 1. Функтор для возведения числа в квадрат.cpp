#include <iostream>
using namespace std;

//�����, � ������� ���������� �������� ()
class square
{
 public:
	int operator() (int a) {return a*a;}
};

int main()
{
	//���������� ��������
	square sq;
	//������������� ��������
	cout << sq(5);
	return 0;
}