#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int sz = sizeof(arr); // size of array
  int sizeElement = sizeof(arr) / sizeof(int);
  cout << sizeElement << endl;
  cout << sz << endl;
}
