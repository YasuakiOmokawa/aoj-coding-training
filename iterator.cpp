#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

auto output_all = [](auto first, auto last, auto output_iter) {
  for (auto iter = first; iter != last; ++iter, ++output_iter)
  {
    *output_iter = *iter;
  }
};

int main()
{
  std::vector<int> v = {1, 2, 3, 4, 5};

  output_all(begin(v), end(v), ostream_iterator<int>(cout));
}