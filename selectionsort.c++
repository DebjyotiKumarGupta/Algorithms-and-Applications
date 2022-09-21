#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int *a, int n){
    for(int i=0;i<n;i++){
        int min_ind = i;
        for(int j=i+1;j<n;j++){
            if(a[min_ind]>a[j]){
                min_ind= j;
            }
        }
        swap(a[min_ind],a[i]);
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
    selectionsort(a,n);
    cout<<"The sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}