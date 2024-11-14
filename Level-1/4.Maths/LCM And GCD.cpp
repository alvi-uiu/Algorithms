// https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
vector<long long> lcmAndGcd(long long A, long long B)
{
    ll GCD = 1, LCM;
    for (ll i = min(A, B); i >= 1; i--)
    {
        if (A % i == 0 && B % i == 0)
        {
            GCD = i;
            break;
        }
    }

    LCM = (A * B) / GCD;

    vector<ll> ans = {LCM, GCD};
    return ans;
}

// T(n): 0(min(A,B))

/*----------------------------------------------------------------------*/

// Optimal :

vector<long long> lcmAndGcd(long long A, long long B)
{
    ll gcd = 1, lcm;
    ll a = A;
    ll b = B;
    while (A > 0 && B > 0)
    {
        if (A > B)
            A = A % B;
        else
            B = B % A;
    }

    if (A == 0)
        gcd = B;
    else
        gcd = A;

    lcm = (a * b) / gcd;
    vector<ll> res = {lcm, gcd};
    return res;
}

// T(n)=0(log(min(A,B)))

int main()
{

    return 0;
}