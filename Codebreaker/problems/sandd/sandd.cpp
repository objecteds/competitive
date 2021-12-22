#include "sandd.h";
int getPrice(int P) {
    int lo = 0, hi = P;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        long long s = supply(mid), d = demand(mid);

        if (s < d) {
            lo = mid + 1;
        } else if (s > d) {
            hi = mid - 1;
        } else {
            return mid;
        }
    }
    return lo;
}