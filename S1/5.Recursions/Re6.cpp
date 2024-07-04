#include <bits/stdc++.h>
using namespace std;

void prnt(vector<int> arr)
{
    if (arr.size() == 0)
        cout << "{}";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

// print all sub-sequences of n : sub-seq in normal order

void fun(int idx, vector<int> A, vector<int> &arr)
{
    if (idx >= A.size())
    {
        prnt(arr);
        return;
    }

    // take :
    arr.push_back(A[idx]);
    fun(idx + 1, A, arr);
    arr.pop_back();
    // not-take :
    fun(idx + 1, A, arr);
}

// we can also not-take first : for printing sub-seq in reverse order

void fun2(int idx, vector<int> A, vector<int> &arr)
{
    if (idx >= A.size())
    {
        prnt(arr);
        return;
    }

    // not-take:
    fun2(idx + 1, A, arr);

    // take:
    arr.push_back(A[idx]);
    fun2(idx + 1, A, arr);
    arr.pop_back();
}

int main()
{
    vector<int> A = {7, 4, 9};
    int n = 3;
    vector<int> arr;
    arr.clear();
    fun2(0, A, arr);
    return 0;
}