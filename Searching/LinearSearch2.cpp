#include <iostream>
#include <string>
using namespace std;

bool search(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int arr[5] = {10, 20, 24, 56, 78};
  int target;

  cout << "Enter the element to be searched: ";
  cin >> target;

  bool found = search(arr, sizeof(arr) / sizeof(int), target);

  if (found)
  {
    cout << "Element found in the array" << endl;
  }
  else
  {
    cout << "Element not found in the array" << endl;
  }
}