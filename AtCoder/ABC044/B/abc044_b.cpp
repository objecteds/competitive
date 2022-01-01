#include <bits/stdc++.h>
using namespace std;
int main() {
    string w; cin >> w;
    map<char, int> M;

    for (auto x: w) {
        M[x]++;
    }

    for (auto x: w) {
        if (M[x] % 2 != 0) {
            cout << "No";
            return 0;
        }
    }
    
    cout << "Yes";
}