class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int l = 0;
        int r = n-1;
        while(l < r){
            if(arr[l] + arr[r] > target) r--;
            else if(arr[l] + arr[r] < target) l++;
            else return {l+1, r+1};
        }
        return {-1, -1};
    }
};