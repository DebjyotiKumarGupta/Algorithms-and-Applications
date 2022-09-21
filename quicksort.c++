#include<iostream>
using namespace std;
int hpartition(int *arr, int l , int h){
    int i=l-1, j =h+1;
    int pivot = arr[l];
    while(true){
        do{
            i++;
        } while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(arr[i],arr[j]);
    }
}
void qsort(int *arr, int l , int h){
    int p = hpartition(arr,l , h);
    qsort(arr,l,p);
    qsort(arr,p+1,h);
    }