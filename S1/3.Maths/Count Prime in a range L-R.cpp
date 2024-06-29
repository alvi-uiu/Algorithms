#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

bool isPrime(int x)
{
    if (x <= 1)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
// T(n): 0(sqrt(n))

// Brute :

vector<ll> ans(vector<vector<ll>> queries)
{
    ll n = queries.size();
    vector<ll> ans;
    for (int i = 0; i < n; i++)
    {
        ll left = queries[i][0];
        ll right = queries[i][1];
        ll cnt = 0;

        for (int j = left; j <= right; j++)
        {
            if (isPrime(j))
                cnt++;
        }

        ans.push_back(cnt);
    }

    return ans;
}
// T(n) : 0(n^3)

/*----------------------------------------------------------------------*/

// Better :

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

vector<ll> ans2(vector<vector<ll>> queries)
{
    ll n = queries.size();
    vector<ll> ans;
    vector<int> Prime = getSieve(1e6);
    for (int i = 0; i < n; i++)
    {
        ll left = queries[i][0];
        ll right = queries[i][1];
        ll cnt = 0;

        for (int j = left; j <= right; j++)
        {
            if (Prime[j])
                cnt++;
        }

        ans.push_back(cnt);
    }

    return ans;
}

// T(n): 0(n^2)

/*----------------------------------------------------------------------*/

// Optimal :

vector<int> ans3(vector<vector<int>> queries)
{
    vector<int> Prime = getSieve(1e6);
    int cnt = 0;
    for (int i = 0; i < Prime.size(); i++)
    {

        cnt += Prime[i];
        Prime[i] = cnt;
    }

    vector<int> ans;

    for (int i = 0; i < queries.size(); i++)
    {
        int left = queries[i][0];
        int right = queries[i][1];
        int cntDiff = Prime[right] - Prime[left - 1];
        ans.push_back(cntDiff);
    }
    return ans;
}

// T(n)=0(n)

int main()
{
    vector<vector<int>> queries = {{2, 24},
                                   {7, 89},
                                   {79, 99}};

    vector<int> res = ans3(queries);

    for (auto it : res)
    {

        cout << it << " ";
    }

    return 0;
}