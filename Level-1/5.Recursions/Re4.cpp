#include <bits/stdc++.h>
using namespace std;

// rev an array : 2 pointers

void fun(int l, int r, int arr[])
{
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    fun(l + 1, r - 1, arr);
}

// rev an array : 1 pointers

void fun1(int i, int n, int arr[])
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    fun1(i + 1, n, arr);
}

/*----------------------------------------------------------------------*/

// fuctional rec to check palindrome :

bool fun2(int i, int n, string s)
{
    // base :
    if (i >= n / 2)
        return true;
    // body:
    if (s[i] != s[n - i - 1])
        return false;
    return fun2(i + 1, n, s);
}

void print(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // fun(0, 4, arr);
    // print(arr);
    /*----------------------------------------------------------------------*/
    // int arr[5] = {1, 2, 3, 4, 5};
    // fun1(0, 5, arr);
    // print(arr);
    /*----------------------------------------------------------------------*/
    string s = "madam";
    cout << fun2(0, s.size(), s);
    return 0;
}