#include <iostream>
using namespace std;

int findPivot(int arr[], int n)
{
  int start = 0;
  int end = n - 1;

  while (start < end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] >= arr[0])
    {
      // Pivot is on the right
      start = mid + 1;
    }
    else
    {
      // Pivot is at mid or on the left
      end = mid;
    }
  }

  return start;
}

int main()
{
  int arr[7] = {4, 5, 6, 7, 2, 3};

  int pivot = findPivot(arr, 6);

  cout << "Pivot element = " << arr[pivot];

  return 0;
}