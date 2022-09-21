#include<iostream>
using namespace std;
int fun1(string str, int start, int end){
    if(start>=end){
        return 1;
    }
    if((str[start]==str[end])&&fun1(str,start+1,end-1)){
        return 1;
    }
   return 0;
}
int main(){
    string str;
    int start=0, end= str.length()-1;
    cout<<"Enter any string"<<endl;
    cin>>str;
   int n =  fun1(str,start,end);
   cout<<n;
    
    return 0;
}