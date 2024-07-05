#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        unordered_map<int,list<pair<int,int>>>g;
        vector<int>key(V+1);
        vector<bool>mst(V+1);
        vector<int>parent(V+1);
        for(int i=0;i<=V;i++)
        {
            key[i]=INT_MAX;
            parent[i]=-1;
            mst[i]=false;
        }
        key[0]=0;
        for(int i=0;i<V;i++)
        {
            int mini=INT_MAX;
            int u;
            for(int v=0;v<V;v++)
            {
                if(mst[v]==false&&key[v]<mini)
                {
                    u=v;
                    mini=key[v];
                }
            }
            mst[u]=true;
            for(auto it:adj[u])
            {
                int v=it[0];
                int w=it[1];
                if(mst[v]==false&&w<key[v])
                {
                    parent[v]=u;
                    key[v]=w;
                }
            }
        }
        int sum=0;
        for(int i=0;i<V;i++)
        sum+=key[i];
        return sum;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}
