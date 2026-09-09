#include <iostream>
using namespace std;

int main()
{
  int nums[7] = {1, 1, 2, 2, 3, 3, 4};
  int j = 1;
  for (int i = 1; i < sizeof(nums) / sizeof(int); i++)
  {
    if (nums[i] != nums[j - 1])
    {
      nums[j] = nums[i];
      j++;
    }
  }
  for (int i = 0; i < j; i++)
  {
    cout << nums[i] << " ";
  }
}
