#include<bits/stdc++.h>
using namespace std;
string ComPrefix(vector<string> &strs,int n1){
string res="";
for(int i=0;i<strs[0].size();i++){
    for(int j=1;j<strs.size();j++){
        if(strs[j][i]!=strs[0][i]){
            return res;
        }
    }
    res.push_back(strs[0][i]);
}
return res;
}
int main(){
    int n;
    cin>>n;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    string ans=ComPrefix(str,n);
    cout<<ans;
    return 0;
}