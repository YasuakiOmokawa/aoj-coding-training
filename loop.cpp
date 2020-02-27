#include <iostream>
#include <algorithm>
using namespace std;

void hello_n(int n)
{
  if (n < 0)
  {
    return;
  }

  int i = 0;
loop:
  if (i != n)
  {
    cout << "hello\n";
    i++;
    goto loop;
  }
};

int main()
{
  int n{};
  cin >> n;
  hello_n(n);
}