#include <bits/stdc++.h>
using namespace std;

bool solve(string s)
{
    if (s == "abc")
        return true;

    swap(s[0], s[1]);
    if (s == "abc")
        return true;
    swap(s[0], s[1]);

    swap(s[0], s[2]);
    if (s == "abc")
        return true;
    swap(s[0], s[2]);

    swap(s[1], s[2]);
    if (s == "abc")
        return true;
    swap(s[1], s[1]);

    return false;
}

int main()
{
    int t;
    cin >> t;
    vector<string> res(t);
    for (int i = 0; i < t; ++i)
    {
        cin >> res[i];
    }

    for (string r : res)
    {
        if (solve(r))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
