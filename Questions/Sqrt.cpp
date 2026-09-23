#include <iostream>
using namespace std;
int mySqrt(int x)
{
  int start = 0;
  int end = x;
  int ans = 0;

  while (start <= end)
  {
    double mid = (start + end) / 2;

    if (mid * mid == x)
    {
      return mid;
    }

    else if (mid * mid < x)
    {
      ans = mid;
      start = mid + 1;
    }

    else
    {
      end = mid - 1;
    }
  }

  return ans;
}
int main()
{
  int x;
  cin >> x;
  cout << mySqrt(x);
  return 0;
}