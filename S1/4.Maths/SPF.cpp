#include <bits/stdc++.h>
using namespace std;
// Brute :
vector<int> getSPF(int n)
{
    vector<int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                ans.push_back(i);
                n /= i;
            }
        }
    }
    if (n != 1)
        ans.push_back(n);

    return ans;
}

vector<vector<int>> Ans(vector<int> queries)
{
    vector<vector<int>> ans;
    vector<int> temp;
    for (int i = 0; i < queries.size(); i++)
    {
        temp = getSPF(queries[i]);
        ans.push_back(temp);
    }

    return ans;
}
// T(n) : 0(n)*0(squrt(n))*0(log(n))

/*----------------------------------------------------------------------*/

// Optimal :

vector<int> getSPF2(int n)
{
    vector<int> SPF(n + 1);
    for (int i = 0; i < SPF.size(); i++)
    {
        SPF[i] = i;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (SPF[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (SPF[j] == j)
                {
                    SPF[j] = i;
                }
            }
        }
    }

    return SPF;
}

// T(n) : 0(nlog(log(n)))

vector<vector<int>> Ans2(vector<int> queries)
{
    vector<int> spf = getSPF2(1e6);
    vector<int> ans;
    vector<vector<int>> res;
    for (int i = 0; i < queries.size(); i++)
    {
        int n = queries[i];
        while (n != 1)
        {
            ans.push_back(spf[n]);
            n /= spf[n];
        }
        res.push_back(ans);
        ans.clear();
    }

    return res;
}

// T(n) : 0(n)*0(log2(n))

int main()
{
    vector<int> queries = {12, 16, 60};

    vector<vector<int>> res = Ans2(queries);

    for (auto it : res)
    {
        for (auto it1 : it)
        {
            cout << it1 << " ";
        }
        cout << endl;
    }

    return 0;
}