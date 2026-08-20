#include<bits/stdc++.h>
using namespace std;

int LongSub(string s1){
    int left=0;
    int maxLen=0;
    unordered_map<char,int>mp;

    for(int i=0;i<s1.length();i++){
if(mp.count(s1[i])){
    left=max(left,mp[s1[i]]+1);

} 
mp[s1[i]]=i;
maxLen=max(maxLen,i-left+1);
    }
    return maxLen;
}

int main(){
    string s;
    cin>>s;
    cout<<LongSub(s);
    return 0;
}
