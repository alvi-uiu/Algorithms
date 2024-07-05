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

void fun(int idx, vector<int> A, vector<int> arr, int k)
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
    fun(idx + 1, A, arr, k);
    arr.pop_back();

    // not-take :
    fun(idx + 1, A, arr, k);
}
// T(n): 0(2^n)*n

void fun2(int idx, const vector<int> &A, vector<int> &arr, int sum, int k)
{
    if (idx >= A.size())
    {
        if (sum == k)
        {
            prnt(arr);
        }
        return;
    }

    // take:
    arr.push_back(A[idx]);
    sum += A[idx];
    fun2(idx + 1, A, arr, sum, k);
    sum -= A[idx];
    arr.pop_back();

    // not-take:
    fun2(idx + 1, A, arr, sum, k);
}

// T(n): 0(2^n)

// print one sub-seq whose sum is k : functional way :

bool fun3(int idx, vector<int> A, vector<int> arr, int sum, int K)
{
    if (idx >= A.size())
    { // cond satisfied return true
        if (sum == K)
        {
            prnt(arr);
            return true;
        }
        else // cond not satisfied return false
            return false;
    }

    // take :
    arr.push_back(A[idx]);
    sum += A[idx];
    if (fun3(idx + 1, A, arr, sum, K) == true)
        return true; // if you got the ans no need to go further just return
    sum -= A[idx];
    arr.pop_back();

    // not take :
    if (fun3(idx + 1, A, arr, sum, K) == true)
        return true; // if you got the ans return true
    else
        return false; // still you did not get the ans, return false
}

// tricky way :
bool flag = false;
void fun2i(int idx, vector<int> A, vector<int> &arr, int sum, int k)
{
    if (idx >= A.size() && flag == false)
    {
        if (sum == k)
        {
            prnt(arr);
            flag = true;
        }
        return;
    }

    // take:
    arr.push_back(A[idx]);
    sum += A[idx];
    fun2i(idx + 1, A, arr, sum, k);
    sum -= A[idx];
    arr.pop_back();

    // not-take:
    fun2i(idx + 1, A, arr, sum, k);
}

int main()
{
    // vector<int> A = {7, 16, 9, 77, 99, 8, -1};
    // vector<int> arr;
    // fun(0, A, arr, 16);

    /*----------------------------------------------------------------------*/

    // vector<int> A = {7, 16, 9, 77, 99, 8, -1};
    // vector<int> arr;
    // fun2(0, A, arr, 0, 16);

    /*----------------------------------------------------------------------*/
    vector<int> A = {7, 16, 9, 77, 99, 8, -1};
    vector<int> arr;
    fun2i(0, A, arr, 0, 16);
    return 0;
}