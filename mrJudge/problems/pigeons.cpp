#include <bits/stdc++.h>
using namespace std;
int main() {
    int pigeons;
    int orders;
    int pinorder = 0;
    int exceed = 0;
    
    cin >> pigeons >> orders;
    
    for (int i = 0; i < orders; i++) {
        string order;
        cin >> order;
        
        if (order == "LAND") {
            pinorder = pinorder + 1;
            if (pigeons < pinorder) {
                exceed = 1;
            }
        } else if (order == "LEAVE") {
            pinorder = pinorder - 1;
        } else if (order == "EVACUATE") {
            pinorder = 0;
        }
    }
    
    if (exceed > 0) {
        cout << "PLAN REJECTED\n";
    } else {
        cout << "PLAN ACCEPTED\n";
    }
}