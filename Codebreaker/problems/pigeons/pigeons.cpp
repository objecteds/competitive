#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    bool accepted = true;
    cin >> n >> m;
    int c = 0;

    for (int i = 0; i < m; ++i) {
        string s;
        cin >> s;

        if (s == "LAND") {
            c++;
        } else if (s == "LEAVE") {
            c--;
        } else {
            c = 0;
        }

        if (c > n) {
            accepted = false;
        }
    }

    accepted ? cout << "PLAN ACCEPTED" << endl : cout << "PLAN REJECTED" << endl;
}