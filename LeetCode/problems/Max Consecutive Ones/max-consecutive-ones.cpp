class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=nums[0], maxv=nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == 1) {
                c++;
                maxv = max(maxv, c);
            } else {
                c = 0;
            }
        }
        return maxv;
    }
};