#include<bits/stdc++.h>
using namespace std;
bool BinaryAlter(int n){
    bool res=true;

    while(n>0){
        int prev=n&1;
        n=n>>1;
        if((n&1)==prev){
            return false;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<BinaryAlter(n);
    return 0;
}