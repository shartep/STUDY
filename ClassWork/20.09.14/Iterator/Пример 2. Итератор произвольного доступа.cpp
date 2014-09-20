#include <vector>
#include <iostream>

using namespace std;
int main()
{
	vector<int> b;
    vector<int>::iterator pb;

	for(int i = 0; i < 3; i++) 
		b.push_back(i);
	
	//�������� ������������� �������
	//��������� ���������� � ���������� ���������� �� �������
	for(int i = 0; i < (int)b.size(); i++) 
		cout << b[i] << " ";
	cout << endl;

	//�������� ������������ ���������, �������� � ������
	for(pb = b.begin(); pb < b.end(); pb+=1) 
		cout << *pb << " ";
	cout << endl;

	//����� ���������� ��������� ��� ��������� ����� �����������
	cout << "Vector contains " << (int)(b.end() - b.begin()) << " elements" << endl;
	return 0;
}
