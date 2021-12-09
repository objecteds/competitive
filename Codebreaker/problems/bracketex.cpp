#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<char> st;
    int l; cin >> l;
    string s; cin >> s;

    for (int i = 0; i < l; i++) {
        char current = s[i];
        if (st.size() == 0) {
            st.push(current);
        } else if ((current == '}' && st.top() == '{') || (current == ']' && st.top() == '[') || (current == ')' && st.top() == '(')) {
            st.pop();
        } else {
            st.push(current);
        }
    }

    st.size() == 0 ? cout << "Valid" : cout << "Invalid";
}