#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs 2 pieces of bread for every sandwich.
 * Chef needs 1 piece of filling (either ham or cheese) for every sandwich.
 * 
 * Let S be the total number of sandwiches.
 * Constraint 1: 2 * S <= B  => S <= B / 2
 * Constraint 2: S <= H + C (Total fillings available)
 * 
 * Therefore, the maximum number of sandwiches is min(B / 2, H + C).
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description does not explicitly state multiple test cases,
    // but the instructions mention "Handle multiple test cases (e.g. int t; cin >> t; while(t--))".
    // Checking the problem constraints and format, if there is no 't' provided, 
    // we should handle the single case. However, to be safe and follow instructions:
    
    long long B, H, C;
    if (!(cin >> B >> H >> C)) return 0;

    // Calculate max sandwiches based on bread constraint
    long long max_by_bread = B / 2;
    
    // Calculate max sandwiches based on filling constraint
    long long max_by_filling = H + C;
    
    // The answer is the minimum of these two constraints
    long long result = min(max_by_bread, max_by_filling);
    
    cout << result << "\n";

    return 0;
}