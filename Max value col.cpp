#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    vector<vector<int>> grid(R, vector<int>(C));
    vector<vector<long long>> dp(R, vector<long long>(C));

    for(int row = 0; row < R; row++) {
        for(int col = 0; col < C; col++) {
            cin >> grid[row][col];
        }
    }

    // Column-wise maximum
    for(int col = 0; col < C; col++) {

        long long mx = grid[0][col];
        dp[0][col] = mx;

        for(int row = 1; row < R; row++) {
            mx = max(mx, (long long)grid[row][col]);
            dp[row][col] = mx;
        }
    }

    cout << "Column-wise Maximum DP:\n";
    for(int row = 0; row < R; row++) {
        for(int col = 0; col < C; col++) {
            cout << dp[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}