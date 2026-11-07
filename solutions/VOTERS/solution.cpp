#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given three sorted lists of voter IDs. We need to find IDs that appear 
 * in at least two of the three lists.
 * 
 * Constraints: N1, N2, N3 <= 50,000. Total IDs <= 150,000.
 * An efficient approach is to use a frequency map (or hash map) to count occurrences
 * of each ID, then iterate through the map to collect IDs with count >= 2.
 * Since we need the output in ascending order, a std::map is perfect as it 
 * keeps keys sorted.
 * 
 * Time Complexity: O(N log N) where N = N1 + N2 + N3.
 * Space Complexity: O(N) to store the IDs.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1, n2, n3;
    if (!(cin >> n1 >> n2 >> n3)) return 0;

    // Using a map to store frequency of each ID.
    // Map automatically keeps keys in ascending order.
    map<int, int> freq;

    int total_elements = n1 + n2 + n3;
    for (int i = 0; i < total_elements; ++i) {
        int id;
        cin >> id;
        freq[id]++;
    }

    // Collect IDs that appear in at least 2 lists
    vector<int> result;
    for (auto const& [id, count] : freq) {
        if (count >= 2) {
            result.push_back(id);
        }
    }

    // Output the count of such IDs
    cout << result.size() << "\n";
    
    // Output the IDs themselves
    for (int id : result) {
        cout << id << "\n";
    }

    return 0;
}