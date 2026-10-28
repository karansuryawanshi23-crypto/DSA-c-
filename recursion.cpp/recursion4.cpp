#include<bits/stdc++.h>
using namespace std;

void subSequence(int index , int arr[], vector<int> &ds, int n  ){
    if(index==n){
        for (auto it : ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return ;
    }
    // taking index into subsequence
    ds.push_back(arr[index]);
    subSequence(index+1,arr,ds,n);
    ds.pop_back();

    // not taking 
    subSequence(index+1,arr,ds,n);


}

// subsequence sum =k [1,2,1] = [1,1],[2];

int subsequenceSum(int index,int arr[],vector<int> &ks,int n,int sum,int s){
    if(index==n){
        if(s==sum){
        for(auto it : ks) cout<<it<< " ";
        cout<< endl;
        return 1;
    }
    return 0;
}
ks.push_back(arr[index]);
s+= arr[index];
int r = (subsequenceSum(index+1,arr,ks,n,sum,s));

s-= arr[index];
ks.pop_back();
int l = (subsequenceSum(index+1,arr,ks,n,sum,s));
return l+r;
}

int main() {

    int arr[] = {1,2,1};
    int n = 3;
    vector<int> ds;
    int sum=2;
    vector<int>ks;
    // subSequence(0,arr,ds,n);
    subsequenceSum(0,arr,ks,n,sum,0);

    return 0;
}