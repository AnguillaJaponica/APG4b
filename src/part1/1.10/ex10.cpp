#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  cout << "A:";
  int i = A;
  while (i >= 1) {
    cout << "]";
    i--;
  }
  cout << endl;

  cout << "B:";
  int j = B;
  while (j >= 1) {
    cout << "]";
    j--;
  }
  cout << endl;
}
