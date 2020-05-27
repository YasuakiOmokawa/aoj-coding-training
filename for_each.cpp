#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};

  for (
      auto i = begin(v),
           j = end(v);
      i != j;
      ++i)
  {
    cout << *i;
  }
}