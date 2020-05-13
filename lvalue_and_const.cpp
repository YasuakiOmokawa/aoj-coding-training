#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

void assign_3(int x)
{
  x = 3;
}

int main()
{
  int a = 1;
  assign_3(a);
}