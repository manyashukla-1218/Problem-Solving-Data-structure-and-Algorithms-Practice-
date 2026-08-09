#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& arr) {
    int n = arr.size();

    int last = arr[n - 1];

    // Shift elements one position to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Put last element at first position
    arr[0] = last;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateArray(arr);

    cout << "Array after rotating by one position: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}