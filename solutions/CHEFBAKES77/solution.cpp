#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N cakes, each weighing X kg.
 * Each vehicle can carry at most Y kg.
 * Since each cake weighs X kg, the number of cakes that can fit in one vehicle is floor(Y / X).
 * Let k = floor(Y / X) be the number of cakes per vehicle.
 * To find the minimum number of vehicles needed for N cakes, we calculate ceil(N / k).
 * Using integer arithmetic, ceil(N / k) can be calculated as (N + k - 1) / k.
 */

void solve() {
    long long N, X, Y;
    if (!(cin >> N >> X >> Y)) return;

    // Calculate how many cakes fit in one vehicle
    long long cakes_per_vehicle = Y / X;

    // Calculate minimum vehicles needed using ceiling division
    // vehicles = ceil(N / cakes_per_vehicle)
    long long vehicles = (N + cakes_per_vehicle - 1) / cakes_per_vehicle;

    cout << vehicles << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the format,
    // but standard competitive programming practice suggests checking for T if provided.
    // Given the constraints and description, we handle the input as specified.
    int t = 1; 
    // If the input format were to include T, we would uncomment the line below:
    // cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}