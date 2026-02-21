class Solution {
  public:
  void helper(vector<vector<int>>& adj, vector<bool> &visited,int vertex, vector<int> &res ){
      visited[vertex] = true;
      res.push_back(vertex);
      
      for(int i : adj[vertex]){
          if(visited[i] == false)helper(adj, visited, i, res);
          
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<bool> visited(adj.size(), false);
        vector<int> res;
        for(int i=0;i<adj.size();i++){
            if(visited[i] == false)helper(adj, visited, i, res);
        }
        
        return res;
        
    }
};