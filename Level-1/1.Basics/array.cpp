// Array is used to store similar type of datas, here the the first element of
// the array can be stored at anywhere in the memory but after the following
// elements are sotored in consecutive indexes on memory
#include <iostream>
using namespace std;
int main()
{

    int A[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter  A[ " << i << " ] = ";
        cin >> A[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << "  ";
    }

    return 0;
}