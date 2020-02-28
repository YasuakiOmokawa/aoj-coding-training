#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  auto hello = []() { cout << "hello\n"; };

  while (true)
    hello();
}