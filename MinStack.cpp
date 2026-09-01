#include<bits/stdc++.h>
using namespace std;

class MinStack{
    public:
    MinStack(){

    }

    stack<int>st;
    stack<int>minst;
    int mini;

    void push(int value){
        st.push(value);
        if(minst.empty()){
            minst.push(value);
        }else{
            minst.push(min(value,minst.top()));
        }
    }

    void pop(){
        st.pop();
        minst.pop();
    }

    int top(){
        return st.top();

    }

    int getMin(){
        return minst.top();
    }
};

int main(){
    MinStack ob;
    ob.push(5);
    ob.push(3);
    ob.push(7);

    cout<<"Top "<<ob.top()<<endl;
    cout<<"Minimum "<< ob.getMin()<<endl;

    ob.pop();

    cout<<"After pop : "<<endl;
    cout<<"Top "<<ob.top()<<endl;
    cout<<"Minimum "<<ob.getMin()<<endl;

    ob.pop();

    cout<<"After another pop : "<<endl;
    cout<<"Top "<<ob.top()<<endl;
    cout<<"Minimum "<<ob.getMin()<<endl;

        return 0;
}