#include<bits/stdc++.h>
using namespace std;
struct Mystack{
    vector <int> v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
       int res =  v.back();
       v.pop_back();
       return res;
    }
    int peek(){
        return v.back();
    }
    int siz(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
    
};