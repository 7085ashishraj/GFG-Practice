class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<int> indegree(V, 0);
        vector<vector<int>> adj(V);
        
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        
        int cnt = 0;
        queue<int> que;
        for(int i=0;i<V;i++){
            if(indegree[i] == 0){
                que.push(i);
                cnt++;
            }
        }
        
        while(!que.empty()){
            int u = que.front();
            que.pop();
            
            for(int &v : adj[u]){
                indegree[v]--;
                
                if(indegree[v] == 0){
                    que.push(v);
                    cnt++;
                }
            }
        }
        if(cnt == V) return false;
        else return true;
    }
};