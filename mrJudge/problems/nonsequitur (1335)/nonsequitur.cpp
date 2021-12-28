#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n, s, e; cin >> n >> s >> e;

    for (int i = s; i <= e; i++) {
        if ((i % n) == 0) {
            cout << i << '\n';
        }
    }
}