#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, mod, a=1, b=1, c;
    cin >> n >> mod;
    if(n>=3){
        for(int i=2;i<n;i++){
            c = (a+b)%mod;
            a = b;
            b = c;
        }
    }else
        c = 1;
    cout << c << endl;
}