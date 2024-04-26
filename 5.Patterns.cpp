#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space :
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star :
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        // space :
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space :
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        // star :
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        // space :
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int start = 1;
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start; // FLIP;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        space = space - 2;
        cout << "\n";
    }
}

int num = 1;
void pattern13(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

void pattern14(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char c = 'A';

        for (char j = 1; j <= i; j++)
        {
            cout << c << " ";
            c += 1;
        }
        cout << endl;
    }
}

void pattern14i(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern15(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (char j = 'A'; j < 'A' + n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{

    for (int i = 0; i < n; i++)
    {
        char c = 'A' + i;

        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space :
        for (int j = 0; j < n - i - 1; j++) // from Pattern 7
        {
            cout << " ";
        }

        int swap_point = (2 * i) / 2;

        // characters :
        char c = 'A';
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << c << " ";
            if (k < swap_point)
                c++; // FOR i = 4 : ABCD-E
            else
                c--; // FOR i = 4 : DCBA
        }

        // space :
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern18_opposite(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E'; j >= 'E' - i; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern19(int n)
{
    int space_ = 0;
    for (int i = 0; i < n; i++)
    {

        // star :
        for (int j = 0; j < n - i; j++)
            cout << "*";

        // space:

        for (int j = 0; j < space_; j++)
            cout << " ";

        // star:

        for (int j = 0; j < n - i; j++)
            cout << "*";

        space_ += 2;
        cout << endl;
    }

    // other half :
    space_ = 2 * n - 2;

    for (int i = 0; i <= n - 1; i++)
    {

        // star :
        for (int j = 0; j <= i; j++)
            cout << "*";

        // space:

        for (int j = 0; j < space_; j++)
            cout << " ";

        // star:

        for (int j = 0; j <= i; j++)
            cout << "*";

        space_ -= 2;
        cout << endl;
    }
}

int stars, space;
void pattern20(int n)
{
    for (int i = 0; i < 2 * n - 1; ++i)
    {
        // star :

        if (i < n)
            stars = i;
        else
            stars--;

        for (int j = 0; j <= stars; j++)
        {
            cout << "*";
        }

        // space:
        if (i < n)
            space = (2 * n - 2) - 2 * i;
        else
        {
            space += 2;
        }

        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }

        // star :
        for (int j = 0; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void pattern21v2(int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 0; i < n - 2; i++)
    {
        // star:
        cout << "*";
        // space:
        for (int i = 0; i < n - 2; i++)
        {
            cout << " ";
        }
        // star:
        cout << "*";
        cout << endl;
    }
    for (int j = 0; j < n; j++)
    {
        cout << "*";
    }
}

void pattern22(int n)
{

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {

            int left_dis = j - 0;
            int right_dis = (2 * n - 1) - 1 - j;
            int up_dis = i - 0;
            int down_dis = (2 * n - 1) - 1 - i;

            int cur = 4 - min(min(left_dis, right_dis), min(up_dis, down_dis));

            cout << cur;
        }
        cout << endl;
    }
}

void pattern22v2(int n)
{

    for (int i = 0; i < 2 * n - 1; i++)
    {

        int k = (2 * n - 1) - 1;

        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (i == 0 || j == 0 || i == k || j == k)
            {
                cout << 0;
            }
            else if (i == 1 || j == 1 || i == k - 1 || j == k - 1)
            {
                cout << 1;
            }
            else if (i == 2 || j == 2 || i == k - 1 - 1 || j == k - 1 - 1)
            {
                cout << 2;
            }

            else if (i == 3 || j == 3 || i == k - 1 - 1 - 1 || j == k - 1 - 1 - 1)
            {
                cout << 3;
            }

            else
                cout << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pattern21(n);
    }

    return 0;
}