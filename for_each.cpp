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
  auto print = [](auto x) { cout << x; };

  print(123);
}