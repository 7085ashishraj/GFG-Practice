class Solution {
  public:
  
    vector<int> GenerateRow(int row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1; col < row ;col++){
            ans *= (row - col);
            ans /= col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    
    
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        return GenerateRow(n);
    }
};
