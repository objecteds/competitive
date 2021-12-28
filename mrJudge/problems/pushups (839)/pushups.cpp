#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    vector<int> divsum(1000000), prefix(1000000);
    
    for (int i = 1; i <= 1000000; i++) {
        for (int j = i; j <= 1000000; j += i) {
            divsum[j] += i;
        }
    }

    for (int i = 1; i <= 1000000; i++) {
        prefix[i] = max(prefix[i-1], divsum[i]);
    }

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << prefix[n] << '\n';
    }
}