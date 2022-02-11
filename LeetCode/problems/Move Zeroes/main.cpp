class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        vector<int> V;
        for (auto x: nums) {
            if (x != 0) V.push_back(x);
            else c++;
        }
        for (int i = 0; i < c; i++) {
            V.push_back(0);
        }
        nums = V;
    }
};