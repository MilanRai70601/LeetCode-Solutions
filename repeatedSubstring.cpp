#include<bits/stdc++.h>
using namespace std;
bool repSub(string s1){
    int n =s1.length();
    for(int i=1;i<n;i++){
        int length=n%i;
        if(length==0){
            string pattern=s1.substr(0,i);
            int repeation=n/i;
            string temp="";
            for(int j=0;j<repeation;j++){
                temp += pattern;
            }
            if(temp==s1){
                return true;
            }
        }
    }
    return false;
}
int main(){
    string s;
    cin>>s;

    bool res=repSub(s);
    cout<<res;
    return 0;
}