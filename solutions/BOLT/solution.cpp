#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The final speed of Chef is v_final = k1 * k2 * k3 * v.
 * The time taken to complete 100m is T = 100 / v_final.
 * The problem states the time is rounded to 2 decimal places.
 * We need to check if the rounded time is strictly less than 9.58.
 * 
 * To handle floating point precision issues, we can add a small epsilon 
 * or perform the rounding explicitly.
 * Given the requirement: round(T * 100) / 100 < 9.58
 * This is equivalent to: round(T * 100) < 958
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        double k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;

        // Calculate final speed
        double final_speed = k1 * k2 * k3 * v;
        
        // Calculate time taken
        double time_taken = 100.0 / final_speed;

        // The problem states the clock shows time rounded to 2 decimal places.
        // To round to 2 decimal places, we can use the standard approach:
        // floor(time_taken * 100 + 0.5) / 100.0
        // We want to check if this value < 9.58.
        // Multiplying by 100: floor(time_taken * 100 + 0.5) < 958
        
        // Using a small epsilon to handle floating point inaccuracies
        double rounded_time = floor(time_taken * 100 + 1e-9 + 0.5) / 100.0;

        if (rounded_time < 9.58) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}