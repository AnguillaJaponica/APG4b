#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int count = 0;

  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '+') {
      count++;
    } else if (S.at(i) == '-') {
      count--;
    }
  }
  std::cout << count + 1 << endl;
}
