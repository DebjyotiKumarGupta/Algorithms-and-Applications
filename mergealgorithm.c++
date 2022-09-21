#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int *a ,int *b, int n , int m){
   int i=0,j=0;
   while(i<n && j<m){
    if(a[i]<=b[j]){
        cout<<a[i]<<" ";
        i++;
    }
    else{
      cout<<b[j]<<" ";
      j++;
    }
   }
   while(i<n){
    cout<<a[i]<<" ";
    i++;
   }
   while(j<m){
    cout<<b[j]<<" ";
    j++;
   }
}
int main(){
    int a[100], b[100] , n, m;
    cout<<"Enter the number of elements in the array1"<<endl;
    cin>>n;
    cout<<"Enter the number of elements in the array2"<<endl;
    cin>>m;
    cout<<"Enter the elements in the array1"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements in the array2"<<endl;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    merge(a,b,n,m);
    return 0;
}