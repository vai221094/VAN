class Solution {
public:
    vector<int> decompressRLElist(vector<int>& a) {
        vector<int> out;
        int i = 0, j = 0, n = a.size();
        for(i = 0;i<n-1;i+=2) {
            for(j = 0;j<a[i];j++)
                out.push_back(a[i+1]);
        }
        return out;
    }
};