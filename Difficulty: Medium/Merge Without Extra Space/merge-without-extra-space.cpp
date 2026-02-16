class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        int i=0;
        int j=0;
        int k=0;
        vector<int> res(m+n);
        while(i<n && j<m){
            if(a[i]<b[j]){
                res[k++] = a[i++];
            }
            else{
                res[k++] = b[j++];
            }
        }
        while(i<n){
            res[k++] = a[i++];
        }
        while(j<m){
            res[k++] = b[j++];
        }
        
        for(int i=0;i<n;i++){
            a[i] = res[i];
        }
        
        for(int j=0;j<m;j++){
            b[j] = res[j+n];
        }
        
    }
};