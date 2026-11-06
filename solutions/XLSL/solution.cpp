#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have three sizes: S, L, XL.
 * Available: X (S), Y (L), Z (XL)
 * Demand: A (S), B (L), C (XL)
 * 
 * Conversion rules:
 * 1. XL can become L or S.
 * 2. L can become S.
 * 
 * Strategy:
 * To maximize happiness, we should satisfy the most restrictive demands first.
 * XL demand is the most restrictive because XL shirts can only satisfy XL demand.
 * L demand is the next, as L shirts can satisfy L or S demand.
 * S demand is the least restrictive, as S shirts can only satisfy S demand.
 * 
 * Step 1: Satisfy XL demand (C) using XL shirts (Z).
 *    - Happy XL = min(Z, C)
 *    - Remaining XL shirts = Z - Happy XL
 *    - Remaining XL demand = C - Happy XL
 * 
 * Step 2: Satisfy L demand (B) using L shirts (Y) and remaining XL shirts.
 *    - Available L = Y + (Remaining XL shirts)
 *    - Happy L = min(Available L, B)
 *    - Remaining L shirts = Available L - Happy L
 *    - Remaining L demand = B - Happy L
 * 
 * Step 3: Satisfy S demand (A) using S shirts (X) and remaining L/XL shirts.
 *    - Available S = X + (Remaining L shirts)
 *    - Happy S = min(Available S, A)
 * 
 * Total Happy = Happy XL + Happy L + Happy S
 */

void solve() {
    long long X, Y, Z, A, B, C;
    cin >> X >> Y >> Z >> A >> B >> C;

    long long happy_xl = min(Z, C);
    long long rem_z = Z - happy_xl;
    
    long long available_l = Y + rem_z;
    long long happy_l = min(available_l, B);
    long long rem_y = available_l - happy_l;
    
    long long available_s = X + rem_y;
    long long happy_s = min(available_s, A);
    
    cout << happy_xl + happy_l + happy_s << "\n";
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