#include <bits/stdc++.h>
using namespace std;
vector<int> V(1000000);

int root(int a) {
    if (a == V[a]) {
        return a;
    }
    return V[a] = root(V[a]);
}

void connect(int a, int b) {
    a = root(a);
    b = root(b);

    if (a != b) {
        V[b] = a;
    }
}

int main() {
    int n, e; cin >> n >> e;
    vector<pair<int, int>> E;
    set<int> S;

    for (int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;
        E.push_back(make_pair(a, b));
    }

    for (int i = 0; i <= n; i++) {
        V[i] = i;
    }

    for (int i = 0; i < e; i++) {
        connect(E[i].first, E[i].second);
    }

    for (int i = 0; i < n; i++) {
        S.insert(root(V[i]));
    }

    cout << S.size();
}