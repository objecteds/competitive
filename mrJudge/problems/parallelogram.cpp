#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  string s;

  std::cin >> n;
  std::cin >> s;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    cout << s << "\n";
  }
}