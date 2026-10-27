#include<bits/stdc++.h>
using namespace std;
//Multiple Function Calls 

int f(int n){
    if(n<=1) return n;
    int  last =f(n-1);
    int secondLast=f(n-2);
    return last + secondLast;
}
//print all subsequesnces 
// [3,1,2] == ( , 3,1,2,31,12,312,32)


int main() {
    int n=4;
    cout<<f(4);
    
    return 0;
}