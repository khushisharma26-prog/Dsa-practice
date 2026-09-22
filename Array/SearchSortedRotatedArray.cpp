#include <iostream>
using namespace std;

int Search(int arr[], int n, int target)
{
  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }

    else if (arr[mid] >= arr[start])
    {

      if (arr[start] >= target && arr[mid] < target)
      {
        end = mid - 1;
      }

      else
      {
        start = mid + 1;
      }
    }

    else
    {
      if (arr[end] >= target && arr[mid] < target)
      {
        start = mid + 1;
      }

      else
      {
        end = mid - 1;
      }
    }
  }
  return -1;
}

int main()
{

  int arr[7] = {4, 5, 6, 7, 0, 1, 2};
  int SearchedElement = Search(arr, 7, 1);
  cout << SearchedElement;
  return 0;
}