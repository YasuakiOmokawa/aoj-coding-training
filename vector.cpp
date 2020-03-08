#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  // item 1,2,3
  vector<int> v = {1, 2, 3};

  auto x = v.at(0); // 1
  auto y = v.at(1); // 2
  auto z = v.at(2); // 3

  cout << x << y << z << "\n";
}