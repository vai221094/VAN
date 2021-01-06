class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i = 0, j = 0;
        int maxSum = 0, sum =0;
        for(i=0; i<accounts.size();i++) {
            sum = 0;
            for(j=0;j<accounts[0].size();j++) {
                sum += accounts[i][j];
            }
            if(sum > maxSum)
                maxSum = sum;
        }
         return maxSum;
    }
   };
