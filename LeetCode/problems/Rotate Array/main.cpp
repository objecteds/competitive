class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        vector<int> V;
        for (int i = nums.size()-k; i < nums.size(); i++) {
            V.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size()-k; i++) {
            V.push_back(nums[i]);
        }
        nums = V;
    }
};