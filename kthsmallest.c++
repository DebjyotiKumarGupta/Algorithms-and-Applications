#include<bits/stdc++.h>
using namespace std;
void partition(int *arr , int l , int h , int pivot){
    int temp[h-l+1], index=0;
    for(int i=l;i<=h;i++){
        if(arr[i]<=arr[pivot]){
          temp[index]=arr[i];
          index++;
        }
    }
    for(int i=l;i<=h;i++){
        if(arr[i]>arr[pivot]){
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++){
        arr[i]=temp[i-l];
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
    partition(a,0,n-1,3);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}