#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

auto print_all = [](auto first, auto last) {
  for (auto iter = first; iter != last; ++iter)
  {
    cout << *iter;
  }
};

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};

  print_all(begin(v), end(v));
}