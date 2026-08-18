#include<bits/stdc++.h>
using namespace std;
vector<int> findNum(vector<int>milan, int n1){
    vector<int> res2;
    for(int i=0;i<n1;i++){
int x=abs(milan[i]);
if(milan[x-1]>0){
    milan[x-1]=-milan[x-1];
}
    }

    for(int i=0;i<n1;i++){
        if(milan[i]>0){
            res2.push_back(i+1);
        }
    }
    return res2;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<int> res=findNum(nums,n);
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}