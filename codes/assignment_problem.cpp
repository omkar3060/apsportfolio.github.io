#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int count_set_bits(int arr[], int k)
{
    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] == 1)
            cnt++;
    }
    return cnt;
}
void assign1(int n, int cost[3][3])
{
    int power = pow(2, n);
    int arr[3] = {0};
    int dp[power];
    for (int i = 0; i < power; i++)
        dp[i] = INT_MAX;
    dp[0] = 0;
    for (int i = 0; i < power; i++)
    {
        int con = i, k = 0;
        while (con > 0)
        {
            arr[k++] = con % 2;
            con = con / 2;
        }
        int x = count_set_bits(arr, k);
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != 1)
            {
                dp[i | (1 << j)] = min(dp[i | (1 << j)], cost[x][j] + dp[i]);
            }
        }
    }
    for (int i = 0; i < power; i++)
        cout << dp[i] << " ";
}
int main()
{
    int n = 3;
    int cost[3][3] = {{3, 2, 7}, {5, 1, 3}, {2, 7, 2}};
    assign1(n, cost);
}
