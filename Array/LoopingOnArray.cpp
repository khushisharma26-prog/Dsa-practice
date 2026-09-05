#include <iostream>
using namespace std;

int main()
{
  // int Marks[5] = {10, 20, 30, 40, 50};
  // for (int i = 0; i < sizeof(Marks) / sizeof(int); i++)
  // {
  //   cout << Marks[i] << endl;
  // }

  int Marks[5];

  for (int i = 0; i < sizeof(Marks) / sizeof(int); i++)
  {

    cin >> Marks[i];
    cout << Marks[i] << endl;
  }
}
