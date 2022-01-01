#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b, c; cin >> a >> b >> c;
    deque<int> A, B, C;

    for (auto x: a) A.push_back(x);
    for (auto x: b) B.push_back(x);
    for (auto x: c) C.push_back(x);

    char turn = A.front();
    A.pop_front();

    while (true) {
        if (turn == 'a') {
            if (A.empty()) {
                cout << "A";
                break;
            } else {
                turn = A.front();
                A.pop_front();
            }
        } else if (turn == 'b') {
            if (B.empty()) {
                cout << "B";
                break;
            } else {
                turn = B.front();
                B.pop_front();
            }
        } else {
            if (C.empty()) {
                cout << "C";
                break;
            } else {
                turn = C.front();
                C.pop_front();
            }
        }
    }
}