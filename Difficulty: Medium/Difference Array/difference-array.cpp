class Solution {
  public:
  
    void update(vector<int>& diff, int l, int r, int v){
        diff[l] += v;
        if(r+1 < diff.size()){
            diff[r+1] -= v;
        }
    }
    vector<int> diffArray(vector<int>& arr, vector<vector<int>>& opr) {
        // code here
        int n = arr.size();
        
        vector<int> diff(n,0);
        
        for(auto& query : opr){
            int l = query[0];
            int r = query[1];
            int v = query[2];
            
            update(diff, l, r, v);
        }
        
        vector<int> res = arr;
        res[0] += diff[0];
        for(int i=1;i<n;i++){
            diff[i] += diff[i-1];
            res[i] += diff[i];
        }
        return res;
    }
};