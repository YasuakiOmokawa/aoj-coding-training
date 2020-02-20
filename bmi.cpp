#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  // 身長
  double height{};
  cout << "height<m>";
  cin >> height;

  // 体重
  double mass{};
  cout << "mass<kg>";
  cin >> mass;

  // BMIの計算
  double bmi = mass / (height * height);

  // BMIの出力
  std::cout << "BMI=" << bmi << "\n";

  // 状態の判定をする関数
  auto status = [](double bmi) {
    if (bmi < 18.5)
      return "Underweight.\n";
    else if (bmi < 25.0)
      return "Normal.\n";
    else if (bmi < 30.0)
      return "Overweight.\n";
    else
      return "Obese.";
  };

  // 状態の出力
  std::cout << status(bmi);
}