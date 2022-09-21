#include <bits/stdc++.h>
using namespace std;
int lpartition(int *arr, int l, int h)
{
    int pivot = arr[h], i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
        swap(arr[i + 1], pivot);
    return (i + 1);
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);     // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
int hpartition(int *arr, int l, int h)
{
    int i = l - 1, j = h + 1, pivot = arr[l];
    while(true){
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
}
void qlsort(int *arr, int l , int h){
    if(l<h){
        int p = lpartition(arr,l,h);
        qlsort(arr,l,p-1);
        qlsort(arr,p+1,h);
    }
}
void hqsort(int *arr, int l , int h){
    if(l<h){
        int p = hpartition(arr, l , h);
        hqsort(arr,l,p);
        hqsort(arr,p+1,h);
    }
    for (int i = 0; i <=h; i++)
    {
        cout << arr[i] << " ";
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
    hqsort(a,0,n-1);
    cout<<"Sorting by lomuto method quicksort"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    
    return 0;
}