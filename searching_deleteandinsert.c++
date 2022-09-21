#include <bits/stdc++.h>
using namespace std;
int printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int searching(int *a, int n, int key)
{
    cout << "Enter the key" << endl;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }
}
int inserting(int a[], int n, int pos, int cap, int num)
{
    if (n == cap)
    {
        cout << "Invalid size" << endl;
    }
    int idx = pos - 1;
    for (int i = n - 1; i >= pos; i++)
    {
        a[i + 1] = a[i];
    }
    a[idx] = num;
    printarray(a, cap);
}
int delte(int *a, int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            break;
        }
    }
    for (int j = i; j < n; j++)
    {
        a[i] = a[j + 1];
    }
    printarray(a, n);
}
int largest(int *a, int n)
{
    int lar = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > lar)
        {
            lar = a[i];
        }
    }
    return lar;
}
int secondlargest(int *a, int n)
{
    int larg = largest(a, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != larg)
        {
            if ((res == -1) || (a[i] > res))
            {
                res = a[i];
            }
        }
    }
    return res;
}
int sort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            return false;
        }
    }
    return true;
}
int reverse(int *a, int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
    printarray(a, n);
}
int settypearray(int *a,int n ){
    int res=1;

    for(int i=1;i<n;i++){
      if(a[i]!=a[res-1]){
        a[res]=a[i];
        res++;
      }
    }
    printarray(a,n);
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

    int x = searching(a, n, key);
    cout << "The key is present in"<<x<<"position"<<endl;
     for (int j = 0; j < cap; j++)
    {
    }
    return 0;
}
