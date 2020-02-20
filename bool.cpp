#include <iostream>
#include <algorithm>
using namespace std;

// C++では、bool型と整数型の変換は暗黙に行われてしまうので注意が必要
int main()
{
  cout << boolalpha;
  bool b = true < false;
  cout << b << "\n";
}