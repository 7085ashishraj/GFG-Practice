class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        unordered_set<int> s;
        for(int i=0;i<a.size();i++){
            s.insert(a[i]);
        }
        
        for(int i=0;i<b.size();i++){
            s.insert(b[i]);
        }
        
        
        vector<int> res(s.begin(),s.end());
        sort(res.begin(),res.end());
        return res;
        
    }
};