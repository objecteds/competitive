#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int l = 0;
    string s;

    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        if (x.size() > l) {
            s = x;
            l = x.size();
        }
    }

    cout << s;
}