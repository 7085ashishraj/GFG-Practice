class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
       int n = arr.size();
    vector<int> prefix(n + 1, 0);

    // build prefix sum array
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    int maxSum = 0;

    // compute sum of each subarray of size k
    // using prefix array
    for (int i = 0; i <= n - k; i++) {
        int j = i + k - 1;
        int currSum = prefix[j + 1] - prefix[i];

        // update maximum sum
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
    }
};