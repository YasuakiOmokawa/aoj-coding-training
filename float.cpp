#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  double a = 1.233456789;

  // 変換
  float b = a;
  // 変換
  long double c = a;

  cout << a << " " << b << " " << c << "\n";
}