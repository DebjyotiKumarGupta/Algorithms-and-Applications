// Reverse an array 
#include<bits/stdc++.h>
using namespace std;
void reverse(int *a , int n ){
    int start = 0, end = n-1;
    while(start<end){
        swap(a[start], a[end]);
        start++;
        end--;
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
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
    reverse(a ,n );

    return 0;
}