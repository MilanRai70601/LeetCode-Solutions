#include<bits/stdc++.h>
using namespace std;
void reverseInteger(long long n, long long &digit1){
    if(n==0){
        return;
    }
int rem=n%10;
digit1=digit1*10+rem;
reverseInteger(n/10,digit1);

}

int main(){
    long long x;
    cin>>x;
    int sign=1;
    
    if(x<0){
    sign=-1;
    x=-x;
    }
    long long digit=0;

    reverseInteger(x, digit);

    if(digit<INT_MIN || digit >INT_MAX){
        return 0;
    }

    digit=digit*sign;

    cout<<(int)digit;
    return 0;
    
}