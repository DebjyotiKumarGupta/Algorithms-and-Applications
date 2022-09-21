#include<bits/stdc++.h>
using namespace std;
void reversearray(int a[], int n){
    int temp=0;
    for(int i=0;i<n;i++){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
}
void sir(int a[],int n){
    int temp=0,low=0,high=n-1;
    while(low<high){
        temp=a[low];
        a[low]=a[high];
        a[high]=temp;
        high--;
        low++;

    }
     for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
}
int main(){
    int n, a[100], temp=0;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sir(a,n);

}