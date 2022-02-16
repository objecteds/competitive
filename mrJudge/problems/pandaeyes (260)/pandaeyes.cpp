#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> A, pair<int, int> B) {
    return A.second < B.second;
}

int main() {
    int n, t=0, c=0; cin >> n;
    vector<pair<int, int>> V;

    for (int i = 0; i < n; i++) {
        int s, e; cin >> s >> e;
        V.push_back(make_pair(s, e));
    }

    sort(V.begin(), V.end(), cmp);

    for (int i = 0; i < n; i++) {
        if (V[i].first >= c) {
            c = V[i].second;
            t++;
        }
    }

    cout << t;
}