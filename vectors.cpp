#include<bits/stdc++.h>
using namespace std;
void vector1(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<int>::iterator i=v.begin();
    i++;
    cout<<*(i)<<"";
}


int main(){
    return 0;
}