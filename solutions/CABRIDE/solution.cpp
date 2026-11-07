#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A cab can hold at most 4 people.
 * Cost for X people in one cab = max(200, 100 * X).
 * 
 * If we put 1 person: cost = max(200, 100) = 200.
 * If we put 2 people: cost = max(200, 200) = 200.
 * If we put 3 people: cost = max(200, 300) = 300.
 * If we put 4 people: cost = max(200, 400) = 400.
 * 
 * To minimize cost, we want to maximize the number of people per cab 
 * while keeping the cost per person low.
 * 
 * Let's analyze the cost per person:
 * 1 person: 200/1 = 200
 * 2 people: 200/2 = 100
 * 3 people: 300/3 = 100
 * 4 people: 400/4 = 100
 * 
 * Since 2, 3, and 4 people all result in a cost of 100 per person, 
 * we should aim to fill cabs with 2, 3, or 4 people whenever possible.
 * Specifically, filling a cab with 4 people is always optimal or equivalent 
 * to other combinations.
 * 
 * For N people:
 * We can use ceil(N / 4) cabs.
 * If we have N people, we can distribute them into k = ceil(N/4) cabs.
 * To minimize cost, we distribute N people such that each cab has at least 2 people 
 * (if possible) to keep the cost at 100 per person.
 * 
 * Actually, the simplest way to view this:
 * Each cab costs at least 200.
 * If we have N people, we need at least ceil(N/4) cabs.
 * Total cost = (Number of cabs) * 100 * (Average people per cab).
 * Since the minimum cost per cab is 200, and for X > 2, cost is 100*X:
 * Total cost = 100 * N.
 * Wait, let's check:
 * N=1: 200. Formula 100*N = 100 (Incorrect).
 * N=2: 200. Formula 100*N = 200 (Correct).
 * N=3: 300. Formula 100*N = 300 (Correct).
 * N=4: 400. Formula 100*N = 400 (Correct).
 * N=5: 500. (4 in one, 1 in another: 400 + 200 = 600? No, 3 in one, 2 in another: 300 + 200 = 500).
 * 
 * The cost is 100 * N, but with a floor of 200 per cab.
 */

void solve() {
    int N;
    cin >> N;
    
    // We need ceil(N/4) cabs.
    // Let k be the number of cabs.
    int k = (N + 3) / 4;
    
    // We want to distribute N people into k cabs such that each cab has at least 2 people 
    // to maintain the 100 per person rate, except when N=1.
    // If N=1, cost is 200.
    // If N > 1, we can always distribute N people into k cabs such that each cab has 
    // at least 2 people (since N >= 2*k is true for N >= 2).
    // Thus, for N > 1, cost is 100 * N.
    
    if (N == 1) {
        cout << 200 << "\n";
    } else {
        cout << 100 * N << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}