#include<iostream>
using namespace std ;

int main() {
    int n=121;
    int dup=n;
    int revNum=0;
    
    while(n){
        int lastDig= n%10;
        n= n/10;
        revNum=(revNum*10)+lastDig;
    }
    if(revNum==dup) cout<<" True ";
    else cout<<"False";

    return 0;
}