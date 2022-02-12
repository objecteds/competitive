class Solution {
public:
    long long smallestNumber(long long num) {
        string s="";
        int t=0;
        if (num > 0) {
            for (auto x: to_string(num)) {if (x == '0') t++; else s+=x;}
            sort(s.begin(), s.end());
            for (int i = 0; i < t; i++) s.insert(1, "0");
            return stoll(s);
        } else {
            for (auto x: to_string(num)) s += x;
            sort(s.rbegin(), s.rend());
            long long n = stoll(s);
            return 0-n;
        }
    }
};