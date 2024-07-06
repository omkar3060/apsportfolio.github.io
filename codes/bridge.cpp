#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(int node, int parent, int timer, vector<int> &disc, vector<int> &low, vector<vector<int>> &result, vector<int> adj[], unordered_map<int, bool> &vis)
    {

        vis[node] = true;
        disc[node] = low[node] = timer++;
        for (auto nbr : adj[node])
        {
            if (nbr == parent)
                continue;
            if (!vis[nbr])
            {
                dfs(nbr, node, timer, disc, low, result, adj, vis);
                low[node] = min(low[node], low[nbr]);
                if (low[nbr] > disc[node])

                {

                    vector<int> ans;
                    ans.push_back(node);
                    ans.push_back(nbr);
                    result.push_back(ans);
                }
            }
            else
            {
                low[node] = min(low[node], disc[nbr]);
            }
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d)
    {
        vector<vector<int>> result;
        int timer = 0;
        vector<int> disc(V);
        vector<int> low(V);
        int parent = -1;
        unordered_map<int, bool> vis(V);
        for (int i = 0; i < V; i++)
        {
            disc[i] = low[i] = -1;
            vis[i] = false;
        }
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i, parent, timer, disc, low, result, adj, vis);
            }
        }

        for (int i = 0; i < result.size(); i++)
        {
            if ((result[i][0] == c && result[i][1] == d) || (result[i][0] == d && result[i][1] == c))
                return 1;
        }
        return 0;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i = 0;
        while (i++ < E)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int c, d;
        cin >> c >> d;

        Solution obj;
        cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}
