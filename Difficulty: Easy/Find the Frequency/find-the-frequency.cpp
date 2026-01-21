/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        int count = 0;
        
        for(int ele : arr) {
            if(ele == x) {
                count++;
            }
        }
        
        return count;
    }
};