#include <iostream>
#include <algorithm>
using namespace std;

auto print_value = [](auto value) { cout << value; };

int main()
{
  int n;
  cin >> n; // 配列の要素数nを代入

  int A[n];
  for (int i = 0; i < n; i++)
    cin >> A[i]; // 入力値を配列Aへ代入

  for (int i = 1; i < n - 1; i++)
  {
    cout << A[i] << "\n";
  }

  return 0;
}
