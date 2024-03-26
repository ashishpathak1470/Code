#include <vector>
#include <string>
#include <algorithm>
#include <iostream> // Added for debugging

using namespace std;

int lsc(vector<string>& words, int curr, int prev, vector<vector<int>>& dp) {
    if(curr == words.size()) return 0;
    if(dp[curr][prev + 1] != -1) return dp[curr][prev + 1];

    int take = 0;
    if(prev == -1) {
        take = 1 + lsc(words, curr + 1, curr, dp);
    }
    else if(words[curr].size() == words[prev].size() + 1) {
        int i = 0, j = 0;
        for(i = 0; i < words[curr].size(); i++) {
            if(words[curr][i] == words[prev][j]) {
                j++;
            }
        }
        if(j == words[prev].size()) {
            take = 1 + lsc(words, curr + 1, curr, dp);
        }
    }
    else if(words[curr].size() == words[prev].size()) {
        // If the sizes are the same, consider not taking the current word
        take = lsc(words, curr + 1, prev, dp);
    }

    // Consider not taking the current word
    int ntake = lsc(words, curr + 1, prev, dp);

    // Store the result and return
    int result = max(take, ntake);
    dp[curr][prev + 1] = result;
    std::cout << "At index " << curr << ", prev " << prev << ", result " << result << std::endl; // Debug print
    return result;
}

int longestStrChain(vector<string>& words) {
    int n = words.size();
    sort(words.begin(), words.end(), [&](const string& s1, const string& s2) {
        return s1.size() < s2.size();
    });
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return lsc(words, 0, -1, dp);
}
int main() {
    // Example usage and testing
    vector<string> words = {"bdca","bda","ca","dca","a"};
    cout << "Length of longest string chain: " << longestStrChain(words) << endl;
    
    return 0;
}
