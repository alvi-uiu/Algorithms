#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <iostream>
#include <numeric>

using namespace std;

void explainBitSet()
{
    // int ->2bytes ->16bits
    // char->1byte ->8bits
    // bitset->1bit
    int A[100];
    char C[10];
    bitset<5> bt; // stores 0 and 1s only
    cout << "enter 5 size bitset : ";
    cin >> bt;
    // if all the given bits are setbits(1s), then it will bt.all() will
    // return true , else false
    cout << bt.all() << endl;
    // if there is any setbit(1), then bt.any() will return true
    cout << bt.any() << endl;
    // bt.count will count the number of setbits
    cout << bt.count() << endl;
    // bt.flip(idx) will flib 1 by 0 or 0 by 1
    bt.flip(2);

    cout << bt.none() << endl; // no setbit, 00000 ->true

    bt.set();                       // converts all to 1s ->1111111
    bt.set(2);                      // sets 2nd idx to 1
    bt.set(2, 0);                   // sets 2nd idx to 0
    bt.reset();                     // converts all to 0s ->000000
    bt.reset(2);                    // sets 2nd idx to 0
    cout << "size : " << bt.size(); // prints 5
    bt.test(2);                     // check if bit is setbit(1) in idx 2
}

void ExplainAlgorithms()
{

    /// Array :
    cout << "Array : " << endl;
    cout << "n : " << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n); // TC : 0(nlogn)
    cout << "after sort : " << endl;
    for (auto it : arr)
    {
        cout << it << " ";
    }
    // reverse(startIt, endIt)
    reverse(arr, arr + n);
    cout << endl
         << "after reverse  : " << endl;
    for (auto it : arr)
    {
        cout << it << " ";
    }
    // max elem :
    int el = *max_element(arr, arr + n);
    cout << endl
         << "max elem = " << el << endl;

    // sum from i to j
    // accumulate(startIt, endIt , initial sum)

    int sum = accumulate(arr, arr + n, 0);

    // count x :
    int cnt = count(arr, arr + n, 2);

    // first occurence of x : int arr[]={1,2,3,4,5,2}; first ocuur of 2 = idx 1
    // int arr1[6] = {1, 2, 3, 4, 5, 2};
    // int x;
    // cin >> x;
    // for (int i = 0; i < 6; i++) {
    //   if (arr1[i] == x) {
    //     cout << i;
    //     break;
    //   }
    // }

    auto it = find(arr, arr + n, 2); // it will give the mem add

    cout << "first ocuur of 2 : " << it - arr << endl; // idx= it-arr/.begin()

    ////Vector-----------------------------------------------------------------------------
    ///:

    cout << endl
         << "vector : " << endl;
    vector<int> v(5, 0);

    cout << "enter 5 elements : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    // 1 22 3 -4 5
    //  sort(v.begin(), v.end());

    sort(v.begin() + 1, v.begin() + 4); // sorts middle 3 elements , [22,3,-4],5)
    cout << "after sort : ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    // rev :
    reverse(v.begin() + 1, v.begin() + 4); // reverses middle 3 elements
    cout << endl
         << "after reverse : " << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    // max elem :
    int el_ = *max_element(v.begin() + 1, v.begin() + 4);
    cout << endl
         << "max element : " << el_ << endl;
    // sum i to j
    int sum_ = accumulate(v.begin() + 2, v.begin() + 5, 0);
    // count x :
    int cnt_ = count(v.begin(), v.begin() + 4, 3); // TC : 0(n)

    // first occurence of x :

    auto it_ = find(v.begin(), v.end(), 2);
    if (it_ == v.end())
    {
        cout << "element is not present ";
    }
    else
    {
        cout << "first occur of 2 : " << it_ - v.begin() << endl;
    }
}

void ExplainAlgorithms_part2()
{

    ////Binary Search , TC : 0(logn)
    //  works only on SORTED arrays
    int n;
    cout << "enter n : ";
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i << " th elem : ";
        cin >> arr[i];
    }

    bool res = binary_search(arr, arr + n, 3); // returns true if 3 is present

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(7);
    vec.push_back(56);

    bool resv = binary_search(vec.begin(), vec.end(), 7);

    ////------------------------------------------------------------------------

    /// lower bound function : TC : 0(logn)
    // returns an iterator pointing to the first element which is not less than x
    // A[]={1,2,3,4,5,6,7};
    // x=5 , lowerBound = 5
    // x=7 , ->.end()
    // x=9 ,->.end()
    // only on SORTED Arrays,
    cout << "enter x : ";
    int x;
    cin >> x;
    auto it = lower_bound(arr, arr + n, x);
    cout << endl
         << "lowerBound idx: " << it - arr;

    auto it_ = lower_bound(vec.begin(), vec.end(), x);

    cout << endl
         << "lowerBoundVec idx : " << it_ - vec.begin();

    /// upper bound function :
    // retruns an iterator pointing to an element , which is just greater than x
    // only on SORTED Arrays,
    // A[]={1,2,3,4,6,7};
    // x=5 , upperBound = 6
    // x=7 , ->.end()
    // x=9 ,->.end()

    int arr1[7] = {1, 2, 3, 4, 5, 6, 7};

    auto it1 = upper_bound(arr1, arr1 + 7, 5);

    cout << "upperBound idx: " << it1 - arr1;
}

void firstOccurenceIdx()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter x : ";
    int x;
    cin >> x;
    // 1st way :
    // int idx = lower_bound(arr, arr + n, x) - arr;
    // if (idx < n && arr[idx] == x)
    //   cout << "Found at : " << idx << " index";
    // else {
    //   cout << "not found ";
    // }

    // 2nd way :

    if (binary_search(arr, arr + n, x) == true)
    {
        int idx = lower_bound(arr, arr + n, x) - arr;
        cout << "first Found at : " << idx << "rd index";
    }
    else
    {
        cout << "not found ";
    }
}

void lastOccurenceIdx()
{

    int n;
    cout << "enter n : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter x : ";
    int x;
    cin >> x;

    // int arr[]={ 1,2,3,4,5,6,6,7};
    // upperBound for x=6 ;      ^
    // so, last occurence is at : idx-1;
    // but i should check if : idx-1==x ?

    int idx = upper_bound(arr, arr + n, x) - arr;
    idx -= 1;
    if (arr[idx] == x && idx < n && idx >= 0)
        cout << "last Found at : " << idx << "rd index";
    else
    {
        cout << "not found ";
    }
}

void Permutation()
{

    // if string s=abc
    // all permutations of s : abc
    /*
    abc
    acb
    bac
    bca
    cab
    cba
    */

    // s->bca
    // bool res=next_permutation(s.begin(),s.end()); if next permutaion is
    // possible(cab), then res will become true and s will become cab

    // s->cba
    // bool res=next_permutation(s.begin(),s.end()); if next permutaion is
    // not possible, then res will become false and s will remain as it is

    // next_permutation(s.begin(),s.end()); TC : 0(n)

    // find permutation of a given string :

    string str;
    cout << "enter string : ";
    cin >> str;

    sort(str.begin(), str.end()); // nlogn

    do
    {
        cout << str << " ";
    } while (next_permutation(str.begin(), str.end()));
}

void NumOftimesXappers()
{

    int n;
    cout << "enter n : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter x : ";
    int x;
    cin >> x;

    // int arr[]={ 1,2,3,4,5,6,6,7};
    // way 1 :

    // int idx = upper_bound(arr, arr + n, x) - arr;
    // idx -= 1;
    // int count = 0;
    // while (arr[idx] == x) {
    //   count++;
    //   idx--;
    // }
    // cout<<x<<" appears "<<count<<" times ";

    // way 2 :

    int idxUP = upper_bound(arr, arr + n, x) - arr;
    int idxLOW = lower_bound(arr, arr + n, x) - arr;

    cout << x << " appears " << idxUP - idxLOW << " times "; // TC : 0(logn)
}

bool ExplainComparator(
    int i,
    int j)
{ // comparator only compares two elements and returns true or false

    if (i <= j)
        return true;
    else
        return false;
}

bool com(pair<int, int> el1, pair<int, int> el2)
{

    // i want to sort this pair in such a way
    // that the element who have first element
    // in pair smaller appears first, and if
    // first elements are equal, then sort
    // according to second element decendingly

    if (el1.first < el2.first)
    {
        return true;
    }

    if (el1.first == el2.first)
    {
        if (el1.second > el2.second)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    pair<int, int> arr[] = {{1, 4}, {5, 2}, {5, 9}};

    sort(arr, arr + 3, com); // modified sort by user thorough comparator
    // sort(arr, arr + 3, greater<pair<int, int>>()); //greater int will compare
    // in all the cases
    // decendingly
    for (auto it : arr)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}