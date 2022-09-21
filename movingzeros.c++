#include<bits/stdc++.h>
using namespace std;
void removezero(int *a , int n){
    for(int i=0;i<n;i++){
       if(a[i]==0){
        for(int j=i+1;j<n;j++){
            if(a[j]!=0){
                swap(a[i], a[j]);
            }
        }
       }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void efficient(int *a, int n){
     int count =1;
    for(int i=0;i<n;i++){
          if(a[i]!=0){
            swap(a[i], a[count]);
            count++;
          }
    }
}
int main(){
   
    int n, *a, cap, pos, key;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    removezero(a ,n );

    return 0;

}