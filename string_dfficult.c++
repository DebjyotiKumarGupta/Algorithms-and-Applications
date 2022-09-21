#include<bits/stdc++.h>
#include<set>

using namespace std;

void printpowset(string s){
    set<int> v;
    int n = s.length();
    string  size;
    int powsize = pow(2,n);
    for(int i = 0; i< powsize;i++){
        for(int j=0;j<n;j++){
            if((i&(1<<j))!=0){
               size = s[j];
            }

        }
        v.insert(size);
    }
}

int main(){
    string s;
    cout<<"Enter any string"<<endl;
    cin>>s;
    printpowset(s);
    return 0;
}