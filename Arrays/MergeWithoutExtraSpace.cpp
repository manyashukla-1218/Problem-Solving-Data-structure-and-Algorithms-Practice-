#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mergeArrays(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();

    int gap = (n + m + 1) / 2;

    while (gap > 0) {

        int i = 0;
        int j = gap;

        while (j < n + m) {

            // Both elements are in array a
            if (j < n) {
                if (a[i] > a[j]) {
                    swap(a[i], a[j]);
                }
            }

            // i is in a and j is in b
            else if (i < n) {
                if (a[i] > b[j - n]) {
                    swap(a[i], b[j - n]);
                }
            }

            // Both elements are in array b
            else {
                if (b[i - n] > b[j - n]) {
                    swap(b[i - n], b[j - n]);
                }
            }

            i++;
            j++;
        }

        // Reduce gap
        if (gap == 1)
            break;

        gap = (gap + 1) / 2;
    }
}

int main() {

    int n, m;

    // Input size of first array
    cin >> n;

    vector<int> a(n);

    // Input first sorted array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Input size of second array
    cin >> m;

    vector<int> b(m);

    // Input second sorted array
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Merge without extra space
    mergeArrays(a, b);

    // Print first array
    for (int i = 0; i < n; i++) {
        cout << a[i];

        if (i != n - 1)
            cout << " ";
    }

    cout << endl;

    // Print second array
    for (int i = 0; i < m; i++) {
        cout << b[i];

        if (i != m - 1)
            cout << " ";
    }

    cout << endl;

    return 0;
}