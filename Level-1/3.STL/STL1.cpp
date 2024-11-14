#include <bits/stdc++.h> //#include <bits/stdc++.h> is a commonly used header in C++ that includes all standard libraries, making coding more convenient by reducing the need to include specific libraries separately.
#include <string>
#include <vector>
using namespace std; // using namespace std; is used in C++ to avoid having to
                     // prefix standard library elements with std::
void PrintVec(const vector<int> &v);

/// explain namespace :

namespace alvi
{

    int val = 5;

    int fun() { return val * 10; }

} // namespace alvi

// explain structure :

struct str1
{

    int *arr;
    int n;
    string str;
    char c;

    // constructor :
    str1(int arr_[], int n_, string str_, char c_)
    {
        n = n_;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr_[i];
        }
        str = str_;
        c = c_;
    }

    // Add a destructor to free memory when the struct is destroyed
    ~str1() { delete[] arr; }
};

/// explain arrays :

void explainArray()
{

    // normal way :
    int arr[5];
    // STL container:
    array<int, 5> arr1;

    array<int, 5> arr3 = {1, 2, 3}; // cout << arr3[4]; // {1 , 2 , 3 , 0 , 0}
    array<int, 5> arr4 = {1};       // cout << arr4[4];  //{1 , 0 , 0 , 0 , 0}

    array<int, 5> arr5;
    arr5.fill(7); // fills all indexes with current value;

    for (int i = 0; i < 5; i++)
    {
        cout << arr5.at(i) << " ";
    }

    /// iterators :
    cout << endl;

    array<int, 6> arr6 = {1, 2, 3, 4, 5, 6};
    for (auto it = arr6.begin(); it != arr6.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = arr6.rbegin(); it != arr6.rend(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = arr6.end() - 1; it >= arr6.begin(); it--)
    {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it : arr6)
    {
        cout << it << " ";
    }

    cout << endl;

    string str = "dhaka";

    for (auto it : str)
    {
        cout << it << " ";
    }

    cout << endl;

    // size:
    cout << arr6.size() << endl;
    // front:
    cout << arr6.front() << endl; // arr6.at(0);
    // back:
    cout << arr6.back() << endl; // arr6.size()-1;

    //
}

void explainPair()
{

    // to store variable : {1,3},{4,6} in pairs :
    pair<int, int> p = {1, 7};
    cout << "first element of the pair = " << p.first << endl;
    cout << "second element of the pair = " << p.second << endl;

    // to store multiple variables :
    pair<int, pair<int, int>> p1 = {7, {33, 99}};
    pair<pair<int, int>, pair<int, int>> p2 = {{1, 2}, {6, 7}};

    cout << "p2 = " << p2.first.second << endl;

    cout << p1.first << endl;
    cout << p1.second.first << endl;
    cout << p1.second.second << endl;

    //-----------------

    vector<pair<int, int>> Vec;
    set<pair<int, int>> set;
    map<pair<int, int>, int> mp;
    // unordered_map<> cant store pair
    //  array of pairs :

    pair<int, int> a[] = {{1, 5}, {7, 9}, {77, 88}};

    cout << a[1].first << endl;
}

void explainVector()
{
    // norm:
    vector<int> v; // v={}

    v.push_back(7);
    v.emplace_back(9); // works sameway like push_back but faster
    v.emplace_back(99);
    cout << "after 3 push size : " << v.size() << endl;
    v.pop_back();
    cout << "after 1 pop size : " << v.size() << endl;
    v.clear(); // clears all the elements of the vector

    // pair in vector
    vector<pair<int, int>> v1;
    v1.push_back({1, 7});
    v1.emplace_back(77, 88);

    // will allocate 5 indexes :
    vector<int> v2(5);

    // size defined but can be increased anytime :
    // will allocate 5 indexes with each same value :
    vector<int> v3(5, 100);
    v3.emplace_back(99);

    // copy :
    vector<int> v4(v3);
    // cout << v4[4] << endl;
    vector<int> v7 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v8(v7.begin(), v7.begin() + 4); // copies some specified values
    cout << "copies some specified values : ";
    PrintVec(v8);

    //--------------------------------------------------------

    vector<int> v5 = {1, 2, 3, 4, 5, 6, 7};

    //           ^    ^                 ^       ^
    //        rend(),begin()          rbegin(),end()

    v5.emplace_back(88);
    v5.emplace_back(99);

    cout << "back =" << v5.back() << endl;
    cout << "for each loop : ";
    for (auto it : v5)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "index ex : ";
    for (int i = 0; i < 5; i++)
    {
        cout << v5[i] << " ";
    }

    cout << endl;

    // iterators :
    vector<int> v9 = {1, 2, 3, 4, 5, 6, 7};
    vector<int>::iterator it = v9.begin();
    it++;
    cout << "it++ = " << *it << endl;
    it = it + 5;
    cout << "it+5 = " << *it << endl;
    //----------------------------------

    for (auto it = v5.begin(); it != v5.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
    for (auto it = v5.rbegin(); it != v5.rend(); it++)
    {
        cout << *it << " ";
    }

    cout << "\n";
    // delete :

    vector<int> v6 = {1, 2, 3, 44, 55, 66, 77};

    // v6.erase(v6.begin());
    // PrintVec(v6);
    cout << "erase = ";
    v6.erase(v6.begin() + 1, v6.begin() + 4);
    PrintVec(v6);

    //-------------------------------------------------------

    // vector of vecor int :
    cout << endl
         << "vector of vector int :  ";

    vector<vector<int>> vec;

    vector<int> v11; // 0th vector
    v11.emplace_back(1);
    v11.emplace_back(2);

    vector<int> v22; // 1th vector
    v22.emplace_back(3);
    v22.emplace_back(4);

    vector<int> v33; // 2nd vector
    v33.emplace_back(5);
    v33.emplace_back(6);
    v33.emplace_back(7);

    vec.emplace_back(v11); // 0th index
    vec.emplace_back(v22); // 1th
    vec.emplace_back(v33); // 2nd

    for (auto it : vec) // it-> v11, v22, v33
    {
        for (auto it1 : it) // it1->1,2,3,4,5,6,7
        {
            cout << it1 << " ";
        }
    }

    cout << endl
         << "2nd index of 2nd vector :  " << vec[2][2];

    cout << endl;
    cout << "normal for loop : " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }

    //----------------------------------------------------------------------------------
    // 2D vector :
    //  define 10X20 : means a vector of 10 indexes with each index have 20
    //  indexes

    vector<int> vv(20, 7); // it will create a vector vv with 20 indexes
                           // and all filled by 7

    // a vector of 10 indexes with each index have 20 index , each filled by 77
    vector<vector<int>> V(10, vector<int>(20, 77));
    V[9].push_back(99); // pushing new elements in 9th vector among 10 vectors;
    V[9].push_back(999);
    cout << "V[9][21] = " << V[9][21] << endl;
    V.push_back(vector<int>(6, 88)); // adding an extra vector ,
    // so now the size is 10+1=11
    cout << "2d vector size = " << V.size();
    //----------------------------------------------------------------------------------
    // array of vectors :

    int arr[7]; // data type array_name [size]

    vector<int> Arr[7]; // every index represents a vector

    Arr[0].emplace_back(77);
    Arr[0].emplace_back(88);

    Arr[6].emplace_back(99);
    Arr[6].emplace_back(100);
    cout << endl
         << "array of vectors :";
    for (auto it : Arr)
    {
        for (auto it1 : it)
        {
            cout << it1 << " ";
        }
    }

    //--------------------------------------------------------------------------------------
    // 3D Vector :
    vector<int> Ve;
    vector<int> Vec(7, 77); // normal vectors ;

    vector<vector<int>> VV(10, vector<int>(7, 77)); // 2D vector of 10 indexes and every index has a normal vector ;
    VV.push_back(vector<int>(8, 77));               // now size will be 11
    VV[9].push_back(88);                            // adding extra element in 9th vector(index)

    vector<vector<vector<int>>> VVV_(10, vector<vector<int>>(10, vector<int>(7, 77))); // 10X10X7 dimention
    // 3D vector of 10 indexes and every index has a 2D vector ;
    VVV_.push_back(VV); // now size will be 11
    VVV_.push_back(
        vector<vector<int>>(10, vector<int>(7, 77))); // now size will be 12
    cout << "size of VVV_ = " << VVV_.size();
    VVV_[9].push_back(vector<int>(7, 88)); // adding extra element(vector) in 9th 2D vector(index)
}

void PrintVec(const vector<int> &v)
{
    for (auto it : v)
    {
        cout << it << " ";
    }

    cout << "\n";
}

// outside main() we can highest 10^7 size of int array
int arr7[10000000];
// outside main() we can highest 10^8 size of bool array
bool arr1[100000000];

int main()
{
    // explain namespace :

    //  int val = 6;
    //  cout << alvi::fun();

    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // explain structure :

    // int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    // str1 s(arr, 7, "yohooo", 'y');
    // cout << s.arr[6] << endl;

    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // explain arrays:

    // explainArray();
    // // inside main() we can highest 10^6 size of int array
    // int arr[1000000];
    // // inside main() we can highest 10^6 size of bool array
    // bool arr1[1000000];
    // array<int, 5> arr2; // normal arrays are stored with gerbage values
    // cout << arr2[4];    // global arrays are automatically asssigned with 0

    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    explainVector();

    return 0;
}