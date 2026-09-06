#include <iostream>

using namespace std;

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  int start = 0;
  int end = 4;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  cout << "The Reversed Array is: ";
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    cout << arr[i] << " ";
  }
}