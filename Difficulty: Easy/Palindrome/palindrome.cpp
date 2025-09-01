class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        if(n<0) return false;
        string str = to_string(n);
        int start = 0;
        int end = str.length()-1;
        while(start < end){
            if(str[start]!=str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};