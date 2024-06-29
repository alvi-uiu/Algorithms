#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
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

    vector<int> closestPrimes(int left, int right)
    {
        vector<bool> Prime = sieve(1e6);
        vector<int> primes;

        for (int i = left; i <= right; i++)
        {
            if (Prime[i])
            {
                primes.push_back(i);
            }
        }

        if (primes.size() < 2)
        {
            return {-1, -1};
        }

        vector<int> res = {primes[0], primes[1]};
        int min_diff = INT_MAX;
        for (int i = 0; i < primes.size() - 1; i++)
        {
            int diff = primes[i + 1] - primes[i];
            if (diff < min_diff)
            {
                min_diff = diff;
                res = {primes[i], primes[i + 1]};
            }
        }
        return res;
    }
};

int main()
{
    int left = 10, right = 19;

    Solution ob;
    vector<int> result = ob.closestPrimes(left, right);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    left = 4, right = 6;
    result = ob.closestPrimes(left, right);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
