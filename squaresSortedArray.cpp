#include<bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> & nums){
int size=nums.size();
int left=0;
int right=size-1;
int index=size-1;
vector<int> ans(size);

while(left<=right){
    int leftSquare=nums[left]*nums[left];
    int rightSquare=nums[right]*nums[right];

    if(leftSquare>rightSquare){
        ans[index]=leftSquare;
        left++;
    }else{
        ans[index]=rightSquare;
right--;
    }
    index--;
}
return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> milan(n);
    for(int i=0;i<n;i++){
        cin>>milan[i];
    }

    vector<int> res=sortedArray(milan);
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}