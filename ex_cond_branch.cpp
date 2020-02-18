#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  auto a = 12345 + 6789;
  auto b = 8073 * 132 / 5;

  if (a < b)
  {
    cout << b << " is b\n";
  }
  else
  {
    cout << a << "is a\n";
  }
}
