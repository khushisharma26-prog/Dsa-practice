#include <iostream>
using namespace std;

int main()
{
  int arr[7] = {1, 2, 3, 3, 3, 4, 5};

  int n = 7;
  int key = 3;

  // First position
  int start = 0;
  int end = n - 1;
  int first = -1;

  while (start <= end)
  {
    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
      first = mid;
      end = mid - 1;
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

  // Last position
  start = 0;
  end = n - 1;
  int last = -1;

  while (start <= end)
  {
    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
      last = mid;
      start = mid + 1;
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

  cout << "First position: " << first << endl;
  cout << "Last position: " << last << endl;

  return 0;
}