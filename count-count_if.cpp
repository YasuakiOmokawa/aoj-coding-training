#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 1, 1, 3, 3};

  auto a = count(begin(v), end(v), 1);
  cout << a << "\n";

  auto my_count = [](auto first, auto last, auto value) {
    auto counter = 0u;
    for (auto i = first; i != last; ++i)
    {
      if (*i == value)
        ++counter;
    }
    return counter;
  };

  auto b = my_count(begin(v), end(v), 1);
  cout << b << "\n";

  auto count_if = [](auto first, auto last, auto pred) {
    auto counter = 0u;
    for (auto i = first; i != last; ++i)
    {
      if (pred(*i) != false)
        ++counter;
    }
    return counter;
  };

  // expect return 1
  auto count_even = count_if(begin(v), end(v), [](auto x) { return x % 2 == 0; });
  cout << count_even << "\n";
}
