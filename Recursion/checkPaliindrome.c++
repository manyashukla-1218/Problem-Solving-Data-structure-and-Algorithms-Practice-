#include<bits/stdc++.h>
using namespace std;
 
bool Check(int i, string&s){
   if(i>=s.size()/2)  return true;
    if(s[i]!=s[s.size()-i-1])  return false;
     return Check(i+1, s);
}

 int main(){
    string s;
    cin>>s;
    cout<< Check(0, s);
    return 0;
 }