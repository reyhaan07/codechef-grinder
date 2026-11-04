#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * To form a rectangle, we need two pairs of equal length sticks.
 * Let the lengths of the two pairs be 'a' and 'b'.
 * The area of the rectangle will be a * b.
 * To maximize the area, we need to pick the two largest possible pairs available.
 * 
 * Algorithm:
 * 1. Count the frequency of each stick length or sort the array.
 * 2. Sorting the array in descending order allows us to easily pick the largest pairs.
 * 3. Iterate through the sorted array and identify pairs.
 * 4. Keep track of the two largest pairs found.
 * 5. If we find at least two pairs, the product of their lengths is the answer.
 * 6. If we find fewer than two pairs, it's impossible to form a rectangle, output -1.
 */

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sort in descending order to find largest pairs first
    sort(a.rbegin(), a.rend());

    long long side1 = -1;
    long long side2 = -1;

    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == a[i + 1]) {
            if (side1 == -1) {
                side1 = a[i];
                i++; // Skip the next element as it's part of this pair
            } else {
                side2 = a[i];
                break; // Found both pairs, no need to continue
            }
        }
    }

    if (side1 != -1 && side2 != -1) {
        cout << side1 * side2 << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}