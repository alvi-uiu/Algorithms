#include <bits/stdc++.h>
using namespace std;

void prnt(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

// print sub-seq whose sum is k :

void fun(int idx, vector<int> A, vector<int> arr, int Sum, int k)
{
    if (idx >= A.size())
    {
        if (accumulate(arr.begin(), arr.end(), 0) == k)
        {
            prnt(arr);
        }
        return;
    }

    // take :
    arr.push_back(A[idx]);
    fun(idx + 1, A, arr, Sum, k);
    arr.pop_back();

    // not-take :
    fun(idx + 1, A, arr, Sum, k);
}

int main()
{
    vector<int> A = {7, 16, 9, 77, 99, 8, -1};
    vector<int> arr;
    fun(0, A, arr, 0, 16);
    return 0;
}