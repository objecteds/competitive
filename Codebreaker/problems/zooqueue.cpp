#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n, ptr = 0; cin >> n;
    vector<int> H;
    stack<int> st;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        H.push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        st.push(i);
        while (!st.empty() && H[ptr] == st.top()) {
            st.pop();
            ptr++;
        }
    }

    ptr == n ? cout << "safe and sound" : cout << "seven years of misfortune";
}