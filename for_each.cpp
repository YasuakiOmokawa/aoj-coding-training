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
  auto call_func = [](auto func) {
    func(123);
    cout << "\n";
  };

  auto print = [](auto x) { cout << x; };

  call_func(print);

  auto for_each = [](auto first, auto last, auto f) {
    for (auto iter = first; iter != last; ++iter)
    {
      f(*iter);
    }
  };

  vector<int> v = {1, 2, 3, 4, 5};

  auto print_value = [](auto value) { cout << value; };
  for_each(begin(v), end(v), print_value);
  cout << "\n";

  auto print_twice = [](auto value) { cout << 2 * value; };
  for_each(begin(v), end(v), print_twice);
  cout << "\n";

  auto print_with_newline = [](auto value) { cout << value << "\n"; };
  for_each(begin(v), end(v), print_with_newline);
}