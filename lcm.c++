#include<iostream>
using namespace std;
int gcd(int a , int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}
int lcmnaive(int a , int b){
    int max1 = max(a,b);
        while(true){
         if(max1%a==0 && max1%b == 0){
             return max1;
         }
         max1++;
        }

    return max1;
    }
int lcmoptimized(int a , int b){
    int gcd1 = gcd(a,b);
    return (a*b)/gcd1;
}
int main(){
    int n1, n2;
    cout<<"Enter any two number"<<endl;
    cin>>n1>>n2;
    int best = lcmoptimized(n1,n2);
    cout<<best<<endl;
    int naive = lcmnaive(n1,n2);
    cout<<naive;
    return 0;
}