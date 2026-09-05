#include <iostream>
using namespace std;

int main()
{
  int arr[] = {10, 20, 30, 40, 50};

  arr[2] = 100; // Updating the third element of the array
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    cout << arr[i] << " ";
    }
}