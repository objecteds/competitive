#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, c; cin >> n >> c;
    cout << n/(c+1) << ' ' << (n/(c+1)) + (n%(c+1));
}