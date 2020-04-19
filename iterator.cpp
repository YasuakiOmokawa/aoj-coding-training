#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  std::vector<int> v = {1, 2, 3, 4, 5};

  int x = v.at(2);
  v.at(2) = 0;

  cout << v.at(0) << "\n";
}