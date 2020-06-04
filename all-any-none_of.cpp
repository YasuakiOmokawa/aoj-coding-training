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

  // any_of
  vector<int> v2 = {1, 2, 3, 4, 5};
  bool has_3 = any_of(begin(v2), end(v2), [](auto x) { return x == 3; });
  cout << has_3 << "\n";

  bool has_10 = any_of(begin(v2), end(v2), [](auto x) { return x == 10; });
  cout << has_10 << "\n";

  // hand-made any_of
  auto any_of2 = [](auto first, auto last, auto pred) {
    for (auto iter = first; iter != last; ++iter)
    {
      if (pred(*iter))
        return true;
    }
    return false;
  };

  // test
  bool has_11 = any_of2(begin(v2), end(v2), [](auto x) { return x == 11; });
  cout << has_11 << "\n";
};