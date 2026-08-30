#include<bits/stdc++.h>
using namespace std;

bool isValid(string s1){
    stack<char> st;
    for(int i=0;i<s1.length();i++){
        char ch=s1[i];
        if(ch=='('||ch=='{'||ch=='['){
            st.push(ch);
        }else{
            if(st.empty()) return false;
            if(ch==')'){
                if(st.top()!='(') return false;
                st.pop();
            }else if(ch=='}'){
                if(st.top()!='{') return false;
                st.pop();
            }else if(ch==']'){
                if(st.top()!='[') return false;
                st.pop();
            }
        }
    }
    return st.empty();
}
int main(){
    string s;
    cin>>s;
    bool res=isValid(s);
    cout<<res;

    return 0;
}