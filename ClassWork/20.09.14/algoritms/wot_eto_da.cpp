#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
using namespace std;

void main() {
  string word;
  cin >> word;
  while (next_permutation(word.begin(), word.end()))
    cout << word << "\n";
}