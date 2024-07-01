#include <bits/stdc++.h>
using namespace std;

vector<int> getSieve(int n)
{

    vector<int> prime(n + 1, 1);

    prime[0] = prime[1] = 0;

    for (int i = 2; i * i <= n; ++i)
    {

        if (prime[i] == 1)
        {

            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    return prime;
}

int main()
{
    vector<int> Prime = getSieve(1e7);

    for (int i = 0; i < 999999; i++)
    {
        if (Prime[i])
            cout << i << endl;
    }

    return 0;
}