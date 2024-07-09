#include <bits/stdc++.h>
using namespace std;

void fn(int idx, int target, vector<int> &candids, vector<int> &arr, set<vector<int>> &ans)
{

    if (idx >= candids.size())
    {
        if (target == 0)
        {
            ans.insert(arr);
            return;
        }
        return;
    }

    // pick:
    if (candids[idx] <= target)
    {
        arr.push_back(candids[idx]);

        fn(idx + 1, target - candids[idx], candids, arr, ans);
        arr.pop_back();
    }
    // not-pick:
    fn(idx + 1, target, candids, arr, ans);
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<int> arr;
    set<vector<int>> ans;
    sort(candidates.begin(), candidates.end());
    fn(0, target, candidates, arr, ans);
    vector<vector<int>> res(ans.begin(), ans.end());
    return res;
}

int main()
{

    return 0;
}