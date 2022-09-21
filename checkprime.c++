#include<iostream>
using namespace std;
bool isprimeopsol(int n){
    if(n==1){
        return false;
    }
    if(n==2 && n==3){
        return true;
    }
    if(n%2==0 && n%3==0){
        return false;
    }
    for(int i = 5; i*i<=n ; i= i+6){
        if(n%i==0 && n%(i+2)==0){
            return false;
        }
        return true;
    }
    return true;
}
bool isprimenaive(int n){
    if(n==1){
        return false;
    }
    for(int i = 2; i*i<=n ;i++ ){
       if(n%i==0){
           return false;
       }  
       return true;
   return true;
}
int main(){
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    bool res = isprimenaive(n);
    bool best = isprimeopsol(n);
    cout<<res<<endl;
    cout<<best<<endl;
    return 0;
}