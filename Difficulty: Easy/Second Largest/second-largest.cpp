class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = INT_MIN;
        int sec_largest = INT_MIN;
        
        if(n<2) return -1;
        
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                sec_largest = largest;
                largest = arr[i];
                
            }
            else if(arr[i]>sec_largest && arr[i]<largest){
                sec_largest = arr[i];
            }
            
        }
        if(sec_largest == INT_MIN){
            return -1;
        }
        return sec_largest;
    }
};