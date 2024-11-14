#include <bits/stdc++.h>
using namespace std;

// Brute Force :
// T(n): 0(n)*logn
void fn1(int idx, vector<int> &Arr, vector<int> &arr, set<vector<int>> &ans)
{
    if (idx >= Arr.size())
    {
        ans.insert(arr);
        return;
    }

    // pick :

    arr.push_back(Arr[idx]);
    fn1(idx + 1, Arr, arr, ans);
    arr.pop_back();

    // not pick :
    fn1(idx + 1, Arr, arr, ans);
}
class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        set<vector<int>> ans;
        vector<int> arr;
        sort(nums.begin(), nums.end());
        fn1(0, nums, arr, ans);
        vector<vector<int>> res(ans.begin(), ans.end());
        return res;
    }
};

int main()
{

    return 0;
}