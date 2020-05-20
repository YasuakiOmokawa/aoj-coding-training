#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

int main()
{
  int a = 1;
  int &ref = a;

  ref = 3;

  cout << a << "\n";
  cout << ref << "\n";
}