#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, e, q; cin >> n >> e >> q;
    vector<vector<long long>> adj, dist;
    adj = vector<vector<long long>>(n, vector<long long>(n, INF));
    dist = vector<vector<long long>>(n, vector<long long>(n, INF));

    for (int i = 0; i < e; i++) {
        int a, b, w; cin >> a >> b >> w;
        adj[a][b] = w;
        adj[b][a] = w;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                dist[i][j] = 0;
            } else if (adj[i][j]) {
                dist[i][j] = adj[i][j];
            } else {
                dist[i][j] = INF;
            }
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }

    for (int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        if (dist[a][b] > 1000000001) {
            cout << -1 << '\n';
        } else {
            cout << dist[a][b] << '\n';
        }
    }
}