#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  cout << boolalpha;
  auto print = [](auto b) {
    cout << b << "\n";
  };

  print(false && false);
  print(false && true);
  print(true && false);
  print(true && true);
}