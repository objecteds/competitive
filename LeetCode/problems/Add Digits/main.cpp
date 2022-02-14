class Solution {
public:
    int addDigits(int num) {
        string s = to_string(num);
        while (s.size() > 1) {
            int t=0;
            for (auto x: s) {
                t += x - '0';
            }
            s = to_string(t);
        }
        return stoi(s);
    }
};