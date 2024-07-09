#include <bits/stdc++.h>
using namespace std;

void fn(int idx, int target, vector<int> &arr, vector<int> &candid, vector<vector<int>> &ans)
{
    if (idx >= candid.size())
    {
        if (target == 0)
        {
            ans.push_back(arr);
            return;
        }
        return;
    }

    // pick :
    if (candid[idx] <= target)
    {
        arr.push_back(candid[idx]);
        fn(idx, target - candid[idx], arr, candid, ans);
        arr.pop_back();
    }

    // not-pick :
    fn(idx + 1, target, arr, candid, ans);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<int> arr;
    vector<vector<int>> ans;
    fn(0, target, arr, candidates, ans);
    return ans;
}

int main()
{

    return 0;
}