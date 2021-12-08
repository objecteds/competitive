#include <bits/stdc++.h>
using namespace std;
int main() {
    int r=0, ind=0, t, l; cin >> l;
    vector<pair<string, int> > v;
    stack<int> st;

    for (int i = 0; i < l; i++) {
        string s; cin >> s;
        if (s == "PUSH" || s == "IFZERO") {
            int n; cin >> n;
            v.push_back(make_pair(s, n));
        } else {
            v.push_back(make_pair(s, 0));
        }
    }

    while (1) {
        string command = v[ind].first;
        int val = v[ind].second;

        if (command == "PUSH") {
            st.push(val);
            ind++;
        }

        if (command == "STORE") {
            r = st.top();
            st.pop();
            ind++;
        }

        if (command == "LOAD") {
            st.push(r);
            ind++;
        }

        if (command == "PLUS") {
            t = st.top();
            st.pop();
            t += st.top();
            st.pop();
            st.push(t);
            ind++;
        }

        if (command == "TIMES") {
            t = st.top();
            st.pop();
            t *= st.top();
            st.pop();
            st.push(t);
            ind++;
        }

        if (command == "IFZERO") {
            t = st.top();
            st.pop();
            if (t == 0) {
                ind = val;
            } else {
                ind++;
            }
        }

        if (command == "DONE") {
            cout << st.top();
            break;
        }
    }
}