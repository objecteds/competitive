#include <bits/stdc++.h>
using namespace std;
string winner(string S) {
    int curp=0, curr=0, p=0, r=0;

    for (int i = 0; i < S.size(); i++) {
        char point = S[i];

        if (point == 'R') {
            curr++;
        } else {
            curp++;
        }

        if (curr >= 11 && curr - curp >= 2) {
            r++;
            curp = 0;
            curr = 0;
        } else if (curp >= 11 && curp - curr >= 2) {
            p++;
            curp = 0;
            curr = 0;
        }

        if (p == 3 || r == 3) {
            break;
        }
    }

    if (p > r) {
        return "Potato";
    } else {
        return "Rar";
    }
}

