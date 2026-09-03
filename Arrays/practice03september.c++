#include <bits/stdc++.h> 
using namespace std;

// int main(){
//     int age;
//     cin>>age;
//     if(age<18){
//         cout<<"not an adult";
//     }
//     else{
//         cout<<" Adult";
//     }
//     return 0;
// }
// void dosomething(string &s){
//     s[0] = 'T';
//     cout<< s << endl;
// }
// int main(){
//     string s = "Manya";
//     dosomething(s);
//     cout<< s << endl;
//     return 0;
// }
// void print1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n-i+1;j++){
//             cout << '*' <<" ";
//         }
//         cout<<endl;
//     }
// }
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout <<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout <<"*";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout <<" ";
//         }
//         cout<<endl;
//     }
// }
// void print2(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout <<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout <<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout <<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//          int n;
//          cin>>n;
//          print1(n);
//          print2(n);
//     }
   
    
// }

// int main(){
//     int n;
//     cin>>n;
//     int rvn = 0;
//     while(n>0){
//         int lsd = n%10;
//         rvn = (rvn*10)+lsd;
//         n = n/10;
//     }
//     cout<<rvn;
// }

// int main(){
//     int n;
//     cin>>n;
//     int rvn = 0;
//     int dup = n;
//     while(n>0){
//         int ld = n%10;
//         rvn = (rvn*10)+ld;
//         n = n/10;
//     }
//     if(rvn==dup){
//         cout<<"pallindrome";
//     }
//     else{
//         cout<<"not pallindrome";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     int dup = n;
//     while(n>0){
//         int ld = n%10;
//         sum = sum + (ld*ld*ld);
//         n = n/10;
//     }
//    if(dup==sum)  cout<<"true";
//    else{
//     cout<<"false";
//    }
   
// }
// void  printDivsior(int n){
//     vector<int>ls;
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0){
//             ls.push_back(i);
//             if(n/i!=i){
//                 ls.push_back(n/i);
//             }
//         }
//     }
//     sort(ls.begin(),ls.end());
//     for(auto it: ls){
//         cout<< it <<" ";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     printDivsior(n);
// }

// prime or not
// void prime(int n){
//    int cnt = 0;
//    for(int i=1;i*i<=n;i++){
//     if(n%i==0){
//         cnt++;
//         if(n/i!=i){
//             cnt++;
//         }
//     }
//    }
//    if(cnt==2)  cout<<"prime";
//    else{
//     cout<<"not prime";
//    }
// }
// int main(){
//     int n;
//     cin>>n;
//     prime(n);
// }

int mostFrequent(vector<int>& arr) {
    unordered_map<int, int> freq;

    for (int x : arr) {
        freq[x]++;
    }

    int ans = arr[0];
    int maxFreq = 0;

    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            ans = it.first;
        }
    }

    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< mostFrequent(arr)<< endl;;
}