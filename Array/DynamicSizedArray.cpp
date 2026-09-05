#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr;

  arr.push_back(10);
  arr.push_back(20);
  arr.push_back(30);

  cout << "Array elements are: ";
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }

  // arr.pop_back();

  // cout << "Updated Array isL";
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cout << arr[i] << " ";
  // }
}