class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int i = 0, j = 1, c = 0;
        while(i< a.size()) {
            if(j == a[i]) {
                i++;
                j++;
            }
            else if(j < a[i]) {
                c++;
                j++;
            }
            if(c == k) return j - 1;
        }
        if(i == a.size()){
            return a[a.size() - 1] + k - c;
        }
        return j - 1;
    }
};