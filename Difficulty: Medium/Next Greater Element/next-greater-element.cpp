class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int>nge(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && arr[i] >= st.top()){
                st.pop();
            }
            if(st.size() == 0) nge[i] = -1;
            else nge[i] = st.top();
            
            st.push(arr[i]);
        }
        return nge;
    }
};