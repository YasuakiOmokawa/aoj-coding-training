#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;

int main()
{
  // int R[MAX], n;

  // cin >> n;
  // for (int i = 0; i < n; i++) cin >> R[i];
  auto calc = [](int x, int y) {
    return x + y;
  };

  cout << calc(1, 2) << "\n";
}