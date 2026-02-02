class Solution {
  public:
    bool ispossible(vector<int> &arr,int low,int high,int mid,int k){
        int sum = 0, students = 1;
        for(int i=0;i<arr.size();i++){
            if(sum + arr[i] <= mid){
                sum += arr[i];
            }else{
                students++;
                sum = arr[i];
            }
        }
        if(students <= k){
            return true;
        }
        return false;
    }
    
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if(k>n){
            return -1;
        }
        int low = 0;
        int high = 0;
        
        for(int i=0;i<n;i++){
            if(low < arr[i]){
                low = arr[i];
            }
            high += arr[i];
        }
        
        while(low <= high){
            int mid = low + (high - low) /2;
            if(ispossible(arr,low,high,mid,k)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
        
    }
};