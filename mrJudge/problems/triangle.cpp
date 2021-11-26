#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    int n;
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= i; k++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}