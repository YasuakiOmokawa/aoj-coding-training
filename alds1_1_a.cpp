#include <iostream>
#include <algorithm>
using namespace std;

auto print_value = [](auto array, int n) {
  for (int i = 0; i < n; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
};

int main()
{
  int n;
  cin >> n; // 配列の要素数nを代入

  int A[n];
  for (int i = 0; i < n; i++)
    cin >> A[i]; // 入力値を配列Aへ代入

  print_value(A, n); // check

  for (int i = 1; i < n - 1; i++)
  {
    int v = A[i];
    int j = i - 1;
    while (j >= 0 && A[i] > v)
    {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;
    print_value(A, n); // check
  }

  print_value(A, n); // check

  return 0;
}
