#include<bits/stdc++.h>
using namespace std;

int main() {

    int n =20;
    int m=28;
    // cin>>n;
    // cin>>m;

    for(int i=1;i<=min(n,m);i++){
        if(n%i==0 && m%i==0){
            cout<<i;
        }
    }

    return 0;

}