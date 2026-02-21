class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Code here
        vector<vector<int>> res(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i].first;
            int v = edges[i].second;
            res[u].push_back(v);
            res[v].push_back(u);
        }
        return res;
        
    }
};