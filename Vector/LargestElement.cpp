#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v = {102, 45, 7, 89, 23};

  int largest = v[0];

  for (int i = 1; i < v.size(); i++)
  {
    if (v[i] > largest)
    {
      largest = v[i];
    }
  }
  cout << "Largest : " << largest;
}