#include <bits/stdc++.h>
using namespace std;
int countoccurence(int *a, int n, int k)
{
    int low = 0, high = n - 1, z;
    int x, y;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (a[mid] > k)
        {
            high = mid - 1;
        }
        else if (a[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || a[mid - 1] != a[mid])
            {
                x = mid;
            }
            else
            {
                high = mid + 1;
            }
        }
    }
    high = n - 1;
    low = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] > k)
        {
            high = mid - 1;
        }
        else if (a[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == (n - 1) || a[mid + 1] != a[mid])
            {
                y = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    if (x == (-1))
    {
        return 0;
    }
    else
    {
        z = y - x + 1;
    }
    return z;
}

int main()
{
    int *a, n, d, c;
    cout << "Enter the array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key" << endl;
    cin >> d;
    int z, y;
    z = countoccurence(a, n, d);
    cout << z << endl;
    return 0;
}