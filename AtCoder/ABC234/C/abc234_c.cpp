#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned long long k; cin >> k;
    string s = bitset<128>(k).to_string(), ans;
    bool flag = false;

    for (auto x: s) {
        if (x == '1') {
            flag = true;
            ans += '2';
        } else if (x == '0' and flag) {
            ans += '0';
        }
    }

    cout << ans;
}