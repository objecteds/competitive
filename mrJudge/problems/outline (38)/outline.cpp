#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, c; cin >> s;
    c = s;
    reverse(c.begin(), c.end());

    cout << s << '\n';
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < i+1; j++) cout << ' ';
        cout << c[i];
        for (int j = 0; j < s.size()-2; j++) cout << ' ';
        cout << s[i];
        cout << '\n';
    }
    
    for (int i = 0; i < s.size()+1; i++) {
        cout << ' ';
    }
    
    cout << c;
}