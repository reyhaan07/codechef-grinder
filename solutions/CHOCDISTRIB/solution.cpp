#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N chocolates. Each child receives either 1 or 2 chocolates.
 * 
 * To minimize the number of children:
 * We want to give as many children as possible 2 chocolates.
 * If N is even, we give 2 chocolates to N/2 children. Minimum = N/2.
 * If N is odd, we give 2 chocolates to (N-1)/2 children and 1 chocolate to 1 child.
 * Total children = (N-1)/2 + 1 = (N+1)/2.
 * This can be written as ceil(N/2.0) or (N + 1) / 2.
 * 
 * To maximize the number of children:
 * We want to give as many children as possible 1 chocolate.
 * Since each child must receive at least 1 chocolate, we give 1 chocolate to every child.
 * Maximum = N.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;

        // Minimum children: ceil(N / 2)
        long long min_children = (n + 1) / 2;
        
        // Maximum children: N (give 1 chocolate to each child)
        long long max_children = n;

        cout << min_children << " " << max_children << "\n";
    }

    return 0;
}