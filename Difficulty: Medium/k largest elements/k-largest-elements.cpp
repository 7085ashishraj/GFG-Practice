class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> ans;
        while(pq.size()>0){
            ans.push_back(pq.top());
            pq.pop();
        }
        sort(ans.rbegin(), ans.rend());
        return ans;
    }
};