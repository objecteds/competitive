class Solution {
public:
    int tribonacci(int n) {
        vector<int> V = {0, 1, 1};
        for (int i = 3; i <= 37; i++) {
            V.push_back(V[i-1]+V[i-2]+V[i-3]);
        }
        return V[n];
    }
};