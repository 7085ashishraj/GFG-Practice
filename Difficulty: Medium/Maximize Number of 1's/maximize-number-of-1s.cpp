class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        
        int n = arr.size();
        int l = 0, r = 0, zeroCnt = 0, maxLen = 0;
        
        while(r<n){
            if(arr[r] == 0) zeroCnt++;
            while(zeroCnt > k){
                if(arr[l] == 0) zeroCnt--;
                l++;
            }
            int length = r-l+1;
            maxLen = max(maxLen, length);
            r++;
        }
        return maxLen;
        
    }
};
