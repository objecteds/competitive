#include <bits/stdc++.h>
using namespace std;
int main() {
    int q; cin >> q;
    queue<int> Q;
    unordered_map<int, int> inq, cnt;

    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        if (x == 1) {
            int n; cin >> n;
            Q.push(n);
            inq[n] = 1;
            cnt[n]++;
        } else if (x == 2) {
            int n; cin >> n;
            inq[n] = 0;
        } else if (x == 3) {
            while (true) {
                int n = Q.front();
                Q.pop();
                cnt[n]--;
                
                if (inq[n] == 1 && cnt[n] == 0) {
                    cout << n << ' ';
                    inq[n] = 0;
                    break;
                }
            }
        }
    }
}