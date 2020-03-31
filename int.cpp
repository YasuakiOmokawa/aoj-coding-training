#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  unsigned int min = numeric_limits<unsigned int>::min();
  unsigned int max = numeric_limits<unsigned int>::max();

  unsigned int min_minus_one = min - 1u;
  unsigned int max_plus_one = max + 1u;

  cout << min << "\n"
       << max << "\n"
       << min_minus_one << "\n"
       << max_plus_one;
}