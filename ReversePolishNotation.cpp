#include<bits/stdc++.h>
using namespace std;

int PoliNotation(vector<string> & s){
    stack<int> st;

    for(int i=0;i<s.size();i++){
        if(s[i]=="+"){
            int a=st.top();
            st.pop();
            int b=(st.top())+a;
            st.pop();
            st.push(b);
        }else if(s[i]=="-"){
            int x=st.top();
            st.pop();
            int y=(st.top())-x;
            st.pop();
            st.push(y);            

        }else if(s[i]=="*"){
            int p=st.top();
            st.pop();
            int q=(st.top())*p;
            st.pop();
            st.push(q);            

        }else if(s[i]=="/"){
            int u=st.top();
            st.pop();
            int t=(st.top())/u;
            st.pop();
            st.push(t);            

        }else{
            int z=stoi(s[i]);
            st.push(z);
        }
    }
    int res=st.top();
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<string> tokens(n);
    for(int i=0;i<n;i++){
        cin>>tokens[i];
    }
    cout<<PoliNotation(tokens);


    return 0;
}