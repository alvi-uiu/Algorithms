#include <bits/stdc++.h>
using namespace std;
// say sorry :
void fun(int i, int n)
{
    if (i > n)
        return;
    cout << "SORRY" << endl;
    i++;
    fun(i, n);
}

// print 1 to n :
void fun2(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    i++;
    fun2(i, n);
}

// print reverse :

void fun3(int i, int n)
{
    if (i > n)
        return;
    i++; // i=i+1
    fun3(i, n);
    i--;
    cout << i << " ";
}

void fun3i(int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    fun3i(n - 1); // (n--) != (n-1)
}

// reverse & backtracK:

void fun3ii(int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    fun3ii(n - 1);
    cout << n << endl;
}

int main()
{
    // cout << "times you wanna say : SORRY " << endl;
    // int n;
    // cin >> n;
    // fun(1, n);

    /*----------------------------------------------------------------------*/

    // int n;
    // cin >> n;
    // fun2(1, 7);

    /*----------------------------------------------------------------------*/
    // int n;
    // cin >> n;
    // fun3(1, 7);

    /*----------------------------------------------------------------------*/

    int n;
    cin >> n;
    fun3ii(7);
    return 0;
}