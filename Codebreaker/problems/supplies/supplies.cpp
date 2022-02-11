#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define int long long
signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n, e, h, t; cin >> n >> e >> h >> t;
    priority_queue<pair<int, int>> Q;
    vector<int> distance(100005, INF), back(100005, INF);
    vector<bool> processed(100005, false), backproc(100005, false);
    vector<pair<int, int>> adj[e+5];
    
    for (int i = 0; i < e; i++) {
        int a, b, w; cin >> a >> b >> w;
        adj[a].push_back(make_pair(b, w));
    }

    distance[h] = 0;
    Q.push({0, h});

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

    back[t] = 0;
    Q.push({0, t});

    while (!Q.empty()) {
        int a = Q.top().second; Q.pop();
        if (backproc[a]) continue;
        backproc[a] = true;
        for (auto x: adj[a]) {
            int b = x.first, w = x.second;
            if (back[a] + w < back[b]) {
                back[b] = back[a] + w;
                Q.push({-back[b], b});
            }
        }
    }

    if (distance[t] == INT_MAX or back[h] == INT_MAX) {
        cout << -1;
    } else {
        cout << distance[t] + back[h];
    }
}