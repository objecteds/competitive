#include <bits/stdc++.h>
using namespace std;
int main() {
    char op;
    int a, b; cin >> a >> op >> b;
    
    op == '+' ? cout << a + b : cout << a - b;
}