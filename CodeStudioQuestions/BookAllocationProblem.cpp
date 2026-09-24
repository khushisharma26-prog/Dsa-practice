#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int students, int maxPages)
{
  int studentCount = 1;
  int pages = 0;

  for (int i = 0; i < n; i++)
  {
    if (pages + arr[i] <= maxPages)
    {
      pages += arr[i];
    }
    else
    {
      studentCount++;

      if (studentCount > students || arr[i] > maxPages)
      {
        return false;
      }

      pages = arr[i];
    }
  }

  return true;
}

int bookAllocation(int arr[], int n, int students)
{
  int start = 0;
  int end = 0;

  // Find total pages and largest book
  for (int i = 0; i < n; i++)
  {
    end += arr[i];

    if (arr[i] > start)
    {
      start = arr[i];
    }
  }

  int ans = -1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (isPossible(arr, n, students, mid))
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }

  return ans;
}

int main()
{
  int arr[4] = {10, 20, 30, 40};

  int n = 4;
  int students = 2;

  cout << bookAllocation(arr, n, students);

  return 0;
}