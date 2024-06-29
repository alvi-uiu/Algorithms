#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    vector<bool> Prime = sieve(1e7);

    for (int i = 0; i < 999999; i++)
    {
        if (Prime[i])
            cout << i << endl;
    }

    return 0;
}