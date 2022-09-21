#include <bits/stdc++.h>
using namespace std;
void naivepartition(int *arr, int l, int h, int p)
{
    int temp[h - l + 1], index = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
}
int lpartition(int *arr, int l, int h)
{
    int i = l - 1;
    int pivot = arr[h];
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}
int hpartition(int *arr, int l, int h)
{
    int i = l - 1, j = h + 1;
    int pivot = arr[l];
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
    return {-1};
}

void lqsort(int *arr, int l , int h){
    if(l<h){
        int p = lpartition(arr,l ,h);
        lqsort(arr,l,p-1);
        lqsort(arr,p+1,h);
    }
}

void hqsort(int *arr, int l , int h){
    if(l<h){
        int p = hpartition(arr,l ,h);
        hqsort(arr,l,p);
        hqsort(arr,p+1,h);
    }
}
int main()
{
    int a[100], n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // qlsort(a,0,n-1); 
    // naivepartition(a,0,n-1,5);
    lqsort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}