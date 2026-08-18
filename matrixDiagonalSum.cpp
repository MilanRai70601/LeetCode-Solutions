#include<bits/stdc++.h>

using namespace std;
int DiagonalSum(vector<vector<int>>& mat,int n1){
    int sum=0;
for(int i=0;i<n1;i++){
sum =sum+ mat[i][i];
if(i!=(n1-1)-i){
sum=sum+mat[i][(n1-1)-i];
}
}
return sum;
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

  int ans= DiagonalSum(matrix,n);
   cout<<ans;
    return 0;
}