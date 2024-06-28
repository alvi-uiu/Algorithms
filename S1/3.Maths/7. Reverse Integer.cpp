// https://leetcode.com/problems/reverse-integer/
#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int max_limit = INT_MAX / 10;
    int min_limit = INT_MIN / 10;
    int rev = 0;
    while (x != 0)
    {
        int lastDgt = x % 10;
        if (rev > max_limit || rev == max_limit && lastDgt > 7)
            return 0;
        if (rev < min_limit || rev == min_limit && lastDgt < 8)
            return 0;
        rev = rev * 10 + lastDgt;
        x /= 10;
    }

    return rev;
}

// T(n): 0(log10(n))

int main()
{
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}