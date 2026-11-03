#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Distance to travel: N
 * Petrol: Price X per litre, Mileage A km/litre.
 * Diesel: Price Y per litre, Mileage B km/litre.
 * 
 * Litres of petrol needed = N / A
 * Cost of petrol = (N / A) * X
 * 
 * Litres of diesel needed = N / B
 * Cost of diesel = (N / B) * Y
 * 
 * To compare (N * X) / A and (N * Y) / B:
 * Since N > 0, we can compare X/A and Y/B.
 * Multiplying both sides by (A * B) to avoid floating point issues:
 * Compare (X * B) and (Y * A).
 * 
 * If (X * B) < (Y * A) -> PETROL is cheaper.
 * If (X * B) > (Y * A) -> DIESEL is cheaper.
 * If (X * B) == (Y * A) -> ANY.
 */

void solve() {
    long long N, X, Y, A, B;
    if (!(cin >> N >> X >> Y >> A >> B)) return;

    // Using long long to prevent any potential overflow, 
    // though constraints (100) are small enough for int.
    long long petrol_cost_factor = X * B;
    long long diesel_cost_factor = Y * A;

    if (petrol_cost_factor < diesel_cost_factor) {
        cout << "PETROL" << "\n";
    } else if (diesel_cost_factor < petrol_cost_factor) {
        cout << "DIESEL" << "\n";
    } else {
        cout << "ANY" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}