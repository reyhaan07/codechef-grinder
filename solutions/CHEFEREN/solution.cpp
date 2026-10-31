#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N episodes.
 * Even indexed episodes (2, 4, 6, ...) have duration A.
 * Odd indexed episodes (1, 3, 5, ...) have duration B.
 * 
 * Number of even indexed episodes: N / 2
 * Number of odd indexed episodes: N - (N / 2)
 * 
 * Total duration = (N / 2) * A + (N - N / 2) * B
 * 
 * Constraints:
 * N, A, B <= 60.
 * The maximum possible duration is 60 * 60 = 3600, which fits in a standard int.
 * Using long long is safe practice.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long even_count = n / 2;
        long long odd_count = n - even_count;

        long long total_duration = (even_count * a) + (odd_count * b);
        cout << total_duration << "\n";
    }

    return 0;
}