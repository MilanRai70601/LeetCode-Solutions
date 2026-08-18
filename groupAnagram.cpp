#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAna(vector<string> &ans)
{
unordered_map<string, vector<string>> mp;
for(string res:ans){
    string key=res;
    sort(key.begin(),key.end());
    mp[key].push_back(res);
}
vector<vector<string>> result;
for(auto x:mp){
    result.push_back(x.second);
}
return result;
}
int main(){
    int n;
    cin>>n;
    vector<string> milan(n);
    for(int i=0;i<n;i++){
        cin>>milan[i];
    }

    vector<vector<string>> res=groupAna(milan);
    for(vector<string> group:res){
        for(string str:group){
            cout<<str<<" ";
        }
    }
    return 0;
}