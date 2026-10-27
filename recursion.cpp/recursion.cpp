#include<bits/stdc++.h>
using namespace std;

int cnt =0;
void print() {
    if(cnt==3) return ;
    //baseline condition used in these function 
    cout<<cnt<<endl;
    cnt++;
    print();
}

// print number n time using recursion 

void printName(int i,int  n ) { 

    if( i > n) return;
   
    cout<<"Karan";
    cout<<endl;
    
    printName(i+1,n);
}

void printOneToN(int i, int n){

    
    if(i>n) return ;
    cout<<i;cout<<",";
    printOneToN(i+1,n);
}

void PrintNtoOne(int i ,int n){

    if(i>n) return ;
    PrintNtoOne(i+1,n);
    cout<<i;cout<<",";
}
int main() {
    cout<<"Recursion ";
    int n=5;
    int i=1;
  

    // print();
   // printName(i,n);
    PrintNtoOne(1,10);
    return 0;
}