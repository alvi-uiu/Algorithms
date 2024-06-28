#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

/*----------------------------------------------------------------------*/

vector<int> primeFact2(int n)
{
    vector<int> primeDiv;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            primeDiv.push_back(i);
        while (n % i == 0)
        {
            n = n / i;
        }
    }

    if (n != 1)
        primeDiv.push_back(n);

    return primeDiv;
}

/*----------------------------------------------------------------------*/

vector<int> primeFact(int n)
{
    vector<int> primeDiv;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i))
                primeDiv.push_back(i);

            if (i != n / i)
            {
                if (isPrime(n / i))
                    primeDiv.push_back(n / i);
            }
        }
    }

    return primeDiv;
}

int main()
{
    int n;
    cin >> n;
    vector<int> res = primeFact2(n);

    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}