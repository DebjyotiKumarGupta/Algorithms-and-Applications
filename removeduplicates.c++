#include<bits/stdc++.h>
using namespace std;
void duplicate(int *a, int n){
    int *temp;
    int res=1;
    temp[0]=a[0];
    for(int i=1;i<n;i++){
        if(temp[res-1]!=a[i]){
            temp[res]=a[i];
            res++;
        }
    }
    for(int j=0;j<res;j++){
        cout<<temp[j]<<" ";
    }
}
int main(){
    int *a, n;
    cout<<"Enter the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    duplicate(a,n);
    return 0;
}