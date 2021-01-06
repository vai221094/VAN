class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i = 0, gr = 0;
        vector<bool> out;
        for(i=0;i<candies.size();i++) {
            if(candies[i] > gr)
                gr = candies[i];
        }
        for(i=0;i<candies.size();i++){
            if(candies[i] + extraCandies >= gr)
                out.push_back(true);
            else
                out.push_back(false);
        }
        return out;
    }
};