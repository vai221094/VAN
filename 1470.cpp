class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> out;
        int i = 0, j=0;
        for(i=0, j=n;i<n, j<2 * n; i++, j++) {
                out.push_back(nums[i]);
                out.push_back(nums[j]);
        }
        return out;
    }
};