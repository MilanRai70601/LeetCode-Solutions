#include<bits/stdc++.h>
using namespace std;
int ReverseBits(int n){
    int ans=0;
    for(int i=0;i<32;i++){
        int bit=n&1;
        ans=(ans<<1)|bit;
        n=n>>1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<ReverseBits(n);
    return 0;
}