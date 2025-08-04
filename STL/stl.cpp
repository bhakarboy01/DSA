#include <bits/stdc++.h>
using namespace std;

int main(){
    // Vectors and Pairs
    vector<pair<int,int>> v1(5,{10,6});
    cout<<v1[3].second<<" ";
    cout<<v1[3].first<<endl;

    
    v1.emplace_back(6,9);
    cout<<v1[5].first<<" ";
    cout<<v1[5].second<<endl;

    v1.push_back({3,4});
    cout<<v1[6].first<<" ";
    cout<<v1[6].second<<endl;

    // Iterators
    vector<int>::iterator it=v1.begin();
    it++;


}