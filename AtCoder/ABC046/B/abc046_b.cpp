#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    long long t=k;

    for (int i = 0; i < n-1; i++) t *= k - 1;
    
    cout << t;
}