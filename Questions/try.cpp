#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    string gender;
    cout << "Enter your age";
    cin >> age;
    if (age >= 18)
    {
        cout << "Enter your gender (male/female): ";
        cin >> gender;
        if (gender == "female")
        {
            cout << "You are eligible for women-only program";
        }
            else
            {
                cout << "You are not eligible for this policy";
            }
        }
        else
        {
            cout << "You are younger for this policy!";
        }

        return 0;
    }
