#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
struct Mystack
{
    Node *head;
    int size;
    Mystack()
    {
        head = NULL;
        size = 0;
    }
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop(){
        int res = head->data;
        Node *temp = head;
        head = head-> next;
        delete(temp);
        size--;
        return res;
    }
};
