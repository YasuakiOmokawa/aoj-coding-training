#include <iostream>
#include <algorithm>
using namespace std;

// 1,0のみを使った10進数から
// 2進数へ変換する関数
int solve(int n)
{
  // 1桁の場合
  if (n <= 1)
  {
    return n; // 単に返す
  }
  else
  {
    return n % 10 + 2 * solve(n / 10);
  }
};

int convert(int n)
{
  if (n > 0)
    return solve(n);
  else
    return -solve(-n);
};

int input()
{
  cout << "> ";
  int x{};
  cin >> x;
  return x;
}

void output(int binary)
{
  cout << binary << "\n";
}

int main()
{
  while (true)
  {
    auto decimal = input();
    auto binary = convert(decimal);
    output(binary);
  }
}