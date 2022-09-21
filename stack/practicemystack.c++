#include<bits/stdc++.h>
#include<stack>

using namespace std;
struct myStack{
    int *arr;
    int cap;
    int top;
    myStack(int c){
        cap = c;
        arr = new int [c];
        top = -1;
    }
    void push(int x){
        if(top>=cap-1){
            cout<<"The stack is full"<<endl;
        }
        else{
            top++;
            arr[top]= x;
        }
    }
    int pop(){
        if(top==-1){
            return INT_MAX;
        }
        else{
            int res = arr[top];
            top--;
            return res;
        }
    }
    int peek(){
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return top==-1;
    }
};