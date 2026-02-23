class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
        vector<bool>visited(n, false);
        vector<int> res;
        
        queue<int> q;
        int src = 0;
        visited[src] = true;
        q.push(src);
        
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            res.push_back(curr);
            
            
            for (int x : adj[curr]) {
                if (!visited[x]) {
                    visited[x] = true;
                    q.push(x);
                }
            }
        }
        return res;
    }
};