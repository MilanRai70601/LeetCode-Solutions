#include<bits/stdc++.h>
using namespace std;
int NumSubThres(vector<int> &arr,int k, int thres){
    int count=0;
    int sum=0;

    for(int i=0;i<k;i++){
        sum+=arr[i];
    }

    if(sum>=thres*k){
        count++;
    }

    for(int i=k;i<arr.size();i++){
        sum=sum-arr[i-k]+arr[i];
         if(sum>=thres*k){
        count++;
    }
    }
    return count;
}
int main(){
    int n,k,thres;
    cin>>n>>k>>thres;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<NumSubThres(arr,k,thres);
    return 0;
}