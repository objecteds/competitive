#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    std::cin >> a;
    
    if (a >= 80) {
        std::cout << "4.0\n";
    } else if (a >= 70 && a <= 79) {
        std::cout << "3.6\n";
    } else if (a >= 65 && a <= 69) {
        std::cout << "3.2\n";
    } else if (a >= 60 && a <= 64) {
        std::cout << "2.8\n";
    } else if (a >= 55 && a <= 59) {
        std::cout << "2.4\n";
    } else if (a >= 50 && a <= 54) {
        std::cout << "2.0\n";
    } else if (a >= 45 && a <= 49) {
        std::cout << "1.6\n";
    } else if (a >= 40 && a <= 44) {
        std::cout << "1.2\n";
    } else {
        std::cout << "0.8\n";
    }
}