#include <iostream>
using namespace std;

int main()
{
  int arr[] = {12, 23, 7, 23, 89, 23};
  int target = 23;
  int count = 0;

  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    if (arr[i] == target)
    {
      count++;
    }
  }

  if (count > 0)
  {
    cout << target << " occurs " << count << " times";
  }
  else
  {
    cout << "Element not found.";
  }

  return 0;
}