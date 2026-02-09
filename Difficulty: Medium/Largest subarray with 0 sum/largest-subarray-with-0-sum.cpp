class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sum = 0;
        int maxLen = 0;
        
        unordered_map<int, int> mp;
        mp[0] = -1;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(mp.find(sum) != mp.end()){
                int length = i - mp[sum];
                maxLen = max(length, maxLen);
            }else{
                mp[sum] = i;
            }
            
        }
        return maxLen;
    }
};