class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> V;
        for (auto x: arr) {
            if (x == 0) V.push_back(x);
            V.push_back(x);
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = V[i];
        }
    }
};