//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>> A) {
        // code here
        int n = A.size();
        int count = 0;
        int i = 0 , j = n - 1;
        
        while(i < n && j >= 0)
        {
            if(A[i][j] == 0)
            {
                count += j+1;
                i++;
            }
            else
            j--;
        }
        
        return count;
    }
};