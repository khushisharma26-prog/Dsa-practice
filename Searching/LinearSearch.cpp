#include <iostream>
using namespace std;

int main()
{
  int arr[9] = {10, 20, 24, 78, 24, 20, 10, 67, 78};

  int ans = 0;

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    ans = ans ^ arr[i];
  }

  cout << "Unique element is: " << ans;
}