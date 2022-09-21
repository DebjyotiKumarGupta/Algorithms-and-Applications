#include <iostream>
using namespace std;
int firstocc(int *a, int n, int k)
{
    int low = 0, high = n - 1;
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
            if (mid == 0 || a[mid - 1] != a[mid])
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
int lastocc(int *a, int n, int k)
{
    int low = 0, high = n - 1;
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
            if (mid == n - 1 || a[mid + 1] != a[mid])
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

int countoccurence(int *a, int n, int k)
{
    int low = 0, high = n - 1, first, last;
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
            if (mid == 0 || a[mid - 1] != a[mid])
            {
                first = mid;
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
            if (mid == n - 1 || a[mid + 1] != a[mid])
            {
                last = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    int occ = last - first + 1;
    return occ;
}
int squarerootnaive(int k)
{
    int i = 1;
    while (i * i <= k)
    {
        i++;
    }
    return i - 1;
}
int squarerootbinaryefficient(int k)
{
    int low = 1, high = k, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int msq = mid * mid;
        if (msq == k)
        {
            return mid;
        }
        else if (msq > k)
        {
            high--;
        }
        else
        {
            low++;
            ans = mid;
        }
    }
    return ans;
}
int squareroot(int k)
{
    int low = 1, high = k, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int msq = mid * mid;
        if (msq == k)
        {
            return mid;
        }
        else if (msq > k)
        {
            high++;
        }
        else
        {
            low--;
            ans = mid;
        }
    }
    return ans;
}
int naivesquareroot(int k)
{
    int i = 1;
    while (i * i <= k)
    {
        i++;
    }
    return i - 1;
}
int pairsum(int *a, int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        if (a[low] + a[high] == k)
        {
            return true;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
}
int triplet(int *a, int n, int k)
{
    int low = 0, high = n - 1;
    for (int i = 0; i < n; i++)
    {
        while (low <= high)
        {
            if (a[low] + a[high] == k - a[i])
            {
                return true;
            }
            else if (a[low] + a[high] > k - a[i])
            {
                high++;
            }
            else
            {
                low++;
            }
        }
    }
}

void pythogorian(int *a, int n, int k)
{
    int low = 0, high = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        while (low <= high)
        {
            if (a[low] * a[low] + a[high] * a[high] == a[i] * a[i])
            {
                cout<<"Yes"<<endl;
            }
            else if (a[low] * a[low] + a[high] * a[high] > a[i] * a[i])
            {
                high--;
            }
            else
            {
                low++;
            }
        }
    }
}
int peakelements(int *a , int n ){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid==0||a[mid-1]<=a[mid])&&(mid==n-1||a[mid+1]<=a[mid]){
            return mid;
        }
        elseyn
    }
}