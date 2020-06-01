#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

int main()
{
  auto is_all_of_odd = [](auto first, auto last) {
    return all_of(first, last, [](auto value) { return value % 2 == 0; });
  };

  auto is_all_of_le_100 = [](auto first, auto last) {
    return all_of(first, last, [](auto value) { return value <= 100; });
  };

  vector<int> v;

  bool b = all_of(begin(v), end(v), [](auto value) { return false; });
  cout << b << "\n";
};