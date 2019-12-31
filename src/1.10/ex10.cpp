#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int i = A;
  while (i >= 0) {
    cout << "]";
    i--;
  }
  cout << endl;

  int j = B;
  while (j >= 0) {
    cout << "]";
    j--;
  }
  cout << endl;
}
