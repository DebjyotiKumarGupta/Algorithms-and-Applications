#include <iostream>
using namespace std;
void mergealgo(int arr[], int brr[], int m, int n)
{
    int i = 0, j = 0;
    while (i <= n && j <= m)
    {
        if (arr[i] <= brr[i])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    return 0;
}