#include<bits/stdc++.h>
using namespace std;


vector <int> plusOne(vector<int> & digits){
    int n2 = digits.size();
    for(int i=n2-1;i>=0;i--){
if(digits[i]==9){
    digits[i]=0;
}else{
    digits[i]=digits[i]+1;
    return digits;
}
    }
    digits.insert(digits.begin(),1);
    return digits;

}

int main(){
    int n;
    cin>>n;
    vector<int> digits1(n);
    

    for(int i=0;i<n;i++){
        cin>>digits1[i];
    }

vector <int>ans=plusOne(digits1);
    for(int i = 0; i < ans.size(); i++)
{
    cout << ans[i] << " ";
}

    return 0;
}