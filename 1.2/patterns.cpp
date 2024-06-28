#include <bits/stdc++.h>
using namespace std;

void Pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* "; //* * * *
        } //* * * *
        cout << "\n"; //* * * *
                      //* * * *
    }
}

void Pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* "; //*
        } //* *
        cout << "\n"; //* * *
                      //* * * *
    }
}

void Pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << t + 1 << " ";
            t++; //*
        } //* *
        cout << "\n"; //* * *
                      //* * * *
    }
}

void Pattern3i(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void Pattern4(int n)
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

void Pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = n; j >= i + 1; j--)
        {

            cout << "* ";
            //* * * *
        } //* * *
        cout << "\n"; //* *
                      //*
    }
}

void Pattern5i(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {

            cout << "* ";
            //* * * *
        } //* * *
        cout << "\n"; //* *
                      //*
    }
}

void Pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {

            cout << j << " ";
        }
        cout << "\n";
    }
}

/*
_ _ _ _ * _ _ _ _
_ _ _ * * * _ _ _
_ _ * * * * * _ _
*/

void Pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * i + 1; k++)
        {

            cout << "*";
        }
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

/*
    * * * * * *
    _ * * * *  _
    _ _* * * _ _
    _ _ _*_ _ _ _
*/

void Pattern8(int n)
{
    // total lines
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * n - 1 - 2 * i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

/*
n=9
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

// pattern 9 can be written : pattern 7 + pattern 8 ; if n = 5 ( in this case )

void Pattern9(int n)
{
    int n1 = n / 2;

    for (int i = 0; i <= n1; i++)
    {

        for (int j = 0; j < n1 - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n1 - i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    // other half :
    for (int i = 0; i <= n1; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - 2 * i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

/*
 *
 ***
 *****
 *******
 *********
 *******
 *****
 ***
 *
 */

void Pattern9i(int n)
{
    int n1 = n / 2;

    for (int i = 0; i <= n1; i++)
    {

        for (int j = 0; j < n1 - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n1 - i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    // other half :
    for (int i = 1; i <= n1; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - 2 * i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

/*
 *
 ***
 *****
 *******
 *********
 *******
 *****
 ***
 *
 */

void Pattern9ii(int n)
{
    for (int i = 0; i < n; i++)
    {

        if (i <= n / 2)
        {
            for (int j = 0; j < (n / 2) - i; j++)
            {
                cout << " ";
            }

            for (int j = 0; j < 2 * i + 1; j++)
            {
                cout << "*";
            }

            for (int j = 0; j < (n / 2) - i; j++)
            {
                cout << " ";
            }
            cout << "\n";
        }

        if (i > n / 2)
        {
            for (int j = 0; j < i - n / 2; j++)
            {

                cout << " ";
            }

            for (int j = 0; j < 2 * (n - i) - 1; j++)
            {
                cout << "*";
            }

            for (int j = 0; j < i - n / 2; j++)
            {
                cout << " ";
            }
            cout << "\n";
        }
    }
}

/*
n=9 ;
= means space
*====
**===
***==
****=
***** <- row = 5 ; i= 5 ;
****=
***==
**===
*====
*/

void Pattern10(int n)
{

    for (int i = 1; i <= 2 * n - 1; i++)
    {

        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }

            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            cout << "\n";
        }

        if (i > n)
        {

            for (int j = 1; j <= 2 * n - i; j++)
            {
                cout << "*";
            }

            for (int j = 1; j <= i - n; j++)
            {
                cout << " ";
            }
            cout << "\n";
        }
    }
}

void Pattern10i(int n)
{

    int n1 = n / 2;

    for (int i = 0; i <= n1; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j < n1 - i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    // other half :
    for (int i = 0; i < n1; i++)
    {

        for (int j = 0; j < n1 - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

/*
Input Format: N = 6
Result:
1
01
101
0101
10101
010101
*/

void Pattern11(int n)
{
    int start;

    for (int i = 0; i < n; i++)
    {
        int start;
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }

        for (int j = 0; j <= i; j++)
        {

            cout << start; // 1 , 0 , 1
            start = 1 - start;
        }
        cout << endl;
    }
}

/*
Enter N: 4
1      1
22    21
333  321
44444321
*/

void Pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= (2 * n) - 2 * i; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
Enter N: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

void Pattern13(int n)
{
    static int k = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}

/*
Enter N: 5
A
A B
A B C
A B C D
A B C D E
*/

void Pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void Pattern14i(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1, k = 65; j <= i; j++, k++)
        {
            printf("%c", k);
        }
        cout << endl;
    }
}

/*
Enter N: 5
A B C D E
A B C D
A B C
A B
A
*/

void Pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (char ch = 'A'; ch <= 'A' + n - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

/*
Enter N: 5
A
BB
CCC
DDDD
EEEEE
*/

void Pattern16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        ch = 'A' + i;
        cout << endl;
    }
}

/*
Input Format: N = 6
Result:
     A
    ABA
   ABCBA  i =3
  ABCDCBA i =4
 ABCDEDCBA
ABCDEFEDCBA
*/

void Pattern17(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        int k = 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j < 2 * i; j++)
        {               // j=1,2,3
            cout << ch; // A , B , C ,
            if (j < i)
                ch++; // B , C , D ,
            if (j >= i)
                ch--;
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Enter N: 6
F
EF
DEF
CDEF
BCDEF
ABCDEF
*/

void Pattern18(int n)
{

    char ch2 = 'A';
    char ch1 = 'A';
    ch1 = ch1 + n - 1;
    ch2 = ch2 + n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (char ch = ch1--; ch <= ch2; ch++)
        {
            cout << ch;
        }

        cout << endl;
    }
}

/*
5
45
345
2345
12345
*/

void Pattern18i(int n)
{
    int k = n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = k--; j <= n; j++)
        {

            cout << j;
        }
        // k--;
        cout << endl;
    }
}

/*
Input Format: N = 3
Result:
         star    space   star
******    3        0       3
**  **    2        2       2
*    *    1        4       1
*    *    1        4       1
**  **    2        2       2
******    3        0       3
*/

void Pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2 * i; j++)
        { // 0 , 2 ,4
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // other half :

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * n - (2 * i); j++)
        { // 4 , 2 , 0
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Input Format: N = 3
Result:
            star     space     star
*    *       1        4         1
**  **       2        2         2
******       3        0         3
**  **       2        2         2
*    *       1        4         1
*/

void Pattern20(int n)
{

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // star :

        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        }

        if (i > n)
        {
            for (int j = 1; j <= 2 * n - i; j++)
            {
                cout << "*";
            }
        }

        // space :

        if (i <= n)
        {
            for (int j = 1; j <= 2 * n - 2 * i; j++)
            {
                cout << " ";
            }
        }

        if (i > n)
        {
            static int k = 1;
            for (int j = 1; j <= k * 2; j++)
            {
                cout << " ";
            }
            k++;
        }

        // star :

        if (i <= n && n != 1)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        }

        if (i > n)
        {
            for (int j = 1; j <= 2 * n - i; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void Pattern20i(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {

            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Input Format: N = 6
Result:
          star       space       star
******     3           0           3
*    *     1           4           1
*    *     1           4           1
*    *     1           4           1
*    *     1           4           1
******     3           0           3
*/

void Pattern21(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        if (i > 1 && i < n)
        {
            cout << "*";
            for (int j = 1; j <= n - 2; j++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }

        if (i == n && n != 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}

/*
Input Format: N = 3
Result:
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/

void Pattern22(int n)
{

    for (int i = 0; i < 2 * n - 1; i++)
    {

        for (int j = 0; j < 2 * n - 1; j++)
        {

            int top = i;
            int left = j;
            int bottom = (2 * n - 1 - 1) - i;
            int right = (2 * n - 1 - 1) - j;

            int Min = min(min(top, bottom), min(left, right));
            cout << n - Min;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    Pattern20(n);
    return 0;
}