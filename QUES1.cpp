// Write a C++ program to://
// Take two integers as input from the user and print the larger number.
#include <iostream>
using namespace std;
int main()
{
  int first_num;
  cout << "The first num is: ";
  cin >> first_num;

  int second_num;
  cout << "The second num is ";
  cin >> second_num;

  if (first_num > second_num)
  {
    cout << "The first number is greater which is " << first_num;
  }

  else
  {
    cout << "The second number is greater which is " << second_num;
  }
}