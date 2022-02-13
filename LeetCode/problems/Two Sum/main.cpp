class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> M;
        for (int i = 0; i < nums.size(); i++) {
            int c = target - nums[i];
            if (M[c] != 0) return {M[c]-1, i};
            M[nums[i]] = i+1;
        }
        return {0, 0};
    }
};