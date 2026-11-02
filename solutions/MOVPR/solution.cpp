#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y, Z;
    if (cin >> X >> Y >> Z) {
        // Chef needs 2 buckets of popcorn and 3 drinks.
        // We can buy them in a few ways:
        // 1. Buy everything individually: 2 * X + 3 * Y
        // 2. Buy 2 combos (covers 2 popcorn and 2 drinks) + 1 drink individually: 2 * Z + Y
        // 3. Buy 3 combos (covers 3 popcorn and 3 drinks) + 1 extra popcorn individually? 
        // Wait, max combos we can use is limited by the minimum of popcorns (2) and drinks (3).
        // So max combos = 2.
        // Thus, the possible combinations of 2 popcorn and 3 drinks are:
        // - 0 combos: 2*X + 3*Y
        // - 1 combo (1 popcorn, 1 drink from combo, 1 popcorn left, 2 drinks left): Z + X + 2*Y
        // - 2 combos (2 popcorn, 2 drinks from combos, 1 drink left): 2*Z + Y
        
        long long option1 = 2 * X + 3 * Y;
        long long option2 = Z + X + 2 * Y;
        long long option3 = 2 * Z + Y;

        long long ans = min({option1, option2, option3});
        cout << ans << "\n";
    }

    return 0;
}