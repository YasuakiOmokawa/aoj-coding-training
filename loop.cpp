#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a = 1;
  while (a <= 9)
  {

    int b = 1;
    while (b <= 9)
    {
      cout << a * b << "\t";
      ++b;
    }
    cout << "\n";
    ++a;
  }
}