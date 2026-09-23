#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n = 20;

  // Find integer part
  int start = 0;
  int end = n;
  int ans = 0;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (1LL * mid * mid <= n)
    {
      ans = mid;
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }

  // Now ans = integer part
  double root = ans;

  // Find decimal part
  double increment = 0.1;

  for (int i = 0; i < 3; i++)
  {
    while (root * root <= n)
    {
      root += increment;
    }

    root -= increment;
    increment /= 10;
  }

  cout << fixed << setprecision(3) << root;

  return 0;
}