#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	int ar[] = {-1, 2, -8, 4, 6, 2, 2, 5};
	int* a = ar; 
	ostream_iterator<int> out(cout, " ");
	copy(ar,ar + 8, out);
	cout << endl << "Positions of number 2: " << endl;
	do
	{
		a = find(a,ar + 8, 2);
		if (a != ar + 8) 
		{
			cout << a - ar << " ";
			a++;
		}
		else break;
	}
	while(true);
	cout << endl;

	return 0;
}
