#include<bits/stdc++.h>
using namespace std;
int MaxiGenArr(int n){
    if(n==0){
        return 0;
    }

    vector<int>dp(n+1,0);
    dp[1]=1;

    for(int i=1;i<=n;i++){
        if(2*i<=n){
            dp[2*i]=dp[i];
        }
        if(2*i+1<=n){
            dp[2*i+1]=dp[i]+dp[i+1];
        }
    }
    return *max_element(dp.begin(),dp.end());
}

int main(){
    int n;
    cin>>n;

    cout<<MaxiGenArr(n);
    return 0;
}