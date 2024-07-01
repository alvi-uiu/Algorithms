// https://leetcode.com/problems/count-primes/description/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

// Brute :

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int countPrimes(int n)
{
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
            cnt++;
    }
    return cnt;
}

// T(n) : 0(n root n)

/*----------------------------------------------------------------------*/

// Optimal :
vector<bool> sieve(int limit)
{
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= limit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int countPrimes(int n)
{
    vector<bool> isPrime = sieve(n);
    ll cnt = 1;
    for (int i = 3; i <= n; i++)
    {
        if (isPrime[i])
            cnt++;
    }

    return cnt;
}

// T(n): 0(nloglog(n))

int main()
{
    int n;
    cin >> n;
    cout << countPrimes(n);
    return 0;
}