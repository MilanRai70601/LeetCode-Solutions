#include<bits/stdc++.h>

using namespace std;

vector<int> buildArray(vector<int>&nums1){
int size=nums1.size();
vector<int> milan(size);

for(int i=0;i<size;i++){
milan[i]=nums1[nums1[i]];
}

return milan;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<int> res=buildArray(nums);
    for( int x:res){
        cout<<x<<" ";
    }
    return 0;
}