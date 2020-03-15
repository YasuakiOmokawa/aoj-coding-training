#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector<int> v = {8, 3, 7, 4, 2, 9, 3};
  size_t size = v.size();

  // 先頭をずらすループ
  for (size_t head = 0; head != size; ++head)
  {
    size_t min = head;
    // 現在の要素の範囲から最小値を見つけるループ
    for (size_t index = head + 1; index != size; ++index)
    {
      if (v.at(index) < v.at(min))
        min = index;
    }

    cout << v.at(min) << " ";

    // 最小値を先頭と交換
    auto temp = v.at(head);
    v.at(head) = v.at(min);
    v.at(min) = temp;
  }

  // 実行したあと
}