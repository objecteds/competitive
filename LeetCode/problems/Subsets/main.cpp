class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> V;
        for (int b = 0; b < (1<<nums.size()); b++) {
            vector<int> subset;
            for (int i = 0; i < nums.size(); i++) {
                if (b&(1<<i)) subset.push_back(nums[i]);
            }
            V.push_back(subset);
        }
        return V;
    }
};