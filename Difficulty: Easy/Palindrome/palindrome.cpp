class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        if(n<0) return false;
        int orig_num = n;
        int rev = 0;
        while(n>0){
            rev = rev * 10  + n%10;
            n/=10;
        }
        return (rev==orig_num);
    }
};