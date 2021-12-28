#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    vector<double> arr;

    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        arr.push_back(k);
    }

    cout << arr[x-1];
}