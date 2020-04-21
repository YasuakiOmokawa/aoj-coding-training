#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};

  auto x = begin(v);
  auto y = x;

  // x, yは0番目の要素を指す

  bool b1 = (x == y);
  bool b2 = (x != y);

  ++x; // 1番目の要素を指す

  bool b3 = (x == y);
  bool b4 = (x != y);

  vector<bool> bv = {b1, b2, b3, b4};

  for (auto a : bv)
  {
    cout << a << endl;
  }
}