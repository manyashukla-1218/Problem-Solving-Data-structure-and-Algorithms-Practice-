#include<bits/stdc++.h>
using namespace std;

void printSubsequences(int index, vector<int>& ds, vector<int>& arr, int n)
{
    // Base condition
    if (index == n)
    {
        for (int x : ds)
        {
            cout << x << " ";
        }

        cout << endl;
        return;
    }

    // PICK the current element
    ds.push_back(arr[index]);

    printSubsequences(index + 1, ds, arr, n);

    // Backtracking
    ds.pop_back();

    // NOT PICK the current element
    printSubsequences(index + 1, ds, arr, n);
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ds;

    printSubsequences(0, ds, arr, n);

    return 0;
}