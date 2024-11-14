// https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int findGCD(vector<int> &nums)
{
    int a = *min_element(nums.begin(), nums.end());
    int b = *max_element(nums.begin(), nums.end());
    ll A = a;
    ll B = b;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    ll gcd = 1;
    if (a == 0)
        gcd = b;
    else
        gcd = a;
    return gcd;
}

int main()
{

    return 0;
}