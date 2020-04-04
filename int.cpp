#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int x = 123;
  short y = static_cast<short>(x);

  cout << y << "\n";
}