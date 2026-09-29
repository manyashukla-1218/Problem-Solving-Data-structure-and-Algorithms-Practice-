# Codeforces 2264A — Rumb Needs a Hand

## Problem

Given a permutation of numbers from `1` to `n`, we can choose some indices and reverse the elements at those selected indices. Determine whether the permutation can be sorted in ascending order using this operation.

## Approach

1. Find all indices where `p[i] != i + 1`.
2. Store these incorrect indices in a vector named `bad`.
3. Check whether the values at these indices match their target positions in reverse order.
4. If every check passes, print `YES`; otherwise, print `NO`.

## C++14 Solution

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

```
int t;
cin >> t;

while (t--) {
    int n;
    cin >> n;

    vector<int> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    vector<int> bad;

    for (int i = 0; i < n; i++) {
        if (p[i] != i + 1) {
            bad.push_back(i);
        }
    }

    bool possible = true;
    int k = bad.size();

    for (int i = 0; i < k; i++) {
        if (p[bad[i]] != bad[k - 1 - i] + 1) {
            possible = false;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << '\n';
}

return 0;
```

}

## Dry Run

Input:
4 2 3 1

Incorrect positions (0-based): `bad = [0, 3]`

* Index `0`: value is `4`; its target index is `3`.
* Index `3`: value is `1`; its target index is `0`.
* Both checks pass.

Output: `YES`

## Complexity

* Time: `O(n)` per test case
* Space: `O(n)`
