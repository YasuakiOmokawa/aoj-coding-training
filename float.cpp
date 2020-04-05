#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  cout << "float: " << numeric_limits<float>::digits10 << "\n"
       << "double: " << numeric_limits<double>::digits10 << "\n"
       << "long double: " << numeric_limits<long double>::digits10 << "\n";
}