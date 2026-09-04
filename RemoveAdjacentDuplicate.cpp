#include<bits/stdc++.h>
using namespace std;
string RemoveAdjacent(string s1){
    string res="";
    stack<char>st;
    for(int i=0;i<s1.length();i++){
        if(st.empty()){
            st.push(s1[i]);
        }else if(st.top()==s1[i]){
            st.pop();
        }else{
            st.push(s1[i]);

        }
    }

    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    string s;
    cin>>s;

    string ans=RemoveAdjacent(s);
    cout<<ans;
    return 0;
}