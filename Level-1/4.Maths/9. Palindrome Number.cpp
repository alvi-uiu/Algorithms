// https://leetcode.com/problems/palindrome-number/description/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
bool isPalindrome(ll x)
{
    ll original = x;
    ll rev = 0;

    bool isNeg = false;
    if (x < 0)
        isNeg = true;
    while (x != 0)
    {
        ll lastDgt = x % 10;

        rev = rev * 10 + lastDgt;
        x /= 10;
    }

    if (isNeg)
        return false;

    if (original == rev)
    {

        return true;
    }

    else
        return false;
}

int main()
{
    ll n;
    cin >> n;
    cout << isPalindrome(n);

    return 0;
}