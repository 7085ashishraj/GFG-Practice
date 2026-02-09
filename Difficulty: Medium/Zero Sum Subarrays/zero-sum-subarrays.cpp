class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        int n = arr.size();
        //storing for sum and frequency(key ->value)
        unordered_map<int, int> mp;
        int sum = 0;
        mp[0] = 1; //can be edge case
        int cnt = 0;
        for(int x : arr){
            sum+=x;
            if(mp.find(sum) != mp.end()){
                cnt+=mp[sum];
            }
            mp[sum]++;
        }
        return cnt;
        
    }
};