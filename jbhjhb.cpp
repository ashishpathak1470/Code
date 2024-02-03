#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int kthSmallestAmount(const vector<int>& denominations, int k) {
    // Sort the denominations in ascending order
    vector<int> sortedDenominations = denominations;
    sort(sortedDenominations.begin(), sortedDenominations.end());

    // Initialize a vector to store the minimum number of coins needed for each amount
    vector<int> dp(k + 1, INT_MAX);
    dp[0] = 0;

    // Iterate through each denomination
    for (int coin : sortedDenominations) {
        // Update dp array for each amount
        for (int amount = coin; amount <= k; ++amount) {
            if (dp[amount - coin] != INT_MAX) {
                dp[amount] = min(dp[amount], dp[amount - coin] + 1);
            }
        }
    }

    // Return the kth smallest amount
    return dp[k];
}

int main() {
    // Input
    int N, K;
    cin >> N >> K;

    vector<int> denominations(N);
    for (int i = 0; i < N; ++i) {
        cin >> denominations[i];
    }

    // Output
    int result = kthSmallestAmount(denominations, K);
    cout << result << endl;

    return 0;
}
