#include<bits/stdc++.h>
using namespace std;
void movezero(int *a , int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
          swap(a[i],a[count]);
          count++;
        }
    }
     for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
}
int main(){
    int *a, n;
    cout<<"Enter the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    movezero(a,n);
   
    return 0;
}