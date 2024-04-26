#include <iostream>

using namespace std;

int main()
{
  // int
  int x;
  cout << "Enter int x: ";
  cin >> x;
  cout << x;

  // float
  float f;
  cout << "\nEnter float f: ";
  cin >> f;
  cout << f;

  // double
  double d = 99.99;
  cout << "\nValue of d: " << d;

  // Clear the newline character from the input buffer

  cin.ignore(); // when you press Enter after entering the integer,or float
  // the Enter key leaves a hidden newline character ('\n') in the input.
  // Here's a simple solution:
  // After reading the integer, use cin.ignore() to clear this hidden newline
  // character from the input buffer.

  // String
  string s2;
  cout << "\n Enter another string: ";
  getline(cin, s2); // The getline function in C++ is used to read an entire
                    // line of text from the input
  cout << s2 << endl;

  // character
  cout << "\n";
  char ch;
  cin >> ch;
  cout << ch << endl;

  return 0;
}
