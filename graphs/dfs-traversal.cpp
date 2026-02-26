// Graph DFS Traversal

class Solution {
public:

    void dfsHelper(vector<vector<int>>& adj, int node,
                   vector<int>& vis, vector<int>& ans) {

        vis[node] = 1;
        ans.push_back(node);

        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfsHelper(adj, it, vis, ans);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {

        int n = adj.size();
        vector<int> vis(n, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfsHelper(adj, i, vis, ans);
            }
        }

        return ans;
    }
};
