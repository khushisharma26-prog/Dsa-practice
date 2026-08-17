#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  cout << "THIS IS THE CORRECT FILE" << endl;
  int n;
  cin >> n;

  int ans = 0;
  int i = 0;

  while (n != 0)
  {
    int bit = n & 1;
    ans = (bit * round(pow(10, i))) + ans;

    n = n >> 1;
    i++;
  }

  cout << "Answer is " << ans << endl;
}