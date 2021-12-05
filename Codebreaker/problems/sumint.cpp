#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t, d;
    t = 0;
    cin >> d;

    for (int i = 0; i < d; i++) {
        int a;
        cin >> a;
        t += a;
    }

    cout << t;
}