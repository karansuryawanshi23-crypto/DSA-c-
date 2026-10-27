#include<bits/stdc++.h>
using namespace std;
//Multiple Function Calls 

int f(int n){
    if(n<=1) return n;
    int  last =f(n-1);
    int secondLast=f(n-2);
    return last + secondLast;
}

int main() {
    int n=4;
    cout<<f(4);
    
    return 0;
}