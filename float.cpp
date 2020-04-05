#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  cout << "float: " << numeric_limits<float>::epsilon() << "\n"
       << "double: " << numeric_limits<double>::epsilon() << "\n"
       << "long double: " << numeric_limits<long double>::epsilon() << "\n";
}