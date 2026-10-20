#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 6, 5};
  int target = 5;
  int low = 0;
  int high = 0;

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    int mid = (low + high) / 2;

    if (arr[mid] == target)
    {
    }
  }
}