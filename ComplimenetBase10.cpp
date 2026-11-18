#include<bits/stdc++.h>
using namespace std;
int ComplimentBase(int n){
    if(n==0){
        return 1;
    }
    int mask=1;
    while(mask<n){
        mask=(mask<<1)|1;
    }

    return ~n & mask;
}
int main(){
    int n;
    cin>>n;
    cout<<ComplimentBase(n);
    return 0;
}