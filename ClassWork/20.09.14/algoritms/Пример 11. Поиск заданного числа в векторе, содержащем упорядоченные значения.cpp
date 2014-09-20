#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int ar[] = {3,2,5,6,1,3,2,5,5,6};
	vector<int> v(ar,ar+10);
	ostream_iterator<int> out(cout," ");

	copy(v.begin(), v.end(), out); 
	cout << endl;
	int n;
	cout << "Number to search ";
	cin >> n;
	sort(v.begin(), v.end());
	if (binary_search(v.begin(), v.end(), n)) 
		cout << "The number " << n << " is present" << endl;
	else
		cout << "The number " << n << " is not present" << endl;

	return 0;
}
