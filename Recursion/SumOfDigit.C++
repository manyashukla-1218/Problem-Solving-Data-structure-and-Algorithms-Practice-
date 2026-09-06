#include<bits/stdc++.h>
using namespace std;
int SumOfDigit(int n){
    // base case
    if(n==0)  return 0;

    int digit = n%10;
    int remaining = n/10;

    return digit + SumOfDigit(remaining);
    
}
int main(){
    int n;
    cin>>n;
    cout << SumOfDigit(n);
    return 0;
}