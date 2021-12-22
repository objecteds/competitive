#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, inf = 1000001; cin >> n;
    vector<int> isprime, primes;

    for (int i = 0; i < inf; i++) {
        isprime.push_back(1);
    }
 
    for (int i = 2; i*i < inf; i++) {
        if (isprime[i] == 1) {
            for (int j =  i*i; j < inf; j += i) {
                isprime[j] = 0;
            }
        }
    }

    for (int i = 2; i < inf; i++)
        if (isprime[i])
            primes.push_back(i);
 
    cout << primes[n-1];
}