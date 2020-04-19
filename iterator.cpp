#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};

  auto i = begin(v);

  cout << *i; // dereference?
  ++i;
  cout << *i;
  ++i;
  cout << *i;

  for (auto a : v)
  {
    cout << a << endl;
  }
}