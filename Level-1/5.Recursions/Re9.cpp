#include <bits/stdc++.h>
using namespace std;

int fn(int low, int high, vector<int> &nums)
{

    int left = low;
    int right = high;
    int pvt = nums[low];

    while (left < right)
    {

        while (left <= high && nums[left] <= pvt)
            left++;

        while (right >= low && nums[right] > pvt)
            right--;

        if (left < right)
            swap(nums[left], nums[right]);
    }
    swap(nums[low], nums[right]);
    return right;
}

void QS(int low, int high, vector<int> &nums)
{

    // base case :

    if (low >= high)
        return;

    int pvtIdx = fn(low, high, nums);
    QS(low, pvtIdx - 1, nums);
    QS(pvtIdx + 1, high, nums);
}

int main()
{
    vector<int> nums = {99, -77777, 6, 23};

    QS(0, nums.size() - 1, nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
    return 0;
}