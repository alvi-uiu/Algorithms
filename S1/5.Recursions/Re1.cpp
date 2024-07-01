#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void fun()
{
    if (cnt == 47)
        return;
    cout << cnt << " ";
    cnt++;
    fun();
    cnt--;
    cout << cnt << endl;
}

int main()
{
    fun();

    return 0;
}