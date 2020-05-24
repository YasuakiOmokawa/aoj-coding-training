#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

int main()
{
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
  int &w_ref = w;
  // ok, with const
  const int &w_cref = w;
}