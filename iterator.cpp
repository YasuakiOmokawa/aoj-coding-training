#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

int main()
{
  std::vector<int> v = {1, 2, 3, 4, 5};

  auto i = begin(v);
  auto j = end(v);

  for (; i != j; ++i)
  {
    cout << *i;
  }
  cout << "\n";
}