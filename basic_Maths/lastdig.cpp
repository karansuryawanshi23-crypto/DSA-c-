#include<iostream>
using namespace std;

int main() {

    int n = 1234;
    while(n>0){
        int lastDig=n%10;
        cout<<lastDig;
        n=n/10;

    }

    return 0;
}