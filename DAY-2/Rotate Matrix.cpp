class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      
         if (matrix.empty() || matrix[0].empty()) {
           
            return;
           
        }
        
        int n = matrix.size();
      
        for (size_t i = 0; i < n; ++i) {
          
            for (size_t j = i; j < n; ++j) {
              
                swap(matrix[i][j], matrix[j][i]);
              
            }
        }
        
        for (size_t i = 0; i < n; ++i) {
          
          
            for (size_t j = 0; j < n/2; ++j) {
                swap(matrix[i][j], matrix[i][n-j-1]);
              
            }
        }
        
    }
};
