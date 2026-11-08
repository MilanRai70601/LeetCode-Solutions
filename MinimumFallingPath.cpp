#include<bits/stdc++.h>
using namespace std;
int MiniFallPath(vector<vector<int>> &matrix,int n){
    vector<vector<int>>dp=matrix;
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            int up=matrix[i-1][j];
            int left=INT_MAX;
            if(j>0){
                left=dp[i-1][j-1];
            }

            int right=INT_MAX;
            if(j<n-1){
                right=dp[i-1][j+1];
            }

            dp[i][j]=matrix[i][j]+min({up,right,left});
        }
    }
    return *min_element(dp[n-1].begin(),dp[n-1].end());
}
int main(){
    int n;
    cin>>n;

    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<MiniFallPath(matrix,n);
    return 0;
}