#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1; cin >> s1;
    string s2(s1);
    reverse(s2.begin(), s2.end());
    bool palindrome = true;

    for (int i = 0; i < s1.size(); i++) {
        if (tolower(s1[i]) != tolower(s2[i])) {
            palindrome = false;
        }
    }

    palindrome ? cout << "Yes" : cout << "No";
}