#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, c, avg = 0;
    map<string, int> m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s1;
        int s2;
        
        cin >> s1 >> s2;

        m[s1] = s2;
    }

    cin >> c;

    for (int i = 0; i < c; i++) {
        string s;
        cin >> s;

        avg += m[s];
    }

    cout << floor(avg/c);
}