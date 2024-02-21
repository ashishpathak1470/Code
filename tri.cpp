#include <iostream>
#include <vector>

using namespace std;

int min_sum(vector<vector<int>>& triangle,int i,int j,vector<vector<int>>& dp){
        if(j>triangle.size()-1 || i>triangle[j].size()-1) return 0;

        if(dp[j][i]!=-1) return dp[j][i];
        int same=triangle[j][i] + min_sum(triangle,i,j+1,dp);
        int nsame=triangle[j][i] + min_sum(triangle,i+1,j+1,dp);

        return dp[j][i]=min(same,nsame);
}

int main() {
    vector<vector<int>> triangle = {{2}, {0, 4}, {1, 5, 7}, {4, 1, 8, 3}};
    vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), -1));

    int result = min_sum(triangle, 0, 0, dp);
    cout << "Minimum sum path: " << result << endl;

    return 0;
}
