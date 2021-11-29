#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    char a0 = a[0];
    char b0 = b[0];

    a[0] = b0;
    b[0] = a0;

    cout << a << " " << b;
}