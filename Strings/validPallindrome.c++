#include<bits/stdc++.h>
using namespace std;
bool Ispallindrom(string(s)){
   int l=0, r = s.size()-1;
   while(l<r){
    if(s[l]!=s[r]){
        return false;
    }
    l++;
    r--;
   }
   return true;
}

int main(){
    string s;
    cin>>s;

    cout<< Ispallindrom(s);
    return 0;
}