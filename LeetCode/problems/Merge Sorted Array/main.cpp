class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> V;
        for (int i = 0; i < (nums1.size()-nums2.size()); i++) V.push_back(nums1[i]);
        for (auto x: nums2) V.push_back(x);
        sort(V.begin(), V.end());
        nums1 = V;
    }
};