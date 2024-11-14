#include <bits/stdc++.h>
using namespace std;
// say sorry :
void fun(int i, int n)
{
    if (i > n)
        return;
    cout << "SORRY" << endl;
    fun(i + 1, n);
}

// print 1 to n :
void fun2(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    fun2(i + 1, n);
}

// print reverse :

void fun3(int i, int n)
{
    if (i > n)
        return;
    fun3(i + 1, n);
    cout << i << " ";
}

void fun3i(int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    fun3i(n - 1); // (n--) != (n-1)
}

// backtracK:
// rev :
void fun4(int i, int n)
{
    if (i > n)
        return;
    // cout << n << " ";
    fun4(i + 1, n);
    cout << i << endl;
}

void fun4i(int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    fun4i(n - 1);
}

// 1 to n :
void fun5(int i, int n)
{
    if (i < 1)
        return;
    fun5(i - 1, n);
    cout << i << " ";
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

    // int n;
    // cin >> n;
    // fun4(1, 7);

    /*----------------------------------------------------------------------*/
    // int n;
    // cin >> n;
    // fun5(7, 7);

    /*----------------------------------------------------------------------*/
    int n;
    cin >> n;
    fun4i(7);

    return 0;
}