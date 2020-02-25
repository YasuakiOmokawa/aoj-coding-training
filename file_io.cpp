#include <iostream>
#include <algorithm>
using namespace std;

// bmi
int main()
{
  double height{};
  double mass{};

  cin >> height >> mass;

  cout << height / 100.0 << "\n"
       << mass;
}