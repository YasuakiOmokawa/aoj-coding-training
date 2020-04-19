#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};

  auto i = begin(v);

  int x = *i;
  cout << x << "\n";

  *i = 0;

  for (auto a : v)
  {
    cout << a << endl;
  }
}