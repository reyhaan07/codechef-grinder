#include <vector>
#include <map>
#include <algorithm>

/**
 * Problem Analysis:
 * We need to find the element with the highest frequency.
 * In case of a tie, choose the smallest element.
 * 
 * Approach:
 * Using std::map<int, int> is ideal here because it keeps the keys (elements) 
 * sorted in ascending order. When we iterate through the map, if we encounter 
 * a frequency strictly greater than our current max, we update. If we encounter 
 * an equal frequency, we do nothing, because the map's iteration order 
 * guarantees we process smaller elements first.
 */

std::pair<int, int> mostFrequent(int N, std::vector<int>& A) {
    std::map<int, int> freq;
    for (int x : A) {
        freq[x]++;
    }
    
    int bestElement = -1;
    int maxCount = -1;
    
    // Since std::map is sorted by key, we iterate from smallest to largest element.
    // We only update if count > maxCount. This naturally handles the tie-breaking
    // rule (smallest element) because we won't update on equal counts.
    for (auto const& [element, count] : freq) {
        if (count > maxCount) {
            maxCount = count;
            bestElement = element;
        }
    }
    
    return {bestElement, maxCount};
}