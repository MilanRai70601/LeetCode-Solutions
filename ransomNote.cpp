#include<bits/stdc++.h>
using namespace std;
bool isRansom(string s1, string s2){
    unordered_map<char, int>mp;
    for(char ch1:s2){
        mp[ch1]++;
    }
    for(char ch2:s1){
        if(mp[ch2]==0){
            return false;
        }
        mp[ch2]--;
    }
    return true;
}
int main(){
    string ransomNote;
    string magazine;
    cin>>ransomNote>>magazine;

    cout<<isRansom(ransomNote, magazine);
    return 0;
}