#include<iostream>
using namespace std;
void toh(int n, char A, char B, char C){
    if(n==1){
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    toh(n-1,A,C,B);
   cout<<"Move "<<n<<"  "<<A<<" to "<<C<<endl;
    toh(n-1,B,A,C);
}
int main(){
    int n;
    char a='S', b='h', c='D';
    cout<<"Enter any number"<<endl;
    cin>>n;
    toh(n,a,b,c);
    return 0;
}