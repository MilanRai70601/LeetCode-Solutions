#include<bits/stdc++.h>
using namespace std;
int strComp(vector<char> &s1,int n1){
    int left=0;
    int right=1;
    int count=1;
    int write=0;
    for(int i=0;i<n1;i++){
        if(right<n1 && s1[left]==s1[right]){
            right++;
            count++;
        }else{
            s1[write]=s1[left];
            write++;

            if(count>1){
                string num= to_string(count);

                for(char ch:num){
                    s1[write]=ch;
                    write++;
                }
            }
            left=right;
            right++;
            count=1;
            
        }
    }
    return write;
}

int main(){
    int n;
    cin>>n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    cout<<strComp(s,n);
    return 0;
}