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

  
}
