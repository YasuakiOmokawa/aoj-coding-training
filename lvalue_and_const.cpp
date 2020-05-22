#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

auto swap = [](auto &a, auto &b) {
  auto temp = a;
  a = b;
  b = temp;
};

int main()
{
  int a = 1;
  f(a);
  cout << a << "\n";
}