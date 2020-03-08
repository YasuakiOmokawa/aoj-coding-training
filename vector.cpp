#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int input()
{
  int x{};
  cout << "> ";
  cin >> x;
  return x;
}

int main()
{
  vector<int> v;
  int x{};

  // input
  while ((x = input()) != 0)
  {
    v.push_back(x);
  }

  // output
  for (size_t index = 0; index != v.size(); ++index)
  {
    cout << v.at(index) << " ";
  }
  cout << "\n";
}