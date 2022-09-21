#include<iostream>
using namespace std;
// int fact(int);
// int main(){
//     int n;
//     cout<<"Enter the number to find the factorial"<<endl;
//     cin>>n;
//     int rev = fact(n);
//     cout<<rev;

   
// }

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

// Approach 2:

int main(){
    int fact=1,n;
    cout<<"Enter the number to find the factorial"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
      fact = fact*i;
    }
    cout<<fact;
    return 0;

}