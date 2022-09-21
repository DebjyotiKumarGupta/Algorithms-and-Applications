#include<iostream>
using namespace std;
void printallnaive(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
void printallefficient(int n){
    int i;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        
        if(i!=n/i){
            cout<<n/i<<" ";
        }
        }
    }
}
void printalloptimized(int n){
    int i;
    for( i =1 ;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(;i>=1;i--){
       if(n%i==0){
           cout<<n/i<<" ";
       }
    }
}
int main(){
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    printallnaive(n);
    cout<<endl;
    printallefficient(n);
    cout<<endl;
    printalloptimized(n);
    cout<<endl;
    return 0;
}