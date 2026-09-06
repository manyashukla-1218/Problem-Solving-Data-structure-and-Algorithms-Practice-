#include<bits/stdc++.h>
using namespace std;


void  PrintSubquences(string s, int index, string current) {

    if(index == s.size()) {
        cout << current << endl;
        return;
    }

     PrintSubquences(s, index + 1, current);

    PrintSubquences(s, index + 1, current + s[index]);
}
int main(){
    string s;
    cin>>s;

    PrintSubquences(s,0,"");
 return 0;
}