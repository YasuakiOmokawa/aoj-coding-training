#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

auto output_all = [](auto first, auto last) {
  for (auto iter = first; iter != last; ++iter)
  {
    cout << *iter << "\n";
  }
};

int main()
{
  istreambuf_iterator<int> first(cin), last;

  output_all(first, last);
}