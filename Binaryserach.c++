#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int *a, int n, int key)
{
    // Auxiliary Space Complexity = O(1);
    // Time complexity = O(logn);
    int high = n - 1, low = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return {-1};
}
int RecursiveSolution(int *a, int low, int high, int x)
{
    // Auxiliary Space Complexity = O(n);
    // Time complexity = O(logn);
    if (low > high)
    {
        return {-1};
    }
    int mid = (low + high) / 2;
    if (a[mid] == x)
    {
        return mid;
    }
    else if (a[mid] > x)
    {
        return RecursiveSolution(a, low, mid - 1, x);
    }
    else
    {
        return RecursiveSolution(a, mid + 1, high, x);
    }
}
int firstoccurence(int *a, int n, int x)
{
    // Auxiliary Space Complexity = O(1);
    // Time complexity = O(logn);
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] > x)
        {
            high = mid - 1;
        }
        else if (a[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || a[mid] != a[mid - 1])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return {-1};
}
int firstOccurrenceRecursion(int *a, int low, int high, int k, int n)
{
    // Auxiliary Space Complexity = O(n);
    // Time complexity = O(logn);
    if (low > high)
    {
        return {-1};
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] > k)
        {
            return firstOccurrenceRecursion(a, low, mid - 1, k, n);
        }
        else if (a[mid] < k)
        {
            return firstOccurrenceRecursion(a, mid + 1, high, k, n);
        }
        else
        {
            if (mid == 0 || a[mid] != a[mid - 1])
            {
                return mid;
            }
            else
            {
                return firstOccurrenceRecursion(a, low, mid - 1, k, n);
            }
        }
    }
    return {-1};
}
int lastOccurence(int *a, int n, int x)
{
    // Auxiliary Space Complexity = O(1);
    // Time complexity = O(logn);
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] > x)
        {
            high = mid - 1;
        }
        else if (a[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == (n - 1) || a[mid] != a[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return {-1};
}
int lastOccurenceRecursion(int *a, int low, int high, int k, int n)
{
    // Auxiliary Space Complexity = O(n);
    // Time complexity = O(logn);

    if (low > high)
    {
        return {-1};
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] > k)
        {
            return lastOccurenceRecursion(a, low, mid - 1, k, n);
        }
        else if (a[mid] < k)
        {
            return lastOccurenceRecursion(a, mid + 1, high, k, n);
        }
        else
        {
            if (mid == (n - 1) || a[mid + 1] != a[mid])
            {
                return mid;
            }
            else
            {
                return lastOccurenceRecursion(a, mid + 1, high, k, n);
            }
        }
    }
    return {-1};
}
void returnOccurence(int *a, int n, int k)
{
    // Auxiliary Space Complexity = O(1);
    // Time complexity = O(logn);
    int x = lastOccurence(a, n, k);
    int y = firstoccurence(a, n, k);
     int z = y - x + 1;
    cout<<z<<endl;
}
void returncount(int *a, int n, int k)
{
    // Auxiliary Space Complexity = O(1);
    // Time complexity = O(logn);
    int low = 0, high = n - 1, x, y;
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
            if (mid == 0 || a[mid] != a[mid - 1])
            {
                x = mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    low = 0;
    high = n - 1;
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
            if (mid == (n - 1) || a[mid] != a[mid + 1])
            {
                y = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
     int z = y - x + 1;
        cout<<z<<endl;

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
    int x, y, z, w, s, t, u;
    x = BinarySearch(a, n, d);
    y = RecursiveSolution(a, 0, n - 1, d);
    cout << "Binary Search Solution By Iterative Process is " << x << " "
         << "and by Recursive Solution is " << y << endl;
    z = firstoccurence(a, n, d);
    w = firstOccurrenceRecursion(a, 0, n - 1, d, n);
    cout << "Finding First Occurence by using Iterative Binary Search solution" <<" "<< z << endl;
    cout << "Finding First Occurence by using Recursive Binary Search solution" <<" "<< w << endl;
    s = lastOccurence(a, n, d);
    t = lastOccurenceRecursion(a, 0, n - 1, d, n);
    cout << "Finding last Occurence by using Iterative Binary Search solution" << " "<<s << endl;
    cout << "Finding last Occurence by using Recursive Binary Search solution" <<" "<< t << endl;
     returnOccurence(a, n, d);
     returncount(a, n, d);
    cout << "Finding Occurence by using Iterative Binary Search solution" <<" "<< u << endl;
    cout << "Finding Occurence by using long Binary Search solution" <<" "<< c << endl;
    return 0;
}