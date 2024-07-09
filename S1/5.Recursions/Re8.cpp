#include <bits/stdc++.h>
using namespace std;

void MRG(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }

        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void MS(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    MS(arr, low, mid);
    MS(arr, mid + 1, high);
    MRG(arr, low, mid, high);
}

/*----------------------------------------------------------------------*/

vector<int> sortArray(vector<int> &nums)
{
    MS(nums, 0, nums.size() - 1);
    return nums;
}

int main()
{
    vector<int> arr = {77, -99, 2, 4, 55, 2, 11};
    MS(arr, 0, arr.size() - 1);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}