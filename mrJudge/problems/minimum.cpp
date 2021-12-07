#include <bits/stdc++.h>
using namespace std;
int findMin(int N, int A[]) {
    int minimum = A[0];

    for (int i = 0; i < N; i++) {
        if (A[i] < minimum) {
            minimum = A[i];
        }
    }

    return minimum;
}