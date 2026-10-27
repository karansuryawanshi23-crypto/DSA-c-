#include<bits/stdc++.h>
using namespace std;

int ParametrisedWay(int i , int sum){

    if(i<1) {
    cout<<sum;
    return 0;
}
ParametrisedWay(i-1,sum+i);
}

//factorial of n 

int functional(int i ){
    if(i==0) return 1;
    return (i*functional(i-1));
}

// Reverse Of An Array using Recursion 

void arrRev(int l,int r,int arr[]) {
    if(l >= r) return;
    swap(arr[l],arr[r]);
    arrRev(l+1,r-1,arr);
}

// single pointer 
void f(int i,int arr[],int n){
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}

bool checkPalindrome(string &s,int i,int l){
    if(s[i]>=l/2) return true;
    if(s[i]!=s[l-i-1]) return false;
    return checkPalindrome(s,i+1,l);
}
   
int main() {

    int i=3;
    int sum=0;
    ParametrisedWay(3,0);
    cout<<endl;

    cout<<functional(4);
    cout<<endl;
    int arr[] = {1,2,3,5,6,7,8};
   
    int n = 7;
    //arr(0,arr,n)
    f(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    string s="MHDAM";
    int l= s.size()-1;
    cout<<checkPalindrome(s,0,l);

   


 


    return 0;
}