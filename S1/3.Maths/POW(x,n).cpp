#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll POW(int x, int n)
{

    ll ans = 1;
    ll dup = n;

    while (n > 0)
    {
        if (n % 2 != 0)
        {
            ans *= x;
            n -= 1;
        }
        else
        {

            x *= x;
            n /= 2;
        }
    }

    if (dup < 0)
        return 1 / ans;
    return ans;
}

int main()
{
    ll n, x;
    cin >> n >> x;
    cout << POW(n, x);
    return 0;
}