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
}