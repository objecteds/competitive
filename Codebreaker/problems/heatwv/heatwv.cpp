#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define int long long
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n, e, ts, te; cin >> n >> e >> ts >> te;
    priority_queue<pair<int, int>> Q;
    vector<int> distance(100005, INF);
    vector<bool> processed(100005, false);
    vector<pair<int, int>> adj[e+5];
    
    for (int i = 0; i < e; i++) {
        int a, b, w; cin >> a >> b >> w;
        adj[a].push_back(make_pair(b, w));
        adj[b].push_back(make_pair(a, w));
    }

    distance[ts] = 0;
    Q.push({0, ts});

    while (!Q.empty()) {
        int a = Q.top().second; Q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        for (auto x: adj[a]) {
            int b = x.first, w = x.second;
            if (distance[a] + w < distance[b]) {
                distance[b] = distance[a] + w;
                Q.push({-distance[b], b});
            }
        }
    }

    if (distance[te] == INT_MAX) {
        cout << -1;
    } else {
        cout << distance[te];
    }
}