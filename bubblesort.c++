#include<bits/stdc++.h>
using namespace std;
void bubblesort(int *a, int n ){
    for(int i=0;i<n-1;i++){
        int swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                swap(a[j+1],a[j]);
                swapped = true;
            }
            if(swapped== false){
                break;
            }
        }
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
    bubblesort(a,n);
    cout<<"The sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}