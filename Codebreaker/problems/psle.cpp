#include <bits/stdc++.h>
using namespace std;
int main() {
    int s;
    std::cin >> s;
    
    if (s >= 91) {
        std::cout << "A*\n";
    } else if (s >= 75 && s <= 90) {
        std::cout << "A\n";
    } else if (s >= 60 && s <= 74) {
        std::cout << "B\n";
    } else if (s >= 50 && s <= 59) {
        std::cout << "C\n";
    } else if (s >= 35 && s <= 49) {
        std::cout << "D\n";
    } else if (s >= 20 && s <= 34) {
        std::cout << "E\n";
    } else {
        std::cout << "U\n";
    }
}