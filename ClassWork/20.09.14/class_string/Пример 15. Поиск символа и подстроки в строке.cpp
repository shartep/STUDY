#include <string>
#include <iostream>

using namespace std;
int main()
{
	string s = "I am here. Try to find me.";
	//����� ������� ��������� ������� e
	cout << "s.find('e'): " << s.find('e') << endl;
	//����� ���������� ��������� ������� e
	cout << "s.rfind('e'): " << s.rfind('e') << endl;
	//����� ������� ��������� ������� e ����� 10 ������
	cout << "s.find('e',10): " << s.find('e',10) << endl;
    //����� ������� ��������� ��������� 'am'
	cout << "s.find('am'): " << s.find("am") << endl;
    //����� ������� ��������� ������ ������� �� ��������� 'he'
	cout << "s.find_first_of('he')" << s.find_first_of("he") << endl;
	//����� ���������� ��������� ������ ������� �� ��������� 'he'
	cout << "s.find_last_of('he')" << s.find_last_of("he") << endl;
      //����� �������, ������� � ������ �� ����������
      cout << "s.find('F')" << s.find('F') << endl;
      //�������� ������������� ��������
      if (s.find('F') == s.npos) cout << "Symbol not found" << endl;
	return 0;
}
