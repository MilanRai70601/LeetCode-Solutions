#include<bits/stdc++.h>
using namespace std;
string revString(string &s1){
    int start =0;
    for(int i=0;i<=s1.length();i++){
        if(i==s1.length()|| s1[i]==' '){
            reverse(s1.begin()+start, s1.begin()+i);
            start=i+1;
        }
    }
    return s1;
}
int main(){
    string s;
    getline(cin,s);
revString(s);
    cout<<s;
    return 0;
}
