#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  auto x = 0;
  {
    auto x = 1;
    {
      auto x = 2;
      // 2
      std::cout << x << "\n";
    }
    // 1
    std::cout << x << "\n";
    x = 42;
    // 42
    std::cout << x << "\n";
  }
  // 0
  std::cout << x << "\n";
}