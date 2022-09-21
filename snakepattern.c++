#include <bits/stdc++.h>
using namespace std;
void transpose(int **arr, int m, int n)
{
    int brr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
}
void snakepattern(int **arr, int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
void boundaryofmatrix(int **arr, int m, int n)
{
    if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[0][i] << " ";
        }
    }
    else if (n == 1)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][0] << " ";
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[0][i] << " ";
        }
        for (int i = 1; i < m - 1; i++)
        {
            cout << arr[i][n - 1] << " ";
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[m - 1][i] << " ";
        }
        for (int i = n - 2; i >= 1; i--)
        {
            cout << arr[i][0] << " ";
        }
    }
}
void tranposeefficient(int **arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}