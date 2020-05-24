#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

auto swap2 = [](auto &a, auto &b) {
  auto temp = a;
  a = b;
  b = temp;
};

int main()
{
  int a = 1;
  int b = 100;
  swap(a, b);
  cout << a << "\n";
  cout << b << "\n";
}