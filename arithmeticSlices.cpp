#include<bits/stdc++.h>
using namespace std;
int arithSlices(vector<int> & nums){
    int n=nums.size();
    int count=0;
    int dp=0;
    for(int i=2;i<n;i++){
        int a=nums[i]-nums[i-1];
        int b=nums[i-1]-nums[i-2];
        if(a==b){
            dp=dp+1;
            count=dp+count;
        }else{
            dp=0;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<arithSlices(nums);
    return 0;

}