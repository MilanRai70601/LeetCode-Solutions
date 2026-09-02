#include<bits/stdc++.h>
using namespace std;
bool backspace(string s1,string t1){
    string res1="";
    string res2="";
    stack<char>st1;
    stack<char>st2;

    for(int i=0;i<s1.length();i++){
        if(s1[i]=='#'){
            if(!st1.empty()){
                st1.pop();
            }
        }else{
            st1.push(s1[i]);
        }
    }

    for(int i=0;i<t1.length();i++){
        if(t1[i]=='#'){
            if(!st2.empty()){
                st2.pop();
            }
        }else{
            st2.push(t1[i]);
        }
    }
    
    while(!st1.empty()){
        res1.push_back(st1.top());
        st1.pop();
    }

    while(!st2.empty()){
        res2.push_back(st2.top());
        st2.pop();
    }   
    
    if(res1==res2){
        return true;
    }
    return false;
}
int main(){
    string s;
    string t;
    cin>>s>>t;

    bool ans=backspace(s,t);
    cout<<ans;
    return 0;
}
