#include<bits/stdc++.h>
using namespace std;
vector<int> InterArray(vector<int> ans1,vector<int> ans2, int size1, int size2){
    vector<int> res;
    unordered_set<int> mp;
    for(int i=0;i<size1;i++){
        mp.insert(ans1[i]);
    }

    for(int i=0;i<size2;i++){
        if(mp.count(ans2[i])){
            res.push_back(ans2[i]);
            mp.erase(ans2[i]);
        }
    }
    return res;
}
int main(){
    int n1;
    int n2;
    cin>>n1>>n2;
    vector<int> nums1(n1);
    vector<int> nums2(n2);
    for(int i=0;i<n1;i++){
        cin>>nums1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>nums2[i];
    }

    vector<int> result=InterArray(nums1, nums2, n1, n2);

    for(int x: result){
        cout<<x<<" ";
    }


    return 0;

}