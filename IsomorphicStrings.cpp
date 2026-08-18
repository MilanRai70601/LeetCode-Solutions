#include<bits/stdc++.h>
using namespace std;
bool IsormorStr(string s1, string t1){
    unordered_map<char, char> mp1;
    unordered_map<char, char> mp2;

    if(s1.length()!= t1.length()){
        return false;
    }
    for(int i=0;i<s1.length();i++){
        if(mp1.count(s1[i])){
            if(mp1[s1[i]]!=t1[i]){
                return false;
            }
        }
        if(mp2.count(t1[i])){
            if(mp2[t1[i]]!=s1[i]){
                return false;
            }
        }

        mp1[s1[i]]=t1[i];
        mp2[t1[i]]=s1[i];
    }

return true;
}

int main(){
    string s;
    string t;
    cin>>s>>t;
    cout<<IsormorStr(s,t);
    return 0;
}