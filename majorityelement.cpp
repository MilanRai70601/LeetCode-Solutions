#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums){
    int result=0;
    int size=nums.size();
unordered_map<int,int>map;

for(int i=0;i<size;i++){
map[nums[i]]++;
if(map[nums[i]]>(size/2)){

return nums[i];
}
}

return -1;

}
int main(){
    
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<majorityElement(nums);




    return 0;
}