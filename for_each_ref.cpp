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

  auto print_and_twice = [](auto &value) { value = 2 * value; cout << value << "\n"; };

  for_each(begin(v), end(v), print_and_twice);
}