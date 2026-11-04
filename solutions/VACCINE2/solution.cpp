#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N people with ages a_i.
 * Capacity per day is D.
 * Risk group: age >= 80 or age <= 9.
 * Non-risk group: 10 <= age <= 79.
 * Constraint: Cannot mix risk and non-risk groups on the same day.
 * 
 * Strategy:
 * 1. Count the number of people in the risk group (R) and non-risk group (NR).
 * 2. For each group, the number of days required is ceil(count / D).
 * 3. Total days = ceil(R / D) + ceil(NR / D).
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(1) extra space.
 */

void solve() {
    int N;
    long long D;
    cin >> N >> D;
    
    int risk_count = 0;
    int non_risk_count = 0;
    
    for (int i = 0; i < N; ++i) {
        int age;
        cin >> age;
        if (age >= 80 || age <= 9) {
            risk_count++;
        } else {
            non_risk_count++;
        }
    }
    
    // Calculate days for risk group: ceil(risk_count / D)
    // Using integer arithmetic: (count + D - 1) / D
    long long days_risk = (risk_count + D - 1) / D;
    
    // Calculate days for non-risk group: ceil(non_risk_count / D)
    long long days_non_risk = (non_risk_count + D - 1) / D;
    
    cout << days_risk + days_non_risk << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}