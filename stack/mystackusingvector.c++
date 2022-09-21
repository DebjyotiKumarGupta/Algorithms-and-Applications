#include <bits/stdc++.h>
using namespace std;
struct mystack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        if (v.size() == 0)
        {
            cout << "The stack is empty" << endl;
        }
        else
        {
            int res = v.back();
            v.pop_back();
            return res;
        }
    }
    int top()
    {
        return v.back();
    }
    bool empt()
    {
        return v.empty();
    }
    int size()
    {
        return v.size();
    }
};
int main(){
    mystack v;
    v.push(5);
    v.push(115);
    v.push(15);
    cout<<v.pop()<<endl;
    cout<<v.top()<<endl;
    cout<<v.pop()<<endl;
    cout<<v.top()<<endl;

    cout<<v.pop()<<endl;
    cout<<v.top()<<endl;

    cout<<v.empt()<<endl;
}