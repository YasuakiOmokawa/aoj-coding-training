#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  auto cat = "cat";
  auto dog = "dog";

  if (cat < dog)
  {
    cout << "cat is smaller\n";
  }
  else
  {
    cout << "dog is smaller\n";
  }

  auto longcat = "longcat";

  if (longcat > cat)
  {
    cout << "Longcat is long\n";
  }
  else
  {
    cout << "Longcat isn't that long. Sign\n";
  }

}
