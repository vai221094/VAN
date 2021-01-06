class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& a) {
        int i = 0, j = 0, n = a.size(), c = 0;
        vector<int> b;
        for(i=0;i<n;i++) {
            c = 0;
            for(j=0;j<n;j++) {
                if(a[i] > a[j])
                    c++;
            }
            b.push_back(c);
        }
        return b;
    }
};