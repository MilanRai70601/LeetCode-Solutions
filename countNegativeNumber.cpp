#include<bits/stdc++.h>
using namespace std;

int CountNegative(vector<vector<int>> grid){
    int count =0;
    int row=grid.size();
    int col=grid[0].size();

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(grid[i][j]<0){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<vector<int>> nums(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nums[i][j];
        }
    }

    int res=CountNegative(nums);
    cout<<res;

    return 0;

}
