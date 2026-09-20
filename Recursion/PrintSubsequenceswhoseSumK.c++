#include<bits/stdc++.h>
using namespace std;

void solve(int ind, vector<int>& ds, int sum, int K, vector<int>& arr, int n){
     if (ind == n) {
        if (sum == K) {
            for (int x : ds)
                cout << x << " ";

            cout << '\n';
        }
        return;
    }

    // Pick
    ds.push_back(arr[ind]);

    solve(ind + 1, ds,
          sum + arr[ind],
          K, arr, n);

    ds.pop_back();

    // Not Pick
    solve(ind + 1, ds,
          sum,
          K, arr, n);
 }
int main(){
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

     int K;
    cin >> K;

    vector<int> ds;

    solve(0, ds, 0, K, arr, n);

    return 0;

}
