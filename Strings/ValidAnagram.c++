#include<bits/stdc++.h>
using namespace std;

bool IsAnagram(string s, string t){
    if(s.length()!=t.length()) return false;
    vector<int>freq(26,0);

    for(char ch:s){
        freq[ch-'a']++;
    }
     for(char ch:t){
        freq[ch-'a']--;
    }
    for(int count:freq){
        if(count!=0)  return false;    
  }
  return true;
}
int main(){
    string s,t;

    cout<<"enter the first string: ";
    cin>>s;

    cout<<"enter the second string: ";
    cin>>t;
    
    if(IsAnagram(s,t)){
        cout<<" true";
    }
    else{
        cout<<"false";
    }
    return 0;

}