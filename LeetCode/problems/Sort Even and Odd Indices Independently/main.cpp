class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odds, evens;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) evens.push_back(nums[i]);
            else odds.push_back(nums[i]);
        }
        
        sort(odds.rbegin(), odds.rend()); sort(evens.begin(), evens.end());
        
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) nums[i] = evens[i/2];
            else nums[i] = odds[i/2];
        }
        
        return nums;
    }
};