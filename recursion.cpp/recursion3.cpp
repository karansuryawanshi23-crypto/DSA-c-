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

void printF(int ind, vector<int> &ds,int arr[],int k ){
    if(ind==k){
        for (auto it : ds){
            cout<<it<<",";
        }
        if(ds.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }
    // Take Particular index into subsequence
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,k);
    ds.pop_back();
    //not take 
    printF(ind+1,ds,arr,k);
}
int main() {
    int n=4;
   // cout<<f(4);
    int arr[]={3,1,2};
    int k=3;
    vector<int> ds;
    printF(0,ds,arr,k);
    
    return 0;
}