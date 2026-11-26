#include<bits/stdc++.h>
using namespace std;
int IntegerBreak(int n){
    vector<int>dp(n+1,0);

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            dp[i]=max(dp[i],j*max(i-j,dp[i-j]));
        }
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;

    cout<<IntegerBreak(n);
    return 0;
}
