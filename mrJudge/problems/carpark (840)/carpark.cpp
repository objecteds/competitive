#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, s; cin >> n >> s;
    vector<int> lots;
    priority_queue<int, vector<int>, greater<int> > gaps;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        lots.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        if (lots[i] == 1) {
            break;
        } else {
            lots[i] = -1;
        }
    }

    int count = 0, total = 0, prev = 0, diffs = 0;

    for (int i = 0; i < n; i++) {
        if (lots[i] == -1) {
            continue;
        } else if (lots[i] == 0) {
            count++;
            if (prev) {
                diffs++;
            }
            prev = 0;
        } else if (lots[i] == 1) {
            total++;
            if (count > 0) {
                gaps.push(count);
                count = 0;
            }
            prev = 1;
        }
    }

    if (lots[lots.size() - 1] == 1) {
        diffs++;
    }

    for (int i = s; i < diffs; i++) {
        total += gaps.top();
        gaps.pop();
    }
    
    cout << total;
}