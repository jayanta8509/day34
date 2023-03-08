// Write a Program to Remove brackets from an algebraic expression
#include <iostream>
using namespace std;
void Remove_brackets(char a[]) {
  string ok(a);
  int len = ok.length();
  char b[len];
  int i = 0;
  int k = 0;
  while (a[i] != '\0') {
    if (a[i] != '(' && a[i] != ')') {
      b[k++] = a[i];
    }
    i++;
  }
  cout << b;
}
int main() {
  char a[] = "7x+(2*y)+(7*9)+8";
  Remove_brackets(a);
}