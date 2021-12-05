#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned long long n;
    scanf("%llu", &n);

    if (n < 60) {
        cout << "00";
        to_string(n).length() == 1 ? cout << "0" << n : cout << n;
    } else if (n >= 60 && n < 1440) {
        int hour = floor(n / 60);
        int minute = n % 60;
        to_string(hour).length() == 1 ? cout << "0" << hour : cout << hour;
        to_string(minute).length() == 1 ? cout << "0" << minute : cout << minute;
    } else {
        int hm = n % 1440;
        int hour = floor(hm / 60);
        int minute = hm % 60;
        to_string(hour).length() == 1 ? cout << "0" << hour : cout << hour;
        to_string(minute).length() == 1 ? cout << "0" << minute : cout << minute;
    }
}