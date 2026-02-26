// Graph BFS Traversal

class Solution {
public:
    vector<int> bfs(vector<vector<int>>& adj) {

        int n = adj.size();
        vector<int> vis(n, 0);
        vector<int> ans;

        queue<int> q;

        for (int i = 0; i < n; i++) {

            if (!vis[i]) {

                q.push(i);
                vis[i] = 1;

                while (!q.empty()) {

                    int curr = q.front();
                    q.pop();
                    ans.push_back(curr);

                    for (auto it : adj[curr]) {
                        if (!vis[it]) {
                            vis[it] = 1;
                            q.push(it);
                        }
                    }
                }
            }
        }

        return ans;
    }
};
