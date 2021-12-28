#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x; cin >> n;
    vector<int> v;
    stack<int> st;

    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        x = v[i];
        if (st.size() == 0) {
            st.push(x);
        } else {
            if (st.top() > x) {
                st.push(x);
            } else {
                while (st.size() >= 1 && st.top() <= x) {
                    st.pop();
                }
                st.push(x);
            }
        }
    }

    int s = st.size();

    for (int i = 0; i < s; i++) {
        cout << st.top() << '\n';
        st.pop();
    }
}