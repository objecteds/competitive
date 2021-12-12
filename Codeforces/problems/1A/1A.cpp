#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, a; cin >> n >> m >> a;

    cout << fixed << setprecision(0) << ceil(n/(double)a) * ceil(m/(double)a);
}