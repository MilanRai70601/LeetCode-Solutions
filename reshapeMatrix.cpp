#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixShape(vector<vector<int>> &mat1,int r,int c){
    int rows=mat1.size();
    int cols=mat1[0].size();
    int x=0;
    int y=0;

    vector<vector<int>> milan1(r,vector<int>(c));
     if(r*c!=rows*cols){
                return mat1;
            }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           

            milan1[x][y]=mat1[i][j];
            y++;
            if(y==c){
                y=0;
                x++;
            }
        }
    }
    return milan1;
}
int main(){
    int rows;
    int col;
    cin>>rows>>col;
    int r1;
    int c1;
    cin>>r1>>c1;

    vector<vector<int>> mat(rows,vector<int>(col));
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }

    vector<vector<int>> ans=matrixShape(mat,r1,c1);
    for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++){
    cout<<ans[i][j]<<" ";
}
cout<<endl;
}    return 0;
}