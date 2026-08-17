#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  unsigned int num = n;

  for (int i = 7; i >= 0; i--)
  {
    cout << ((num >> i) & 1);
  }

  cout << endl;
}
