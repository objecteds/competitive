#include <iostream>
using namespace std;

int main(){
    int n, total=0;
    int price[20000], increment[20000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> price[i];
    } for(int i=0;i<n;i++){
        cin >> increment[i];
    }for(int i=0;i<n;i++){
        int e=-1, ind=-1;
        for(int j=0;j<n;j++){
            if(increment[j]>e){
                e = increment[j];
                ind = j;
            }
        }
        total += price[ind] + e*i;
        price[ind] = -1;
        increment[ind] = -1;
    }
    cout << total << endl;
}