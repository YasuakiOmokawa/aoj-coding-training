#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

auto output_all = [](auto first, auto last) {
  for (auto iter = first; iter != last; ++iter)
  {
    cout << *iter << "\n";
  }
};

int main()
{
  // to use this, need to link with "-lstdc++fs"
  experimental::filesystem::directory_iterator first("./"), last;

  output_all(first, last);
}