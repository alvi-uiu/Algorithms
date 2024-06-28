#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int N)
{
  int cnt = 0;
  int original = N;

  while (N != 0)
  {
    int lastDgt = N % 10;
    if (lastDgt != 0 && original % lastDgt == 0)
      cnt++;
    N /= 10;
  }

  return cnt;
}

signed main()
{
  int N;
  cin >> N;
  cout << evenlyDivides(N);
}