#include<bits/stdc++.h>
using namespace std;
int UniqueChar(string s1,int n1){
unordered_map<char, int> mp;
int res=-1;

for(char ch: s1){
    mp[ch]++;
}

for(int i=0;i<n1;i++){
    if(mp[s1[i]]==1){
res=i;
return res;
    }
}
return res;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    cout<<UniqueChar(s,n);
    return 0;
}