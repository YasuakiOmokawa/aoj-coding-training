#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;

  for (int iota = 0; iota != 10; ++iota)
  {
    v.push_back(iota);
  }

  for (size_t index = 0; index != v.size(); ++index)
  {
    cout << v.at(index) << " ";
  }
}