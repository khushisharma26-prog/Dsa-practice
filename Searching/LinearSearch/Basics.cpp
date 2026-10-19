#include <iostream>
using namespace std;

int main()
{

  int arr[] = {12, 45, 7, 23, 89, 34};
  int target = 23;
  bool found = false;

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    if (arr[i] == target)
    {
      cout << "Element found at index : " << i;
      found = true;
      break;
    }
  }

  if (!found)
  {
    cout << "Element not Found.";
  }

  return 0;
}
