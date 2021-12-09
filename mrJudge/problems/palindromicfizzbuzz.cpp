#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b; cin >> a >> b;
    for (long long i = a; i <= b; i++) {
        string s1 = to_string(i);
        string s2(s1);
        reverse(s2.begin(), s2.end());
        if (s1 == s2) {
            cout << "Palindrome!\n";
        } else {
            cout << i << '\n';
        }
    }
}