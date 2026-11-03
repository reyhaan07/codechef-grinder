#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y;
    if (cin >> X >> Y) {
        long long total_score = (X * 3) + (Y * 2);
        cout << total_score << "\n";
    }

    return 0;
}