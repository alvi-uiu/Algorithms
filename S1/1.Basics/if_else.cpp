#include <iostream>
using namespace std;
int main()
{
    cout << "enter your age : ";
    int age;
    cin >> age;

    if (age < 18)
    {
        cout << "Sorry , You are not eligible for the job ";
    }
    else if (age <= 57)
    {
        cout << "you are eligible for the job ";
        if (age >= 55)
            cout << " but retirement soon ";
    }
    else
    {
        cout << "retirement time ";
    }

    return 0;
}