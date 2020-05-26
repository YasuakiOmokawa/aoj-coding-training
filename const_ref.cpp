#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

void f(std::vector<int> const &v) // take prime of constance argument data
{
  cout << v.at(1234) << "\n";
}

int main()
{

  // vector contain 10000 items
  vector<int> v(10000);
  f(v);

  int x = 0;
  x = 1;

  const int y = 0;
  int const z = 0;

  int &ref = x;
  ++ref;

  // ok, enable const
  const int &cref = x;
  const int &const_ref = x;

  // constant type object
  const int w = 0;
  // error, not const
  // int &w_ref = w;
  // ok, with const
  const int &w_cref = w;
}