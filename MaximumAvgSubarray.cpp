#include<bits/stdc++.h>
using namespace std;
double AvgSub(vector<int>nums,int k){
    int n=nums.size();
    int sum=0;

    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
    int maxi=sum;

    for(int i=k;i<n;i++){
        sum=sum-nums[i-k]+nums[i];
        maxi=max(maxi,sum);
    }
    return (double)maxi/k;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<AvgSub(nums,k);
    return 0;
}