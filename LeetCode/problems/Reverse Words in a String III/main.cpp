class Solution {
public:
    string reverseWords(string s) {
        vector<string> V;
        string c = "";
        s += " ";
        
        for (auto x: s) {
            if (x == ' ') {
                V.push_back(c);
                c = "";
            } else {
                c += x;
            }
        }
        
        for (int i = 0; i < V.size(); i++) {
            c = V[i];
            reverse(c.begin(), c.end());
            V[i] = c;
        }
        
        c = "";
        
        for (int i = 0; i < V.size()-1; i++) c += V[i] + " ";
        
        c += V[V.size()-1];
        
        return c;
    }
};