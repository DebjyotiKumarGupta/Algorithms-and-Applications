#include<bits/stdc++.h>
using namespace std;
int countone(int *a, int n){
   int  high = n-1, low = 0;
   while(low<=high){
    int mid=(low+high)/2;
    if(a[mid]==0){
        low = mid+1;
    }
    else{
        if(mid==0||a[mid-1]!=a[mid]){
            return (n-mid);
        }
        else{
            high = mid-1;
        }
    }
   }
   return {-1};
}
int squareroot( int n){
    int high = n , low = 1, ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        int sqm = mid*mid;
        if(sqm==n){
            return mid;
        }
        else if(sqm>mid){
            high = mid-1;
        }
        else{
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}
int UnboundedbinarySearch(int *a, int x){
    if(a[0]==x){
        return 0;
    }
    int i=1;
    while(a[i]<x){
        i = i*2;
    }
    if(a[i]==x){
        return i;
    }
    int high = i-1, low = (i/2)+1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]>x){
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return {-1};
}
int twosum(int *a, int n, int x){
    int low =0,high = n-1;
    while(low<high){
        if(a[low]+a[high]==x){
            return true;
        }
        else if(a[low]+a[high]>x){
            high--;
        }
        else{
            low++;
        }
    }
}

int peakelements(int *a, int n){
    if(a[0]>=a[1]){
        return a[0];
    }
    if(a[n-1]>=a[n-2]){
        return a[n-1];
    }
    for(int i=1;i<n-1;i++){
        if((a[i]>=a[i-1])&&(a[i]>=a[i+1])){
            return a[i];
        }
    }
    return {-1};
}

int efficientpeakelement(int *a , int n){
    int high = n-1, low = 0;
    while(low<=high){
        int mid = (high+low)/2;
        if((mid==0||a[mid]>=a[mid-1])&&(mid==n-1 ||a[mid]>=a[mid+1])){
            return mid;
        }
        else if(mid>0&&a[mid-1]>=a[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return {-1};
}
int main(){

    return 0;
}