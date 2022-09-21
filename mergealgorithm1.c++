#include <bits/stdc++.h>
using namespace std;
void naivepartition(int arr[], int n, int pivot)
{
    int index = 0, temp[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[pivot])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[pivot])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int lpartition(int *arr, int l, int h)
{
    int j = l - 1, p = arr[h];
    for (int i = l; i <= h; i++)
    {
        if (arr[l] < p)
        {
            j++;
            swap(arr[i], arr[j]);
        }
        swap(arr[j + 1], p);
    }
    return j + 1;
}
int hpartition(int *a, int l, int h)
{
    int p = a[0], i = l - 1, j = h + 1;
    do
    {
        i++;
    } while (a[i] < p);
    do
    {
        j--;
    } while (a[j] > p);
    if (i >= j)
    {
        return j;
    }
    swap(a[i], a[j]);
}
void lquicksort(int *a, int l, int h)
{
    if (l < h)
    {
        int p = lpartition(a, l, h);
        lquicksort(a, l, p - 1);
        lquicksort(a, l, p + 1);
    }
}


void hlsort(int *a, int l, int h)
{
    if (l < h)
    {
        int p = hpartition(a, l, h);
        hlsort(a, l, p);
        hlsort(a, p + 1, h);
    }
}

int main()
{
    int a[100], n, p;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cout << "Enter the pivot" << endl;
    // cin >> p;
    lquicksort(a, 0, n - 1);

    return 0;
}