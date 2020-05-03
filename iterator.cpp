#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

auto output_all = [](auto first, auto last) {
  for (auto iter = first; iter != last; ++iter)
  {
    cout << *iter << "\n";
  }
};

int main()
{
  istream_iterator<int> first(cin), last;

  output_all(first, last);
}