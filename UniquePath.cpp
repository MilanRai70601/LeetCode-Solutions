// #include<bits/stdc++.h>
// using namespace std;
// int UniquePath(int &m, int &n){
//     if(m==1 || n==1){
//         return 1;
//     }
//     vector<vector<int>> dp(m,vector<int>(n));
//     for(int i=1;i<m;i++){
//         dp[i][0]=1;
//         for(int j=1;j<n;j++){
//             dp[0][j]=1;
//             dp[i][j]=dp[i-1][j]+dp[i][j-1];
//         }
//     }
//     return dp[m-1][n-1];
// }
// int main(){
//     int m,n;
//     cin>>m>>n;

//     cout<<UniquePath(m,n);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int UniquePath(int &m, int &n){
vector<int> dp(n,1);
for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
        dp[j]=dp[j]+dp[j-1];
    }
}
       return dp[n-1];
}
int main(){
    int m,n;
    cin>>m>>n;

    cout<<UniquePath(m,n);
    return 0;
}