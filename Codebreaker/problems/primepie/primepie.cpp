#include <bits/stdc++.h>
#include "primepie.h"
using namespace std;

long long int amountEaten(int N) {
    int inf=15486000;
    unsigned long long t=0;
    vector<int> isprime(inf, 1), primes;
 
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

    for (int i = 0; i < N; i++) {
        t += primes[i];
    }

    return t;
}