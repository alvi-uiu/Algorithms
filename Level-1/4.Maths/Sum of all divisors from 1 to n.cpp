// https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

long long sumOfDivisors(int N)
{
    ll sum = 0;

    for (int i = 1; i <= N; i++)
    {
        sum += (N / i) * i;
    }

    return sum;
}

int main()
{
    ll n;
    cin >> n;
    cout << sumOfDivisors(n);
    return 0;
}
