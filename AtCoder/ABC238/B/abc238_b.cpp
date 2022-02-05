#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, maxv=0, rot=0; cin >> n;
    vector<long long> A;
    A.push_back(0);
    A.push_back(360);

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        rot += x;
        rot %= 360;
        A.push_back(rot);
    }

    sort(A.begin(), A.end());

    for (int i = 1; i < n+2; i++) {
        maxv = max(A[i]-A[i-1], maxv);
    }

    cout << maxv;
}