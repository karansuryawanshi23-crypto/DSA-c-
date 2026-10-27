#include<iostream>
using namespace std;

int main() {
    int n= 1212;
    int revNum=0;
    while(n>0){
        int lastDig= n%10;
        cout<<lastDig;
        n/=10;
        revNum=(revNum*10)+lastDig;
    }
    
}