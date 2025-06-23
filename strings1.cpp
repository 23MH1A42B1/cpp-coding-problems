#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str="murali";
    cout<<str.size()<<endl;
    sort(str.begin(),str.end());
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}