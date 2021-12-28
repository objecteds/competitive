#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;

    for (int ii = 0; ii < t; ii++) {
        int row; cin >> row;
        vector<int> v, d; 
        set<int> s;

        for (int i = 0; i < 4; i++) {
            if (i == row-1) {
                for (int j = 0; j < 4; j++) {
                    int x; cin >> x;
                    v.push_back(x);
                    s.insert(x);
                }
            } else {
                for (int j = 0; j < 4; j++) {
                    int x; cin >> x;
                    d.push_back(x);
                }
            }
        }

        cin >> row;

        for (int i = 0; i < 4; i++) {
            if (i == row-1) {
                for (int j = 0; j < 4; j++) {
                    int x; cin >> x;
                    v.push_back(x);
                    s.insert(x);
                }
            } else {
                for (int j = 0; j < 4; j++) {
                    int x; cin >> x;
                    d.push_back(x);
                }
            }
        }

        if (s.size() == 8) {
            cout << "Case #" << ii+1 << ": Volunteer cheated!\n";
            continue;
        } else if (s.size() <= 6) {
            cout << "Case #" << ii+1 << ": Bad magician!\n";
            continue;
        }

        for (int i = 0; i < v.size(); i++) {
            if (count(v.begin(), v.end(), v[i]) == 2) {
                cout << "Case #" << ii+1 << ": " << v[i] << '\n';
                break;
            }
        }
    }
}