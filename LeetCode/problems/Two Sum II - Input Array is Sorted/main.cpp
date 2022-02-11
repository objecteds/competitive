class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lo=0, hi=numbers.size()-1; 
        vector<int> V;
        while (lo<hi) {
            if (numbers[lo]+numbers[hi] == target) {
                V.push_back(lo+1); V.push_back(hi+1);
                break;
            } 
            else if (numbers[lo]+numbers[hi] < target) lo++;
            else hi--;
        }
        return V;
    }
};