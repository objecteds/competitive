#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    string s;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        int x = s[s.size()-1] - '0';
        x % 2 == 0 ? cout << "even" : cout << "odd";
        cout << '\n';
    }
}