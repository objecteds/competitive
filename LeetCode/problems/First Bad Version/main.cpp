// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long lo=1, hi=n, mid;
        while (lo<=hi) {
            mid = (lo+hi)/2;
            if (isBadVersion(mid)) hi=mid-1;
            else lo=mid+1;
        }
        return hi+1;
    }
};