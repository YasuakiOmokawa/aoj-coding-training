#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  // 複合文開始
  {
    cout << "hello\n";
    cout << "hello\n";
  }
  // 複合文終了

  // 別の複合文
  {
    cout << "world\n";
  }

  // 空の複合文
  {
  }
}