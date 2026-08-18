#include<bits/stdc++.h>
using namespace std;

vector<int> luckyNumber(vector<vector<int>> matrix){
int m=matrix.size();
int n=matrix[0].size();
vector<int> result;

for(int i=0;i<m;i++){
    int min=matrix[i][0];
    int col=0;
    for(int j=0;j<n;j++){
        if(min>matrix[i][j]){
            min=matrix[i][j];
            col=j;
        }
    }
    int max=matrix[0][col];

    for(int k=0;k<m;k++){
        if(max<matrix[k][col]){
            max=matrix[k][col];
        }

    }
    if(min==max){
        result.push_back(min);
    }
}
return result;
}

int main(){
    int row;
    int col;
    cin>>row>>col;
    vector<vector<int>> milan(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>milan[i][j];

        }
    }
     vector<int> ans=luckyNumber(milan);
     
   for(int x:ans){
    cout<<x<<" ";
   }


    return 0;
}