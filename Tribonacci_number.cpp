#include<bits/stdc++.h>
using namespace std;
int TriFib(int n){
vector<int> dp(n+1,-1);
if(n==0){
    return 0;
}
if(n==1 || n==2){
    return 1;
}
dp[0]=0;
dp[1]=1;
dp[2]=1;

if(n<=2){
    return dp[n];
}
for(int i=3;i<=n;i++){
    dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
}
return dp[n];

}

int main(){
    int n;
    cin>>n;

    cout<<TriFib(n);
    return 0;
}