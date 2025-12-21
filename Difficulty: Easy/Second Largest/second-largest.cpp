class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int lar = INT_MIN;
        int sec_lar = INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>lar){
                sec_lar = lar;
                lar = arr[i];
            }else if(arr[i]<lar && arr[i]>sec_lar){
                sec_lar = arr[i];
            }
        }
        return sec_lar;
    }
};