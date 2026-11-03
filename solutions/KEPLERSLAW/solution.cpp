#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        long long T1, T2, R1, R2;
        cin >> T1 >> T2 >> R1 >> R2;
        
        // Kepler's 3rd Law states: T1^2 / R1^3 == T2^2 / R2^3
        // Cross-multiplying to avoid floating point inaccuracies:
        // T1^2 * R2^3 == T2^2 * R1^3
        
        long long left = (T1 * T1) * (R2 * R2 * R2);
        long long right = (T2 * T2) * (R1 * R1 * R1);
        
        if (left == right) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}