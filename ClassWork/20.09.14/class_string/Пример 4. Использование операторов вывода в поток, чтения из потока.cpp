#include <string>
#include <iostream>
using namespace std;
int main()
{
	string Sample = "Testing the << and >> operators.";
	string Var1, Var2;
	cout<<Sample<<endl;
	cout<<"Enter a string or a word: ";
	getline(cin,Var1,'\n');
	cout<<"Enter another string or a word: ";
	cin>>Var2;
	cout<<"The strings entered are: "<<Var1<<" and "<<Var2<<endl;
	return 0;
}
