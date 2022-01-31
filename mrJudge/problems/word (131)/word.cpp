#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; getline(cin, s);
    int t;
    
    if (isdigit(s[0]) or isalpha(s[0])) {
        t = 1;
    } else {
        t = 0;
    }

    for (int i = 1; i < s.size(); i++) {
        if ((isdigit(s[i]) or isalpha(s[i])) and not (isdigit(s[i-1]) or isalpha(s[i-1]))) {
            t++;
        }
    }
    
    cout << t;
}