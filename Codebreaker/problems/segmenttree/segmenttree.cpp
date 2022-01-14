#include <bits/stdc++.h>
using namespace std;
struct node {
    int s, e, m, val;
    node *l, *r;

    node (int S, int E) {
        s = S, e = E, m = (s + e) / 2;
        val = 0;

        if (s != e) {
            l = new node(s, m);
            r = new node(m+1, e);
        }
    } 

    void update(int X, int V) {
        if (s == X && X == e) {
            val = V;
        } else {
            if (X <= m) {
                l -> update(X, V);
            } else {
                r -> update(X, V);
            }

            val = min(l -> val, r -> val);
        }
    }

    int query(int S, int E) {
        if (s == S && e == E) {
            return val;
        } else if (E <= m) {
            return l -> query(S, E);
        } else if (S >= m+1) {
            return r -> query(S, E);
        } else {
            return min(l -> query(S, m), r -> query(m+1, E));
        }
    }
} *root;

int main() {
    int n, q; cin >> n >> q;
    root = new node(0, n-1);

    for (int i = 0; i < q; i++) {
        int a, b, c; cin >> a >> b >> c;
        if (a == 1) {
            root -> update(b, c);
        } else {
            cout << root -> query(b, c) << '\n';
        }
    }
}
