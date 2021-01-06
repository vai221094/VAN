class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> out;
        int i = 0;
        long int runSum = 0;
        for(i=0;i<nums.size();i++)
        {
            runSum += nums[i];
            out.push_back(runSum);
        }
        return out;
    }
};