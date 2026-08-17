#include <iostream>
using namespace std;

int main()
{
  int G;
  int n = 17;
  int attempts = 0;
  cout << "Guess the number : ";
  cin >> G;

  if (G == n)
  {
    cout << " Congratulations! You guessed it.";
  }

  else if (G < n)
  {
    cout << "Too Low" << endl;
    cout << "Guess Again: ";
    cin >> G;
  }

  else
  {
    cout << " Too High";
  }
}
