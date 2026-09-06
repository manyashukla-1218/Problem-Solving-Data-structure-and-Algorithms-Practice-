#include<bits/stdc++.h>
using namespace std;
void Rev(int i, vector<int>&arr,int n){
    if(i>=n/2)  return;

    swap(arr[i], arr[n-i-1]);
   Rev(i+1, arr, n);

}
int main(){
    int n;
    cout<< "enter the number of element: ";
    cin>>n;
    vector<int>arr(n);
     cout << "Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Rev(0, arr, n);

     cout << "Reversed array: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}