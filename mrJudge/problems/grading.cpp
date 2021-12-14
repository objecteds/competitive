#include <bits/stdc++.h>
#include "grading.h"
using namespace std;

string gradeMin(int N, int A[]) {
    startTime();
    int c = findMin(N, A);
    int time = stopTime();

    int minimum = A[0];

    for (int i = 0; i < N; i++) {
        if (A[i] < minimum) {
            minimum = A[i];
        }
    }

    if (time > 500) {
        return "Time Limit Exceeded";
    } else if (c != minimum) {
        return "Wrong Answer";
    } else {
        return "Accepted";
    }
}