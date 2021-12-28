#include <bits/stdc++.h>
using namespace std;
int main() {
    char x;
    int a, b;
    cin >> a >> x >> b;

    switch(x) {
        case '+':
            std::cout << a + b;
            break;

        case '-':
            std::cout << a - b;
            break;

        case '*':
            std::cout << a * b;
            break;
    }
}