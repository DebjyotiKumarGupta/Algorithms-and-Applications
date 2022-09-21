#include<iostream>
using namespace std;
void merge(int arr[],int low , int mid, int high){
    int n1 = mid-low+1 , n2 = high-mid;
    int left[n1], right[n2];
    for(int i = low ; i<n1;i++){
       left[i]= arr[low+i];
    }
    for(int j=n1 ;j<n2;j++){
        right[j]= arr[n1+j];
    }
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(left[i]<=right[i]){
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
            arr[k]=right[j];
            k++;
            j++;
        } 
    }
    while(i<n1){
         arr[k]=left[i];
         i++;
         k++;
    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }
   
}
void mergesort(int arr[], int l , int r){
    if(r>l){
        int m = l + (r-l)/2;
        mergesort(arr, l , m);
        mergesort(arr , m+1 , r);
        merge(arr, l , m , r);
    }
     for(int b=0 ;b<=r;b++){
        cout<<arr[b]<<" ";
    }
}

int main()
{
    int a[100], n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergesort(a,0,n-1);
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}
  string shift(string c, int n){
        int w = 'c' ;
        w += n;
        return (to_string(w));
    }
    string replaceDigits(string s) {
        for(int i = 0 ; i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                
                s[i] = shift(s[i-1],s[i]);
            }
        }
        return s;
    }