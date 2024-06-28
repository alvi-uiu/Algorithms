#include <bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int num)
{
    vector<int> divisors;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            divisors.push_back(i);
            if (i != num / i && i != 1)
                divisors.push_back(num / i);
        }
    }

    int sum = accumulate(divisors.begin(), divisors.end(), 0);
    if (sum == num)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    cout << endl
         << checkPerfectNumber(n);
    return 0;
}