#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {10, 20, 24, 67, 78};

  int key = 10;

  int start = 0;
  int end = 4;

  while (start <= end)
  {
    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
      cout << "Element found at index: " << mid << endl;
      return 0;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }

  cout << "Element not found" << endl;

  return 0;
}