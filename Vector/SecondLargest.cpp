#include <iostream>
#include <vector>
#include <climits>.

using namespace std;

int main()
{
  vector<int> v = {102, 45, 7, 8900, 23};

  int largest = INT_MIN;
  int secondLargest = INT_MIN;

  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] > largest)
    {
      secondLargest = largest;
      largest = v[i];
    }

    else if (v[i] > secondLargest && v[i] < largest)
    {
      secondLargest = v[i];
    }
  }

  cout << largest << endl;
  cout << secondLargest;
}