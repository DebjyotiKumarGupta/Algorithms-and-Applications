#include<bits/stdc++.h>
using namespace std;

  string shift(char c, int n){
        int w = 'c' ;
        w += n;
        return (to_string(w));
    }
    string replaceDigits(string s) {
        string z = "";
        for(int i = 0 ; i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                char d=s[i-1];
                z = shift('d',s[i]);
            }
        }
        return s;
    }

    int main(){
        string str ;
        cin>>str;
        string c = replaceDigits(str);
        cout<<c;
return 0;

    }