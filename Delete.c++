#include <iostream>
using namespace std;
struct Mystack
{
    int *arr;
    int cap;
    int top;
    Mystack(int c)
    {
        cap = c;
        top = -1;
        arr = new int[cap];
    }
    void push(int x)
    {
        if (top >= cap)
        {
            cout << "Stack is Full" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    int pop()
    {
        if (top == -1)
        {
            return -1;
        }
        else
        {
            int res = arr[top];
            top--;
            return res;
        }
    }
    int top()
    {
        if (top == -1)
        {
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool empty(){
        return top==-1;
    }
};
int priority(char c){
    if(c=='^' || c=='%'){
        return 1;
    }
    if(c=='*' || c=='/'){
        return 2;
    }
    if(c=='*' || c=='/'){
        return 3;
    }
    
}
void infix_to_postfix(string s){
    
}