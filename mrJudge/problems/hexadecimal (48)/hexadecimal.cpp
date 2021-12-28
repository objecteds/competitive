#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        bool ok = true;

        if (s[0] != '#') {
            ok = false;
        } 
        
        for (int j = 1; j < s.size(); j++) {
            if (!(isdigit(s[j]) || s[j] == 'A' || s[j] == 'B' || s[j] == 'C' || s[j] == 'D' || s[j] == 'E' || s[j] == 'F')) {
                ok = false;
                break;
            }
        }

        ok ? cout << "Hexadecimal" << '\n' : cout << "Not Hexadecimal" << '\n';
    }
}