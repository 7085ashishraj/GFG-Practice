class Solution {
  public:
    int findKRotation(vector<int> &nums) {
        // Code Here
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = low + (high - low) /2;
            if((mid > n-1) && nums[mid] > nums[mid + 1]){
                return mid + 1;
            }
            else if((mid > 0) && nums[mid] < nums[mid-1]){
                return mid;
            }
            else if(nums[mid] < nums[high]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return 0;
    }
};
