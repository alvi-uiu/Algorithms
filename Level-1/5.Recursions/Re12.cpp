// https://www.geeksforgeeks.org/problems/subset-sums2234/1

#include <bits/stdc++.h>
using namespace std;

// Power set : T(n) : 0(2^n)*n

void fn(string s)
{
    int n = s.size();
    for (int num = 0; num < (1 << n); num++) // 1<<n = 2^n
    {
        string temp = "";
        for (int i = 0; i < n; i++)
        {
            if (num & (1 << i))
            {
                temp += s[i];
            }
        }
        cout << temp << endl;
    }
}

/*----------------------------------------------------------------------*/

// Optimal : Rec :

void fn1(int idx, vector<int> &Arr, int sum, vector<int> &ans)
{
    if (idx >= Arr.size())
    {
        ans.push_back(sum);
        return;
    }

    // pick :
    sum += Arr[idx];
    fn1(idx + 1, Arr, sum, ans);
    sum -= Arr[idx];

    // not pick :
    fn1(idx + 1, Arr, sum, ans);
}

class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector<int> ans;
        fn1(0, arr, 0, ans);
        return ans;
    }
};

int main()
{
    // string s = "Bro";
    // fn(s);

    /*----------------------------------------------------------------------*/

    vector<int> Arr = {3, 1, 2};
    vector<int> ans;
    fn1(0, Arr, 0, ans);

    for (auto it : ans)
        cout << it << " " << endl;

    return 0;
}