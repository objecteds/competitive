class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> V;
        sort(nums.begin(), nums.end());
        do {
            V.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        return V;
    }
};