#include<bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int> &nums,int n1){
    int leftsum=0;
    int rightsum=0;
    int totalsum=0;
    
    for(int i=0;i<n1;i++){
        totalsum=totalsum+nums[i];
    }

    for(int i=0;i<n1;i++){
        rightsum=totalsum-leftsum-nums[i];

        if(rightsum==leftsum){
            return i;
        }
        leftsum+=nums[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> milan(n);
    for(int i=0;i<n;i++){
        cin>>milan[i];
    }

    int res=pivotIndex(milan,n);
    cout<<res;

}