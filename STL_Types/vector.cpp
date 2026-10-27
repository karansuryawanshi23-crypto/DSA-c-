#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

    
void explainPair() {
    pair<int,int> karan ={1,3};
      

    cout << karan.first<<" "<<karan.second;
    cout<<endl;

    pair<int, pair<int,int>> k = {1,{22,33}};

    cout << k.second.second; cout<<endl;

    pair<int,int> arr[] = { {1,2},{3,4},{5,6}};
    cout<<arr[1].second;

}

void explainVector() {
    vector<int> karan(3,100);
    //[100,100,100]

    karan.push_back(1);
    karan.push_back(33);
   // cout<<karan[4];  
    

    // itertors 

    vector<int> k = { 1,2,3,4,5 };

    vector<int>::iterator ka = k.begin();
    ka++;
    cout<<*(ka)<<" ";

    vector<int>::iterator kk=k.end();
    kk--;
    cout<<"  ",*(kk);
}


int main() {

    // explainPair();
    explainVector();
    return 0;
}