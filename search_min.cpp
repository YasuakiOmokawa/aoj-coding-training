#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {8, 3, 7, 4, 2, 9, 3};
  size_t size = v.size();

  for (size_t head = 0; head != size; ++head)
  {
    // 現在の先頭であるmin番目を、仮の最小の要素とみなすのでhead
    size_t min = head;

    // 現在の先頭の次の要素から探すので、head + 1
    for (size_t index = head + 1; index != size; ++index)
    {
      if (v.at(index) < v.at(min))
        min = index;
    }

    cout << v.at(min) << " ";

    // 先頭と交換
  }
}