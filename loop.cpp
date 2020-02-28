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
  int x{};

  while ((x = input()) != 0)
  {
    sum += x;
    cout << sum << "\n";
  }
}