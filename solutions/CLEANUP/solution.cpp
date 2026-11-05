#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: CLEANUP
 * The problem asks us to identify which jobs are remaining, sort them, 
 * and distribute them between the Chef and the assistant in an alternating fashion.
 * 
 * Correction: If a list is empty, print "-1" instead of an empty line.
 */

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
    
    // Use a boolean array to mark finished jobs
    vector<bool> finished(n + 1, false);
    for (int i = 0; i < m; ++i) {
        int job;
        cin >> job;
        finished[job] = true;
    }
    
    // Collect all unfinished jobs in increasing order
    vector<int> unfinished;
    for (int i = 1; i <= n; ++i) {
        if (!finished[i]) {
            unfinished.push_back(i);
        }
    }
    
    vector<int> chef_jobs;
    vector<int> assistant_jobs;
    
    // Distribute jobs: Chef takes 0, 2, 4... indices; Assistant takes 1, 3, 5...
    for (int i = 0; i < (int)unfinished.size(); ++i) {
        if (i % 2 == 0) {
            chef_jobs.push_back(unfinished[i]);
        } else {
            assistant_jobs.push_back(unfinished[i]);
        }
    }
    
    // Print Chef's jobs
    if (chef_jobs.empty()) {
        cout << "-1" << endl;
    } else {
        for (int i = 0; i < (int)chef_jobs.size(); ++i) {
            cout << chef_jobs[i] << (i == (int)chef_jobs.size() - 1 ? "" : " ");
        }
        cout << endl;
    }
    
    // Print Assistant's jobs
    if (assistant_jobs.empty()) {
        cout << "-1" << endl;
    } else {
        for (int i = 0; i < (int)assistant_jobs.size(); ++i) {
            cout << assistant_jobs[i] << (i == (int)assistant_jobs.size() - 1 ? "" : " ");
        }
        cout << endl;
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