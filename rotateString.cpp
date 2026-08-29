#include<bits/stdc++.h>
using namespace std;
bool rotateString(string s1, string goal1){
    if(s1.length()!=goal1.length()){
        return false;
    }

    for(int i =0;i<s1.length();i++){
        if(s1==goal1){
            return true;
        }

        s1=s1.substr(1)+s1[0];

    }
    return false;
}

int main(){
    string s;
    string goal;
    cin>>s>>goal;

    bool res=rotateString(s,goal);
    cout<<res;
    return 0;
}