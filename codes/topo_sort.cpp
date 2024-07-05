#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	void topoSort(int node,unordered_map<int,bool>&visited,stack<int>&s,vector<int> adj[])
	{
	    visited[node]=true;
	    for(auto neighbour:adj[node])
	    {
	        if(!visited[neighbour])
	        topoSort(neighbour,visited,s,adj);
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>ans;
	    stack<int>s;
	    unordered_map<int,bool>visited;
	    for (int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        topoSort(i,visited,s,adj);
	    }
	    while(!s.empty())
	    {
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};

int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    } 
    return 0;
}
