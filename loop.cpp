#include <iostream>
#include <algorithm>
using namespace std;

int input()
{
  cout << ">";
  int x{};
  cin >> x;
  return x;
}

int main()
{
  int sum = 0;
loop:
  int x = input();
  if (x != 0)
  {
    sum = sum + x;
    cout << sum << "\n";
    goto loop;
  }
}