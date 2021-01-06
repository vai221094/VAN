class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
       int i = 0, j = 0;
        int n = nums.size();
        vector<int> a;
        for(i=0;i<n;i++){
            a.insert(a.begin()+index[i], nums[i]);
        }
        return a;
    }
};