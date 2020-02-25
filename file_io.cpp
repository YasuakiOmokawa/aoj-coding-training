#include <iostream>
#include <algorithm>
using namespace std;

// bmi
int main()
{
  double height{};
  double mass{};

  cin >> height >> mass;

  cout << mass / (height * height) << "\n";
}