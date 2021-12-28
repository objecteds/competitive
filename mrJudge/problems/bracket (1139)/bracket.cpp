#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    string s; cin >> s;
    stack<char> st;

    for (int i = 0; i < n; i++) {
        char cur = s[i];
        
        if (st.empty()) {
            st.push(cur);
        } else if (st.top() == '(' && cur == ')') {
            st.pop();
        } else {
            st.push(cur);
        }
    }

    st.empty() ? cout << "Valid" : cout << "Invalid";
}