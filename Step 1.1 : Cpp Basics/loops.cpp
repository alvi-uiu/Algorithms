#include <iostream>
using namespace std;
int main() {

  // for :

  int i = 0;

  for (i = 0; i < 5; i++) {
    cout << "value of i = " << i << endl;
  }

  cout << "value of i after loop scope : " << i << endl;

  // while :
  cout << "\n";
  int j = 0;
  while (j < 5) {
    cout << "value of j = " << j << endl;
    j++;
  }
  cout << "value of j after loop scope : " << j << endl;

  // do-while :
  cout << "\n";
  int k = 0;
  do {
    cout << "value of k = " << k << endl;
    k++;
  } while (k < 5);
  cout << "value of k after loop scope : " << k << endl;

  return 0;
}