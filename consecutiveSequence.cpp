#include<bits/stdc++.h>
using namespace std;
int conSequence(vector<int>ans,int n1){
    if(ans.empty()){
        return 0;
    }
    sort(ans.begin(),ans.end());
    int currentLen=1;
    int maxLen=1;

    for(int i=1;i<n1;i++){
        if(ans[i]==ans[i-1]){
            continue;
        }else if(ans[i]==ans[i-1]+1){
            currentLen++;
        }else{
            currentLen=1;
        }
        maxLen=max(maxLen,currentLen);
    }
    return maxLen;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
}   
cout<<conSequence(nums,n);
 return 0;
}