#include <iostream>
using namespace std;

int main()
{
  int arr[] = {2, 7, 8, 6, 3, 1};
  int n = 6;
  int target = 9;

  bool found = false;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (arr[i] + arr[j] + arr[k] == target)
        {
          cout << arr[i] << arr[j] << arr[k] << endl;
          found = true;
        }
      }
        }
  }

  if (found == false)
  {
    cout << -1;
  }

  return 0;
}