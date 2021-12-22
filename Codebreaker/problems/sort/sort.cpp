#include <bits/stdc++.h>
using namespace std;
bool stringCompare(string a, string b) {
    if (a.size() == b.size()) {
        return a < b;
    } else {
        return a.size() < b.size();
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> v;

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), stringCompare);

    for (auto x: v) {
        cout << x << " ";
    }
}