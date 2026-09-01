#include<bits/stdc++.h>
using namespace std;
vector<int> Greater(vector<int> &ans1, vector<int> &ans2){
    vector<int> res1;
    for(int i=0;i<ans1.size();i++){
        for(int j=0;j<ans2.size();j++){
            if(ans1[i]==ans2[j]){
                bool found=false;
                for(int k=j+1;k<ans2.size();k++){
                    if(ans2[k]>ans2[j]){
                        int val=ans2[k];
                        res1.push_back(val);
                        found=true;
                        break;
                        
                    }
                }
                if(!found){
                    res1.push_back(-1);
                }
            }
        }
    }
    return res1;
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

    vector<int>res2=Greater(nums1,nums2);
    for(int x: res2){
        cout<<x<<" Mn";
    }
    return 0;
}