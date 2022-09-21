#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertsort(int *a, int n ){
    for(int i =1;i<n;i++){
        int j=i-1;
        int key = a[i];
        while(j>=0 && a[j]>key){
            a[j+1]= a[j];
            j--;
        }
        a[j+1]= key;
    }
}
int main(){
    int a[100] , n;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertsort(a,n);
    cout<<"The sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}