#include<bits/stdc++.h>
using namespace std;

void sortColor(vector<int> & nums,int n1){
  int zero=0;
    int one=0;
    int two=0;

    for(int i=0;i<n1;i++){
        if(nums[i]==0){
            zero++;
        }else if(nums[i]==1){
            one++;
        }else{
            two++;
        }
    }
int k;
    for(k=0;k<zero;k++){
        nums[k]=0;
    }
    for( ; k<zero+one;k++){
        nums[k]=1;
    }
    for( ; k<zero+one+two;k++){
        nums[k]=2;
    }

    for(int i=0;i<n1;i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> nums1(n);
    for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
  sortColor(nums1,n);

    return 0;
}