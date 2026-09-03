#include<bits/stdc++.h>
using namespace std;
int baseGame(vector<string> & s1,int n1){
stack<int> st;
for(int i=0;i<n1;i++){
    if(s1[i]=="+"){
        int x=st.top();
        st.pop();

        int y=x+st.top();
        st.push(x);
        st.push(y);
    }else if(s1[i]=="D"){
        int z=(2*st.top());
        st.push(z);
    }else if(s1[i]=="C"){
        st.pop();
    }else{
        int a=stoi(s1[i]);
        st.push(a);
    }
}
int sum=0;
while(!st.empty()){
    sum=sum+st.top();
    st.pop();

}
return sum;
}

int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    cout<<baseGame(s,n);
    return 0;
}