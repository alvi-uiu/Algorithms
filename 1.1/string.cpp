// string is like an array of characters ,
// we can modify string with its indexes
#include <iostream>
using namespace std;
int main()
{

    string s;
    cout << "enter a string : ";
    cin >> s;
    int len = s.size();
    s[len - 1] = 'K';
    cout << s[len - 1] << endl;

    return 0;
}