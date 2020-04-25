#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};

  auto i = end(v);

  cout << "next of end -> " << *i << "\n";

  for (auto a : v)
  {
    cout << a << endl;
  }

  cout << "check that next of end\n";
  --i;
  cout << "before -> " << *i << "\n";
  ++i;
  cout << "next -> " << *i << "\n";
}