#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 1 * 2 * 3 * .. * n を計算するプログラム
int main()
{
  cout << "standard output\n";
  cerr << "standard error output\n";
  int n{};
  cin >> n;
  if (n < 1)
    return -1;

  int sum = 1;
  for (int i = 2; i <= n; ++i)
  {
    sum *= i;

    // debug
    cout << "debug: " << i << ", " << sum << "\n";
    // debug
  }

  cout << sum << "\n";
}