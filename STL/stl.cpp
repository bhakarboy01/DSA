#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v1(5,{10,6});
    cout<<v1[3].second;
    cout<<v1[3].first;

    
    v1.emplace_back(6,9);
    cout<<v1[5].first;
    cout<<v1[5].second;
}