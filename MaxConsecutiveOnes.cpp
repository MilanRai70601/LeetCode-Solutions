#include<bits/stdc++.h>
using namespace std;
int MaxConsOnes(vector<int> &nums, int k){
    int maxi=0;
    int left=0;
    int count=0;

    for(int right=0;right<nums.size();right++){
        if(nums[right]==0){
            count++;
        }

        while(count>k){
            if(nums[left]==0){
                count--;
            }
            left++;
        }
        maxi=max(maxi,right-left+1);
    }
    return maxi;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<MaxConsOnes(nums,k);
return 0;
}