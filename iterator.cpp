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
  vector<int> v = {1, 2, 3, 4, 5, 6};

  output_all(begin(v), end(v));
}