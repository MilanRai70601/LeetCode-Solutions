// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int fact=1;

//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<fact;
//     return 0;
// }

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    int fact=1;
    return n*factorial(n-1);
}

int main(){
    int num;
    cin>>num;
    cout<<factorial(num);
    return 0;
}