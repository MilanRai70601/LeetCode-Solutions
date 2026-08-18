#include<bits/stdc++.h>
using namespace std;
int consecutiveOnes(vector<int> & findMax2, int n1){
int count=0;
int max=0;

for(int i=0;i<n1;i++){
    if(findMax2[i]==1){
        count++;
    }else{
        count=0;
    }
    if(max<count){
        max=count;
    }
}
return max;
}

int main(){
    int n;
    cin>>n;

    vector<int> findMax(n);
    for(int i=0;i<n;i++){
        cin>>findMax[i];
    }

    cout<<consecutiveOnes(findMax,n);



    return 0;
}