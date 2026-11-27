#include<bits/stdc++.h>
using namespace std;

int NumSquare(int n){
    vector<int> dp(n+1,n+1);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            dp[i]=min(dp[i],1+dp[i-j*j]);
        }
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<NumSquare(n);
    return 0;
}