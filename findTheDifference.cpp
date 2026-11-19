#include<bits/stdc++.h>
using namespace std;

char FindDiff(string s,string t){
char ans=0;

for(int i=0;i<s.length();i++){
    ans=ans^s[i];
}
for(int i=0;i<t.length();i++){
    ans=ans^t[i];
}
return ans;
}

int main(){
    string s,t;
    cin>>s>>t;

    cout<<FindDiff(s,t);
    return 0;
}