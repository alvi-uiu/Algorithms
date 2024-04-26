#include <iostream>
#include <string>
using namespace std;

void Print(string name) { cout << name << endl; }

void say() { cout << "let Tamim join in the club "; }

int sum(int num1, int num2) { return num1 + num2; }

int maxx(int a, int b) {
  if (a >= b)
    return a;

  return b;
}

int main() {

  // void fun:

  cout << "enter your name : ";
  string name;
  getline(cin, name);
  Print(name);

  // void non parameterized :

  say();

  // parameterized :
  cout << "\n";
  cout << "enter two numbers to print sum : ";
  int num1, num2;
  cin >> num1 >> num2;
  cout << "sum = " << sum(num1, num2) << endl;

  // ex2 :

  cout << "enter two numbers to find out max : ";
  int a, b;
  cin >> a >> b;
  cout << "max = " << maxx(a, b) << endl;

  return 0;
}