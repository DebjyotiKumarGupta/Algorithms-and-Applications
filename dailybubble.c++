#include<algorithm>
// #include<math.h>
#include<limits.h>

#include<iostream>
using namespace std;
void bubblesort(int *arr, int n){
    for(int i =0 ;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void buubleefficient(int *arr, int n){
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag==false){
            break;
        }
    }
}
void selectionsort_non_inplace(int *arr, int n){
    int temp[n];
    for(int i=0;i<n;i++){
        int min_ind=0;
        for(int j=0;i<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        temp[i]=arr[min_ind];
        arr[min_ind]= INT_MAX;

    }
}
void selectionsort_inplace(int *arr, int n ){
    for(int i=0;i<n;i++){
        int min_ind = i;
        for(int j=i+1 ; j<n;j++){
            if(arr[j]<arr[min_ind])
            {
                min_ind = j ;
            }
        }
        swap(arr[i], arr[min_ind]);
    }
}
int main(){
    int a[100], n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionsort_inplace(a, n );
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}