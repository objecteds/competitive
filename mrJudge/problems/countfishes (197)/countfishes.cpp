#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int tc, inf=1000001; cin >> tc;
    vector<int> isprime(inf, 1), prefix(inf);
    
    for (int i = 2; i*i < inf; i++) {
        if (isprime[i]) {
            for (int j = i*i; j < inf; j+= i) {
                isprime[j] = 0;
            }
        }
    }

    prefix[0] = 0, prefix[1] = 0;

    for (int i = 2; i < inf; i++) {
        prefix[i] = prefix[i-1];
        if (isprime[i]) {
            prefix[i]++;
        }
    }

    while (tc--) {
        int p, q; cin >> p >> q;
        cout << prefix[q] - prefix[p-1] << '\n';
    }
}