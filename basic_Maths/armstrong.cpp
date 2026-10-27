#include<iostream>
using namespace std;

int main () {

    int sum=0;
    int n=371;
    int dup = n;

    while(n>0){
        int lastDig = n%10;
        sum= sum+(lastDig*lastDig*lastDig);
        n=n/10;;
    }
    if(sum==dup){
        cout<<"Valid Armstrong Number : ";cout<<sum; 
    } else cout<<"Inavild Armstrong number: ";

    return 0;
}