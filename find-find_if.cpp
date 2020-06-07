#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};

  auto pos = find(begin(v), end(v), 3);
  cout << *pos << "\n";

  auto no_pos = find(begin(v), end(v), 0);
  if (no_pos != end(v))
  {
    cout << "Found.\n";
  }
  else
  {
    cout << "Not found.\n";
  }

  auto my_find = [](auto first, auto last, auto const &value) {
    for (auto iter = first; iter != last; ++iter)
    {
      if (*iter == value)
        return iter;
    }
    return last;
  };

  auto my_pos = my_find(begin(v), end(v), 2);
  if (my_pos != end(v))
  {
    cout << "Found.\n";
  }
  else
  {
    cout << "Not found.\n";
  }

  // predicate function
  auto pred = [](auto const &value) -> bool {
    return true;
  };

  vector<int> pv = {1, 3, 5, 7, 9, 11, 13, 14, 15, 16};
  auto is_even = [](auto value) {
    return value % 2 == 0;
  };
  auto is_odd = [](auto value) {
    return value % 2 == 1;
  };

  auto even = find_if(begin(pv), end(pv), is_even);
  cout << *even << "\n";
  auto odd = find_if(begin(pv), end(pv), is_odd);
  cout << *odd << "\n";

  auto my_find_if = [](auto first, auto last, auto pred) {
    for (auto iter = first; iter != last; ++iter)
    {
      if (pred(*iter))
        return iter;
    }
    return last;
  };
  auto m_even = my_find_if(begin(pv), end(pv), is_even);
  cout << *m_even << "\n";

  // copy out side of function
  {
    int value = 123;
    auto f = [=] { return value; };
    cout << f() << "\n";
  }

  // reference out side of function
  {
    int value = 123;
    auto f = [&] { ++value; };
    f();
    cout << value << "\n";
  }
}
