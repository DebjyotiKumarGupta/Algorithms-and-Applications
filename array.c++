#include<bits/stdc++.h>
using namespace std;
void deleteelement(int a[], int n, int x){
  int i;
  for( i=0;i<n;i++){
    if(a[i]==x){
      break;
    }
  }
  for(int j=i;j<n;j++){
     a[j]=a[j+1];
  }
  for(int k=0;k<n-1;k++){
    cout<<a[k]<<" ";
  }
}

int main(){
  int pos, n, a[100];
  cout<<"Enter the number of elements int the array"<<endl;
  cin>>n;
  cout<<"Enter the elements "<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<"Enter the number"<<endl;
  cin>>pos;
  deleteelement(a,n,pos);


  return 0;
}