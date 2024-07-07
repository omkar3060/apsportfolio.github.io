#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;
class Solution {
  public: 
    int lcs(int n, int m, string str1, string str2) {
        int dp[1001][1001];
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
                else if (str1[i - 1] == str2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[n][m];
    }
};
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m; 
        string str1, str2;
        cin >> str1 >> str2; 
        Solution ob;
        cout << ob.lcs(n, m, str1, str2) << endl;
    }
    return 0;
}

