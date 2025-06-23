#include<bits/stdc++.h>
using namespace std;
void pairs(){
    pair<int ,int> p={1,2};
    cout<<p.second<<endl;
    pair<int,pair<int,int>> s={1,{3,4}};
    cout<<s.first<<" "<<s.second.first<<endl;
    pair<int,int> arr[]={{1,2},{3,4}};
    cout<<arr[0].first;
    // pair<int,int> p1={1,2,3,4};
    // cout<<p1.first<<" "<<p1.second;
}
int main(){
    pairs();
    return 0;
}