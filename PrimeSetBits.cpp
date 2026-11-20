#include<bits/stdc++.h>
using namespace std;
int PrimeSet(int left, int right){
    int count=0;
    for(int i=left;i<=right;i++){
        
        int prime=0;
        int temp=i;
        while(temp!=0){
            if((temp&1)==1){
                prime++;
            }
            temp=temp>>1;

        }
        bool isprime=true;
        if(prime<2){
            isprime=false;
        }
        for(int j=2;j*j<=prime;j++){
            if(prime %j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            count++;
        }
    }
    return count;
}
int main(){
    int left,right;
    cin>>left>>right;
    cout<<PrimeSet(left,right);
    return 0;

}