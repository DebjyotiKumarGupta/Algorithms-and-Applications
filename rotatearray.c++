#include<bits/stdc++.h>
using namespace std;
// void reverse(int *a, int start , int end){
//   int temp=0;
//    start , end;
//     while(start<end){
//       temp= a[start];
//       a[start]=a[end];
//       a[end]=temp;
//       start++;
//       end--;
//     }
// }
// void leftrotate(int *a, int n){
//    int temp;
//    temp=a[0];
//    for(int i=1 ;i<n;i++){
//     a[i-1] = a[i];
//    }
//    a[n-1]=temp;
// }

// void rotatemulti(int *a, int n, int d){
//     for(int i=0;i<d;i++){
//         leftrotate(a,n);
//     }
//      for(int j=0;j<n;j++){
//         cout<<a[j]<<" ";
//     }
//     cout<<endl;
// }
// void reversalalgrithm(int *a, int n, int d ){
//      reverse(a,0,d-1);
//      cout<<"After first Rotation"<<endl;
//      for(int j=0;j<n;j++){
//         cout<<a[j]<<" ";
//     }
//     cout<<endl;
//      reverse(a,d,n-1);
//      cout<<"After Second Rotation"<<endl;
//      for(int j=0;j<n;j++){
//         cout<<a[j]<<" ";
//     }
//     cout<<endl;
//      reverse(a,0,n-1);
//     cout<<"Efficient Method"<<endl;
//      for(int j=0;j<n;j++){
//         cout<<a[j]<<" ";
//     }
   
// }
// void efficientmethod(int *a, int n, int d ){
//     int temp[100];
//     for(int i=0;i<d;i++){
//         temp[i]=a[i];
//     }
//      for(int i=d;i<n;i++){
//         a[i-d]=a[i];
//     }
//      for(int i=0;i<d;i++){
//         a[n-d+i]=temp[i];
//     }
//     cout<<"Efficient Method"<<endl;
//      for(int j=0;j<n;j++){
//         cout<<a[j]<<" ";
//     }
// }

void pythogorian(int *a, int n, int k)
{
    int low = 0, high = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        while (low <= high)
        {
            if (a[low] * a[low] + a[high] * a[high] == a[i] * a[i])
            {
                cout<<"Yes"<<endl;
            }
            else if (a[low] * a[low] + a[high] * a[high] > a[i] * a[i])
            {
                high--;
            }
            else
            {
                low++;
            }
        }
    }
}


int main(){
    int *a, n,d;
    cout<<"Enter the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    // rotatemulti(a,n,d);
   pythogorian(a,  n, d);
    return 0;
}