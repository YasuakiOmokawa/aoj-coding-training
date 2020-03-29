#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int a = 123;
  int b = 0;
  int c = -123;
  auto d = 123u;
  long aa = 1;
  unsigned long ab = 1;
  auto ac = 1'000'000'000;
  auto ad = 123l;
  auto ae = 123ul;
  auto af = 123ull;
  // cout << sizeof(af) << "\n";

  auto print = [](std::size_t s)
  { cout << s << "\n"; };

  print(sizeof(char));
  print(sizeof(short));
  print(sizeof(int));
  print(sizeof(long));
  print(sizeof(long long));

  
}