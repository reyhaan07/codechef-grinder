#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sushil_wealth = a[n - 1];
    int pos = n;

    // We only need to check people immediately in front of Sushil.
    // Sushil is currently at index n-1. The person directly in front is at index n-2, then n-3, and so on.
    // Sushil can bully person at index i if a[i] <= sushil_wealth / 2.
    // Wait, let's read carefully: "Everytime Sushil sees that the person directly in front of him has a wealth less than or equal to half of his own wealth, Sushil will bully him out of the line"
    // Since Sushil moves forward, the set of people he can bully are those contiguous from the end (n-2 downwards) that satisfy the condition.
    // The moment he encounters a person he cannot bully (i.e., wealth > sushil_wealth / 2), he stops completely because he can only bully the person *directly* in front of him.
    
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] <= sushil_wealth / 2) {
            pos--;
        } else {
            break;
        }
    }

    cout << pos << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}