#include <bits/stdc++.h>
using namespace std;

string armstrongNumber(int n)
{
    int sum = 0;
    int org = n;

    while (n != 0)
    {
        int ldgt = n % 10;
        sum += ldgt * ldgt * ldgt;
        n /= 10;
    }

    if (sum == org)
        return "true";
    else
        return "false";
}

int main()
{

    return 0;
}