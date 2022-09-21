#include <bits/stdc++.h>
using namespace std;
struct twoStacks
{
    int *arr, cap, top1, top2;
    twoStacks(int c)
    {
        cap = c;
        arr = new int[c];
        top1 = -1;
        top2 = cap;
    }
    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] == x;
        }
    }
    void push2(int x){
        if(top2-1>top1){
              top2--;
              arr[top2]=x;
        }
    }
    int pop1(){
        if(top1>=0){
        int res = arr[top1];
        top1--;
        return res;
        }
        else{
            exit(1);
        }
    }
    int pop2(){
        if(top2<cap){
        int res = arr[top2];
        top2++;
        return res;
        }
        else{
            exit(1);
        }
    }
    int peek1(){
        int res = arr[top1];
        return res;
        }
    int peek2(){
        int res = arr[top2];
        return res;
    }
};