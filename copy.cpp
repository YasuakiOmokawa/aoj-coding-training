#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

int main()
{
  vector<int> v = {1};
  auto i = begin(v);
  cout << *i;
  *i = 2;
}
