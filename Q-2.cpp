#include <iostream>
using namespace std;

int main()
{
  int firstNumber, secondNumber;
  char op;

  cout << "Enter first number: ";
  cin >> firstNumber;

  cout << "Enter second number: ";
  cin >> secondNumber;

  cout << "Enter an operator (+, -, *, /, %): ";
  cin >> op;

  if (op == '+')
  {
    cout << "Result = " << firstNumber + secondNumber;
  }
  else if (op == '-')
  {
    cout << "Result = " << firstNumber - secondNumber;
  }
  else if (op == '*')
  {
    cout << "Result = " << firstNumber * secondNumber;
  }
  else if (op == '/')
  {
    if (secondNumber == 0)
    {
      cout << "Cannot divide by zero.";
    }
    else
    {
      cout << "Result = " << firstNumber / secondNumber;
    }
  }
  else if (op == '%')
  {
    if (secondNumber == 0)
    {
      cout << "Cannot divide by zero.";
    }
    else
    {
      cout << "Result = " << firstNumber % secondNumber;
    }
  }
  else
  {
    cout << "Invalid Operator";
  }

  return 0;
}