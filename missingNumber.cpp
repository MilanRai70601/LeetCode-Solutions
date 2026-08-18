#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums2){
    int sum =0;
    int num=0;
int n = nums2.size();
    for(int i=0;i<=n;i++){
        sum=sum+i;
        
    }
    for(int i=0;i<n;i++){
        num=num+nums2[i];
    }

    num=sum-num;

    return num;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }

    cout<<missingNumber(nums);
    
    return 0;
}
//int sum = n * (n + 1) / 2;