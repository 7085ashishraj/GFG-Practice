

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int>suffixMax;
        
        int maxi = arr[n-1];
        
        suffixMax.push_back(maxi);
        
        for(int i=n-2;i>=0;i--){
            if(arr[i] >= maxi){
                maxi = arr[i];
                suffixMax.push_back(maxi);
                
            }
        }
        
        reverse(suffixMax.begin(), suffixMax.end());
        return suffixMax;
    }
};