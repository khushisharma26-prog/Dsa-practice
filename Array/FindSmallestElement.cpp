#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int smallest = INT_MAX;
  int arr[5] = {163, 56, 75, -88, 54};

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }
  cout << "Smallest element is: " << smallest << endl;
}
