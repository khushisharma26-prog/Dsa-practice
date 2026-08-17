#include <iostream>
using namespace std;
int main()
{

  int numb;
  cout << "Enter a number: ";
  cin >> numb;

  if (numb > 0)
  {
    cout << "Positive";
  }

  else if (numb < 0)
  {
    cout << "Negative";
  }

  else
  {
    cout << "Zero";
  }
}