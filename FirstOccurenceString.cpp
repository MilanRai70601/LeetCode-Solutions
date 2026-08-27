#include<bits/stdc++.h>
using namespace std;
int firstAccourance(string s1, string s2){
if(s1.length()<s2.length()){
    return -1;
}
for(int i=0;i<=s1.length()-s2.length();i++){
    int j;
    for(j=0;j<s2.length();j++){
        if(s1[i+j]!=s2[j]){
            break;
        }
    }
    if(j==s2.length()){
        return i;
    }
}
return -1;

}

int main(){
    string str1;
    string str2;
    cin>>str1>>str2;

    cout<<firstAccourance(str1,str2);
    return 0;
}