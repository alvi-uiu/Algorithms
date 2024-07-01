#include <bits/stdc++.h>
using namespace std;

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

vector<vector<int>> Ans2(vector<int> queries)
{
    vector<int> spf = getSPF2(1e6);
    vector<vector<int>> res;

    for (int i = 0; i < queries.size(); i++)
    {
        int n = queries[i];
        vector<int> ans;
        while (n != 1)
        {
            ans.push_back(spf[n]);
            n /= spf[n];
        }
        res.push_back(ans);
    }

    return res;
}

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