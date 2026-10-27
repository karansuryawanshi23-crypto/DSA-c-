
#include<bits/stdc++.h>
using namespace std ; 

void printFactors(int n){
    vector<int> list;

    for (int i=0;i<=sqrt(n);i++){
        if(n%i==0){
            list.push_back(i);
            if((n/i)!=i){
                list.push_back(n/i);
            }
        }
    }
    sort(list.begin(),list.end());
    for(auto it : list) cout<<it<<" ";
}

int main() {

    int n =36;

    for(int i=1; i<=n;i++){
        if(n%i==0){
            cout<<i;cout<<",";
        }
        
    }
    printFactors(n);

    return 0;

}