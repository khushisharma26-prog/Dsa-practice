#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {10, 20, 24, 56, 78};
  int target;
  int index = -1;

  cout << "Enter the element to be searched: ";
  cin >> target;

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    if (arr[i] == target)
    {
      index = i;
      break;
    }
  }

  cout << index;
}