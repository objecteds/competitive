#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    long long n, k, cur, ans=0, prev=0; cin >> n >> k;
    priority_queue<long long> pq;
    queue<long long> q;

    for (int i = 0; i < k; i++) {
        cin >> cur;
        pq.push(cur);
    }

    for (int i = 0; i < n-k; i++) {
        cin >> cur;
        q.push(cur);
    }

    while (!pq.empty()) {
        prev += pq.top();
        pq.pop();
        if (!q.empty()) {
            pq.push(q.front());
            q.pop();
        }
        ans = max(ans, prev);
    }

    cout << ans;
}
