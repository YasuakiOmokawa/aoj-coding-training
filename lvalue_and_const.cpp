#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

void f(int &x)
{
  x = 3;
}

int main()
{
  int a = 1;
  f(a);
  cout << a << "\n";
}