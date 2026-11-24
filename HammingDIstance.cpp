#include<bits/stdc++.h>
using namespace std;
int HamDist(int x, int y){
    int res=x^y;
    int count=0;
    while(res>0){
        if(res&1){
            count++;
        }
        res=res>>1;
    }
    return count;
}
int main(){
    int x,y;
    cin>>x>>y;

    cout<<HamDist(x,y);
    return 0;
}