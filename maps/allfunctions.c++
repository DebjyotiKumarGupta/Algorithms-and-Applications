#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<int,string> s;
  s[1]="abc";
  s[2]="abc";
  s[5]="bca";
  s[3]="abcd";
  s.insert({4,"afg"});
  map<int,string>::iterator it;
  for(it = s.begin();it!=s.end();++it){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
  for(auto &pr:s){
    cout<<pr.first<<" "<<pr.second<<endl;
  }
  auto it1 = s.find(3);
  cout<<(*it).second<<endl;

  return 0;  
} 

