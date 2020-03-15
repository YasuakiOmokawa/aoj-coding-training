#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {8, 3, 7, 4, 2, 9, 3};
  size_t size = v.size();

  {
    size_t min = 0;

    for (size_t index = 1; index != size; ++index)
    {
      if (v.at(index) < v.at(min))
        min = index;
    }

    cout << v.at(min) << " ";

    // 先頭と交換
  }
}