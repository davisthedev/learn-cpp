#include <iostream>

int main() {
  int num1, num2, val;
  std::string symbol;

  std::cout << "Enter first number: ";
  std::cin >> num1;

  std::cout << "Enter second number: ";
  std::cin >> num2;

  std::cout << "Enter symbol (+,-,*,/): ";
  std::cin >> symbol;
  
  std::cout << "Result: ";
  if (symbol == "+") {
    std::cout << num1 + num2 << std::endl;
  } else if (symbol == "-") {
    std::cout << num1 - num2 << std::endl;
  } else if (symbol == "*") {
    std::cout << num1 * num2 << std::endl;
  } else if (symbol == "/" && num1 != 0 && num2 != 0) {
    std::cout << num1 / num2 << std::endl;
  } else {
    std::cout << "Error" << std::endl;
  }

  return 0;
}
