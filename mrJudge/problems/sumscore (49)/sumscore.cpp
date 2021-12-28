#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, sum;
    std::cin >> n;
    sum = 0;
    sum = sum + n;

    while (n != -1) {
        std::cin >> n;
        sum = sum + n;
    }

    sum = sum + 1;

    std::cout << sum;
}