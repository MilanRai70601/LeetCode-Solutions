#include<bits/stdc++.h>
using namespace std;
int contiArr(vector<int> &ans,int n1){
    unordered_map<int,int>mp;
    int prefix=0;
    int len=0;
    int maxLen=0;
    mp[0]=-1;

    for(int i=0;i<n1;i++){
        if(ans[i]==0){
            ans[i]=-1;
        }
    }
    for(int i=0;i<n1;i++){
        prefix=prefix+ans[i];
        if(mp.count(prefix)){
            len=i-mp[prefix];
        }else{
            mp[prefix]=i;
        }
        maxLen=max(maxLen,len);
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

    cout<<contiArr(nums,n);

    return 0;
}