#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
	//�������� ������� �������
	vector<int> a;
	//���������� ������� ����������
	for(int i = 0; i < 10; i++)
	a.push_back(i);

	//�����  ��������
	ostream_iterator<int, char> out(cout," ");
	cout << "Initial state: "; 
	copy(a.begin(), a.end(),out); 
	cout << endl;

	//�������� ���������� �������� �������
    a.pop_back();
    cout << "After delete last element: "; 
	copy(a.begin(), a.end(),out); 
    cout << endl;

	//�������� 2-��� ��������
    a.erase(a.begin() + 1);
    cout << "After delete 2-nd element: "; 
	copy(a.begin(), a.end(),out); 
    cout << endl;

	//�������� ��������� �� 3-� ��������� ���������
    a.erase(a.end()-3, a.end());
    cout << "After delete three last element: "; 
	copy(a.begin(), a.end(),out); 
    cout << endl;

  return 0;
}
