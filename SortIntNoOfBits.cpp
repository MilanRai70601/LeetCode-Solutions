#include<bits/stdc++.h>
using namespace std;
int countBits(int n){
    int count=0;
    while(n>0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
vector<int> sortByBits(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int x=countBits(arr[j]);
             int y=countBits(arr[j+1]);

             if(x>y || (x==y&& arr[j]>arr[j+1])){
                swap(arr[j],arr[j+1]);
             }
        }
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res=sortByBits(arr);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}