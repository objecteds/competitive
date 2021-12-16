#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s; cin >> s;

        s.size() > 10 ? s = s[0] + to_string(s.size() - 2) + s[s.size() - 1] : s = s;

        cout << s << '\n';
    }
}