#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N customers. The i-th customer pays i.
 * Cost per lemonade is X.
 * Profit from the i-th customer = i - X.
 * To maximize profit, Chef should accept all customers where (i - X) > 0.
 * That is, accept all customers where i > X.
 * 
 * If i <= X, the profit is <= 0, so Chef should reject these customers.
 * 
 * The range of customers is 1 to N.
 * We sum (i - X) for all i such that X < i <= N.
 * If X >= N, no customer provides a positive profit, so max profit is 0.
 */

void solve() {
    long long N, X;
    cin >> N >> X;

    long long max_profit = 0;
    
    // We only consider customers i where i > X.
    // The range of customers to accept is from max(1, X + 1) to N.
    long long start = X + 1;
    
    if (start <= N) {
        // Sum of arithmetic progression from start to N:
        // Sum = (count) * (first + last) / 2
        // count = N - start + 1
        // first = start
        // last = N
        // Profit = Sum - (count * X)
        
        long long count = N - start + 1;
        long long sum_revenue = count * (start + N) / 2;
        long long total_cost = count * X;
        max_profit = sum_revenue - total_cost;
    } else {
        max_profit = 0;
    }

    cout << max_profit << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}