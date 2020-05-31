#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};

  for_each(begin(v), end(v), [](auto value) { cout << value; });
}