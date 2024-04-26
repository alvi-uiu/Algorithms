// https://www.naukri.com/code360/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z')
        cout << 1;
    else if (c >= 'a' && c <= 'z')
        cout << 0;
    else
        cout << -1;

    return 0;
}

// https://www.naukri.com/code360/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int dataTypes(string type)
{
    if (type == "Integer")
        return 4;
    else if (type == "Long")
        return 8;
    else if (type == "Float")
        return 4;
    else if (type == "Double")
        return 8;
    else
        return 1;
}

// https://www.naukri.com/code360/problems/if-else-decision-making_8357235?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

string compareIfElse(int a, int b)
{
    if (a == b)
        return "equal";
    else if (a < b)
        return "smaller";
    else
        return "greater";
}

// https://www.naukri.com/code360/problems/switch-case-statement_8357244?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

double areaSwitchCase(int ch, vector<double> a)
{

    switch (ch)
    {
    case 1:
        return M_PI * (a[0]) * (a[0]);
        break;
    case 2:
        return a[0] * a[1];
        break;
    }
}

// https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;

    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) // for n=6 ; i= 3, 4 , 5 , 6 , 7x
    {
        c = a + b; // c = 2 , 3 , 5 , 8
        a = b;     // a = 1, 2, 3,
        b = c;     // b = 2, 3, 5,
    }
    return c; // 8
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
