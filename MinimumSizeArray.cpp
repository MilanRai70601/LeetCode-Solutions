#include<bits/stdc++.h>
using namespace std;
int MinSizeArr(vector<int> & nums, int k){
    int left=0;
    int sum=0;
    int ans=INT_MAX;
    for(int right=0;right<nums.size();right++){
         sum+=nums[right];

         while(sum>=k){
            ans=min(ans,right-left+1);
            sum-=nums[left];
            left++;
         }

    }
    if(ans==INT_MAX){
        return 0;
    }    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<MinSizeArr(nums,k);

    return 0;
}