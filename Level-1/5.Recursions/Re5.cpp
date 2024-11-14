#include <bits/stdc++.h>
using namespace std;

// fibonacci by rec :

int fib(int n)
{
    if (n <= 1)
        return n;
    int last = fib(n - 1);
    int slast = fib(n - 2);
    return last + slast;
}

/*----------------------------------------------------------------------*/

//

int main()
{
    // fibonacci :
    //     int n;
    //     cin >> n;
    //     int arr[n];
    //     arr[0] = 0;
    //     arr[1] = 1;
    //     for (int i = 2; i < n; i++)
    //     {
    //         arr[i] = arr[i - 1] + arr[i - 2];
    //     }

    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }

    /*----------------------------------------------------------------------*/

    cout << fib(6);

    return 0;
}