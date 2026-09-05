#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int index = -1;
  int largest = INT_MIN;

  int arr[5] = {163, 560000000, 75, -88, 54};

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
      index = i;
    }
  }

  cout << "Largest element is at index: " << index << endl;
}