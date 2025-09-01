// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();
        int m = arr[0].size();
        int row_max = -1;
        int i = 0, j = m - 1;
        
        while(i<n && j>=0)
        {
            if(arr[i][j] == 1)
            {
                row_max = i;
                j--;
            }
            else
            i++;
        }
        
        return row_max ;
    }
};
