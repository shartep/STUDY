#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int number) {
  if (number < 0) return true;
  else return false;
}

int main()
{
	int ar[] = {-1,2,-2,4,6};
	
	vector<int> a = vector<int>(ar, ar+5);
    //����� ���������� ��������� < 0
	cout << "The number of element < 0: " << 
               count_if(a.begin(), a.end(), bind2nd(less<int>(),0)) << endl;
	
	return 0;
}
