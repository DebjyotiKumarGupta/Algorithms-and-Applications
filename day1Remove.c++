#include <bits/stdc++.h>
using namespace std;
void removedupli(int *a, int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[count - 1])
        {
            a[count] = a[i];
            count++;
        }
    }
    cout << count << " " << endl;
    for (int j = 0; j < count; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;
}
void naivemethod(int *a, int n)
{
    int count = 1;
    int temp[n];
    temp[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (temp[i - 1] != a[i])
        {
            temp[count] = a[i];
            count++;
        }
    }
    for (int i = 0; i < count ; i++)
    {
        a[i] = temp[i];
    }
    for (int j = 0; j < count; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;
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
    removedupli(a, n);
    naivemethod(a, n);

    return 0;
}