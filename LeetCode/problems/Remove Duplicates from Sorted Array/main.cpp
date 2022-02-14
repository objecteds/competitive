class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> S;
        for (auto x: nums) S.insert(x);
        nums.clear();
        for (auto x: S) nums.push_back(x);
        return nums.size();
    }
};