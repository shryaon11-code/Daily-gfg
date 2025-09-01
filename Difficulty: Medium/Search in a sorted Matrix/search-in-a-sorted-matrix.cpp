class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size(), m = mat[0].size();
        int start = 0, end = n * m -1;
        
        while(start <= end)
        {
            int med = start + (end - start) / 2;
            int row = med / m;
            int col = med % m;
            
            if(mat[row][col] == x)
            return 1;
            else if(mat[row][col] < x)
            start = med + 1;
            else 
            end = med - 1;
        }
        
        return 0;
    }
};