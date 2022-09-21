#include <bits/stdc++.h>
using namespace std;
void inplaceselectionsort(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_mid = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min_mid] < a[j])
            {
                min_mid = j;
            }
        }
        swap(a[min_mid], a[i]);
    }
}
void non_inplace_selectionsort(int *a, int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min_ind] < a[j])
            {
                min_ind = j;
            }
        }
        temp[i] = a[min_ind];
        a[min_ind] = INFINITY;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}
void insertion_sort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] < key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
void naivemerge(int *a, int *b, int n, int m)
{
    int z = m + n;
    int c[z];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int j = n; j < m; j++)
    {
        c[j] = b[j];
    }
    sort(c, c + z);
}

void efficientmerge(int *a, int *b, int m, int n)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << a[i] << " ";
    }
    while (j < n)
    {
        cout << b[j];
    }
}

void mergewithlow(int *a, int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            k++;
        }
        else
        {
            a[k] = right[j];
            j++;
            k++;
        }
        while (i < n1)
        {
            a[k] = left[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            a[k] = right[j];
            i++;
            k++;
        }
    }
}
int mergesort(int *a, int l, int r)
{
    if (r > l)
    {
        int mid = l + (r - l) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        int n1 = mid - l + 1, n2 = r - mid;
        int left[n1], right[n2];
        int i = 0, k = 0, j = 0;
        while (i < n1 && j < n2)
        {
            if (left[i] <= right[j])
            {
                a[k] = left[i];
                i++;
                k++;
            }
            else
            {
                a[k] = right[j];
                k++;
                j++;
            }
        }
        while (i < n1)
        {
            a[k] = left[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            a[k] = right[j];
            j++;
            k++;
        }
    }
}
void intersection(int *a, int *b, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            continue;
        }
        for (int j = 0; j < n; i++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
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
    int b[100], m;
    cout << "Enter the number of elements" << endl;
    cin >> m;
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    inplaceselectionsort(a, n);
    // non_inplace_selectionsort(a, n);
    // insertion_sort(a, n);
    // naivemerge(a, b, n, m);
    // efficientmerge(a, b, m, n);
    // cout<<"enter the value of high , low and mid"<<endl;
    // int high , low , mid;
    // cin>>high;
    // cin>>low;
    // cin>>mid;
    // mergewithlow(int *a, int low, int mid, int high);
    // mergesort(int *a, int l, int r);
    // intersection(int *a, int *b, int n, int m);
    return 0;
}