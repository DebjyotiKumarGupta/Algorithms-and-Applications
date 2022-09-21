#include<iostream>
using namespace std;
int insert(int *arr, int n , int pos , int x, int cap){
    int idx = pos-1;
    if(n==cap){
        return {-1};
    }
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
}

    int main()
{
    int a[100], n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    insert(a,n-1,2,n+1,3);
    for (int i = 0; i < n; i++)
    {
       cout<<a[i];
    }
    return 0;
}