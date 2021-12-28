#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l, ans=0; cin >> n >> l;
    set<string> s;
    
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        s.insert(x);
    }

    vector<string> v1(s.begin(), s.end());
    vector<int> v2;

    for (int i = 0; i < v1.size(); i++) {
        int t=0;
        for (int j = 0; j < v1[i].size(); j++) {
            t += tolower(v1[i][j]) - 'a' + 1;
        }
        v2.push_back(t);
    }

    sort(v2.rbegin(), v2.rend());

    for (int i = 0; i < l; i++) {
        ans += v2[i];
    }

    cout << ans;
}