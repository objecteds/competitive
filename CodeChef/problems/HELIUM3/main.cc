#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int a,b,x,y; cin>>a>>b>>x>>y;
    x*y>=a*b?cout<<"Yes\n":cout<<"No\n";
}

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}