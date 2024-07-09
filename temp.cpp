#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> glcnt;
    string team;

    for (int i = 0; i < n; ++i)
    {
        cin >> team;
        glcnt[team]++;
    }

    string winner;
    int maxi = 0;

    for (auto it : glcnt)
    {
        if (it.second > maxi)
        {
            maxi = it.second;
            winner = it.first;
        }
    }

    cout << winner << endl;
    return 0;
}
