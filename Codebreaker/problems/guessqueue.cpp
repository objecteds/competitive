#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t, v; cin >> n;
    queue<int> Q;
    priority_queue<int> P;
    multiset<int> S;
    bool qq = true, pp = true, ss = true, greater = true;

    for (int i = 0; i < n; i++) {
        cin >> t >> v;
        if (t == 1) {
            if (qq) {
                Q.push(v);
            } 
            if (pp) {
                P.push(v);
            }
            if (ss) {
                S.insert(v);
            }
        } else {
            if (qq) {
                if (!Q.empty() && Q.front() == v) {
                    Q.pop();
                } else {
                    qq = false;
                }
            }
            if (pp) {
                if (!P.empty() && P.top() == v) {
                    P.pop();
                } else {
                    pp = false;
                }
            }
            if (ss) {
                if (greater) {
                    if (*S.rbegin() != v) {
                        ss = false;
                    }
                    S.erase(--S.end());
                    greater = false;
                } else {
                    if (*S.begin() != v) {
                        ss = false;
                    }
                    S.erase(S.begin());
                    greater = true;
                }
            }
        }
    }

    if (qq && !pp && !ss) {
        cout << "queue";
    } else if (pp && !qq && !ss) {
        cout << "priority queue";
    } else if (ss && !pp && !qq) {
        cout << "fickle minded priority queue";
    } else {
        cout << "unsure";
    }
}