#include <bits/stdc++.h>
using namespace std;
struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c)
    {
        cap = c;
        top = -1;
        arr = new int[cap];
    }
    void push(int n)
    {
        if (top >= (cap - 1))
        {
            cout << "The Stack is Full" << endl;
        }
        else
        {
            top++;
            arr[top] = n;
        }
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "The number can be popped as the stack is empty" << endl;
        }
        else
        {
            int res = arr[top];
            top--;
            return res;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "The stack is empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }
    bool empty(){
        if(top==-1){
            return false;
        }
        else{
            return true;
        }
    }
    int size(){
        return (top+1);
    }
};
int main(){
    mystack s(5);
    s.push(5);
    s.push(15);
    s.push(115);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}