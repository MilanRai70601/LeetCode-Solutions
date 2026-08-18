#include<bits/stdc++.h>
using namespace std;
vector<int> greatestNum(vector<int> arr, int n1){
vector<int> res(n1);
int max=arr[n1-1];
res[n1-1]=-1;

for(int i=n1-2;i>=0;i--){
    res[i]=max;
    if(arr[i]>max){
        max=arr[i];
    }
}
return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector res1=greatestNum(nums, n);
    for(int x:res1){
        cout<<x<<" ";
    }
    return 0;
}