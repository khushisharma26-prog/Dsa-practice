#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};

  for (int i = 0; i < sizeof(arr) / sizeof(int) - 1; i += 2)
  {
    swap(arr[i], arr[i + 1]);
  }

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    cout << arr[i] << " ";
  }
}