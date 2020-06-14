#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <experimental/filesystem>
using namespace std;

int main()
{
  vector<int> a = {1, 2, 3, 4, 5};
  vector<int> same_a = {1, 2, 3, 4, 5};
  vector<int> diff_a = {1, 2, 3, 4, 5, 6};
  vector<int> diff_a_2 = {1, 2, 2, 4, 6};

  bool true_same = equal(begin(a), end(a), begin(same_a), end(same_a));
  bool false_diff = equal(begin(a), end(a), begin(diff_a), end(diff_a));
  bool false_diff_2 = equal(begin(a), end(a), begin(diff_a_2), end(diff_a_2));

  vector<bool> b_res = {true_same, false_diff, false_diff_2};
  for (const auto &e : b_res)
  {
    cout << e << endl;
  }
}
