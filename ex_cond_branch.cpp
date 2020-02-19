#include <iostream>
#include <algorithm>
using namespace std;

// ロケットが発射可能かどうかを返す関数
bool is_rocket_ready_to_launch()
{
  // まだだよ
  return false;
}

int main()
{

  // ロケットが発射可能ではないときに実行される
  if (!is_rocket_ready_to_launch())
  { // もうしばらくそのままでお待ちください
    std::cout << "Standby...\n";
  }
}