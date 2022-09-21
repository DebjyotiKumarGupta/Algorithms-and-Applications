#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
struct mystack
{
    node *head;
    int size;
    mystack()
    {
        head = NULL;
        size = 0;
    }
    void push(int x)
    {
        node *temp = new node(x);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        else
        {
            int res = head->data;
            node *temp = head;
            head = head->next;
            delete (temp);
            size--;
            return res;
        }
    }
    int siz(){
        return size;
    }
    bool isEmpty(){
        return head==NULL;
    }
    int peek(){
        if(head==NULL){
            return INT_MAX;
        }
        return head->data;
    }
};

int main(){
    mystack s;
      s.push(5);
    s.push(15);
    s.push(115);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}