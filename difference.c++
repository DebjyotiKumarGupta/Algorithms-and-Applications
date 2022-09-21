#include <bits/stdc++.h>
using namespace std;
int difference(int *a, int n)
{
    int res = a[1] - a[0];
    int minValue = a[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, a[i] - minValue);
        minValue = min(a[i], minValue);
    }
    return res;
}
int naiveDifference(int *a, int n)
{
    int res = a[1] - a[0];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            res = max(res, a[j] - a[i]);
        }
    }
    return res;
}
int largest(int *a, int n){
    int lar = a[0];
    for(int i=0;i<n;i++){
        lar= max(lar,a[i]);
    }
    return lar;
}

void leaders(int *a, int n){
    int lead = a[n-1];
   cout<<lead<<" ";
    for(int i=n-2;i>=0;i--){
      if(a[i]>lead){
        lead = a[i];
       cout<<lead<<" ";
      }
    }
}
void leadernaive(int *a, int n){
    for (int  i = 0; i < n; i++)
    {
        bool flag = false;
        for (int  j = i+1; j < n; j++)
        {
            if(a[i]<=a[j]){
                flag = true;
                break;
            }
        }
        
    if(flag = false){
        cout<<a[i]<<endl;
    }
    }
    
}
void freq(int *a , int n){
    int fre=1, i=1;
    while(i<n){
        while(i<n && a[i]==a[i-1]){
            fre++;
            i++;
        }
        cout<<a[i-1]<<" "<<fre<<endl;
        i++;
        fre=1;
    }
}


int main()
{
    int n, *a, cap, pos, key;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int z = difference(a, n);
    // cout << z << endl;
    // int y = naiveDifference(a,n);
    // cout << y << endl;
    // int x = largest(a, n);
    // cout << x << endl;
    leaders(a,n);
    leadernaive(a,n);
    freq(a,n);



    return 0;
}