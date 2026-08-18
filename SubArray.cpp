#include<bits/stdc++.h>
using namespace std;
int SubArray(vector<int> &nums,int n1,int k){
    int count=0;
    

    for(int i=0;i<n1;i++){
int sum=0;
for(int j=i;j<n1;j++){
    if(sum+nums[j]==k){
        count++;
    }
    sum=sum+nums[j];
}
    }
    return count;
}

int main(){
    int n;
    int k1;
    cin>>n>>k1;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<SubArray(arr, n,k1);
    
    return 0;
}