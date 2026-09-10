#include <iostream>
using namespace std;

int main()
{
  int arr1[] = {1, 2, 3, 4, 5, 7};
  int arr2[] = {3, 4, 6, 7};

  int n1 = 6;
  int n2 = 4;

  bool found = false;

  for (int i = 0; i < n1; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      if (arr1[i] == arr2[j])
      {
        cout << arr1[i] << " ";
        found = true;
        break;
      }
    }
  }

  if (found == false)
  {
    cout << -1;
  }

  return 0;
}