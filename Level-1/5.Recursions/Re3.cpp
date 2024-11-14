#include <bits/stdc++.h>
using namespace std;

// Q : Print sum of 1 to N :

// 1. Parameterized way :

void fun(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    fun(i - 1, sum + i);
}

// 2. functional way :
// let n=3
int fuN(int n)
{
    if (n < 1)
        return 0;
    return n + fuN(n - 1);
}
// Recursion Tree :

// int fuN(2)
// {
//     if (2 < 1)
//         return 0;
//     return 2 + fuN(2 - 1);
// }

// int fuN(1)
// {
//     if (1 < 1)
//         return 0;
//     return 1 + fuN(1 - 1);
// }

// int fuN(0)
// {
//     if (0 < 1)
//         return 0;
// }

/*----------------------------------------------------------------------*/

// Q : fact of n:

// 1.parameterized way :

void fact(int i, int fct = 1)
{
    if (i < 1)
    {
        cout << fct;
        return;
    }
    fact(i - 1, fct * i);
}

// 2.functional way :
// let n=5
int facT(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * facT(n - 1); // 5*24= 120
}

// Recursion Tree :

// int facT(4)
// {
//     if (4 == 0 || 4 == 1)
//         return 1;
//     return 4 * facT(4 - 1); //4*6=24
// }

// int facT(3)
// {
//     if (3 == 0 || 3 == 1)
//         return 1;
//     return 3 * facT(3 - 1); //3*2=6
// }

// int facT(2)
// {
//     if (2 == 0 || 2 == 1)
//         return 1;
//     return 2 * facT(2 - 1); // 2*1=2
// }

// int facT(1)
// {
//     if (1 == 0 || 1 == 1)
//         return 1;
// }

int main()
{
    cout << facT(5);
    return 0;
}