#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> & matrix,int rows1,int col1){
    vector<vector<int>> milan(col1,vector<int> (rows1));
for(int i=0;i<rows1;i++){
    for(int j=0;j<col1;j++){
milan[j][i]=matrix[i][j];
    }
}
return milan;
}
int main(){
    int rows;
   int col;
   cin>>rows>>col;
   vector<vector<int>> pranav(rows,vector<int>(col));
   for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        cin>>pranav[i][j];
    }
   }
   
   vector<vector<int>> ans=transpose(pranav,rows,col);
   for(int i =0;i<col;i++){
    for(int j=0;j<rows;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
   
    return 0;
}