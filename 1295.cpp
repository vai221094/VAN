class Solution {
public:
    int findNumbers(vector<int>& n) {
        int i = 0, c = 0, out = 0;
        for(i = 0; i < n.size(); i++) {
            int tmp = n[i];
            c = 0;
            while(tmp > 0) {
                c++;
                tmp = tmp/10;
            }
            if(c%2 == 0) out++;
        }
        return out;
    }
};