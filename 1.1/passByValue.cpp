#include <iostream>
using namespace std;

string changeChar(string name)
{
    int len = name.size();
    if (len > 0)
    {
        name[len - 1] = 'X';
    }
    return name;
}

void addTen(int *age) { *age += 10; }
void addTen2(int age) { age += 10; }
int main()
{

    // pass by ref :
    cout << "Enter your name: ";
    string name;
    getline(cin, name);
    cout << changeChar(name); // note : as string is an array of char, it
                              // automaticlly passed by ref

    // pass by ref ex2 :
    cout << "\n";
    cout << "enter your age please : ";
    int age;
    cin >> age;
    addTen(&age);
    cout << age;

    // pass by value :

    cout << "\n";
    cout << "enter your age again : ";
    int age2;
    cin >> age2;
    addTen2(age2);
    cout << age2 << endl;

    return 0;
}