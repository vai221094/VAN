class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& w) {
        int a[26] = {0};
        int i = 0, j=0, out = 0, flag = 0;
        for(i=0;i<allowed.size();i++){
            a[allowed[i] - 97] = 1;
        }
        for(i=0;i<w.size();i++){
            flag = 0;
            for(j=0;j<w[i].size();j++){
                if(a[w[i][j] - 97] == 0) {
                    flag = 1;
                }
            }
            if(!flag) out++; 
        }
        return out;
    }
};