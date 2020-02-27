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
  sum = sum + input();
  cout << sum << "\n";
  goto loop;
}