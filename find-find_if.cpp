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
}
