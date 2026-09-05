#include<bits/stdc++.h>
using namespace std;

class MyQueue{
    public:
    MyQueue(){

    }
    stack<int>st;
    stack<int>st2;

    void push(int x){
        st.push(x);
    }

    int pop(){
        if(st2.empty()){
            while(!st.empty()){
                st2.push(st.top());
                st.pop();
            }
        }
        int x=st2.top();
        st2.pop();
        return x;

    }

    int peek(){
        if(st2.empty()){
            while(!st.empty()){
                st2.push(st.top());
                st.pop();
            }
        }
        return st2.top();

    }

    int empty(){
         if(st.empty() && st2.empty()){
        return true;
       }
        return false;

    }


};

int main(){
    MyQueue ob;
    ob.push(1);
    ob.push(2);
    cout<<ob.peek()<<endl;
    cout<<ob.pop()<<" is deleted"<<endl;
    cout<<ob.empty();
    return 0;
}