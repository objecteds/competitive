class Solution {
public:
    int fib(int n) {
        vector<int> V = {0, 1};
        for (int i = 2; i <= 30; i++) {
            V.push_back(V[i-1]+V[i-2]);
        }
        return V[n];
    }
};