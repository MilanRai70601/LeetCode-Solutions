#include<bits/stdc++.h>
using namespace std;
bool ContainsDup(vector<int> &nums,int k){
    int left=0;
    unordered_set<int> mp;
    for(int right=0;right<nums.size();right++){
        if(right-left>k){
            mp.erase(nums[right]);
            left++;
        }
        if(mp.find(nums[right])!=mp.end()){
            return true;
        }
        mp.insert(nums[right]);
        
    }
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<ContainsDup(nums,k);
        return 0;
}