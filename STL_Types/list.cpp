#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls;
    ls.push_back(2);
    ls.push_front(1);

    for(auto s : ls){
        cout<<s<<" ";
    }
    return 0;

}