class Solution {
  public:
    vector<vector<int>> matToAdj(vector<vector<int>>& mat) {
        // code here
        vector<vector<int>> adj;
        int n = mat.size();
        
        for(int i=0;i<n;i++){
            vector<int>row;
            for(int j=0;j<n;j++){
                if(mat[i][j] == 1) row.push_back(j);
            }
            adj.push_back(row);
        }
        return adj;
    }
};