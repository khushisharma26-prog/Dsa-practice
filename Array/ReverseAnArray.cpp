#include <iostream>

using namespace std;

int main()
{

  int arr[] = {150, 205, 304, 450, 502};
  int sz = sizeof(arr) / sizeof(int);
  int start = 0;
  int end = sz - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  cout << "The Reversed Array is: ";
  for (int i = 0; i < sz; i++)
  {
    cout << arr[i] << " ";
  }
}